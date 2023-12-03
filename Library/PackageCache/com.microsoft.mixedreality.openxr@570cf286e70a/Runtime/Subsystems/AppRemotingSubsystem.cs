// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using System.Globalization;
using System.Runtime.InteropServices;
using System.Security.Cryptography.X509Certificates;
using UnityEngine;
using UnityEngine.XR.Management;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace Microsoft.MixedReality.OpenXR.Remoting
{
    internal class AppRemotingSubsystem
    {
        private static AppRemotingSubsystem m_instance = new AppRemotingSubsystem();
        private bool m_runtimeOverrideAttempted = false;
        private static RemotingState s_remotingState;
        internal static RemotingState AppRemotingState
        {
            get { return s_remotingState; }
        }

        private RemotingConnectConfiguration m_remotingConnectConfiguration;
        private static SecureRemotingConnectConfiguration s_secureRemotingConnectConfiguration = default;
        private static InternalValidateServerCertificateDelegate s_internalValidateServerCertificateCallback = null;
        private DisconnectReason m_disconnectReasonOnLossPending = DisconnectReason.None; 

        private static ListenMode s_listenMode;
        private RemotingListenConfiguration m_remotingListenConfiguration;
        private static SecureRemotingListenConfiguration s_secureRemotingListenConfiguration = default;
        private static SecureRemotingValidateAuthenticationTokenDelegate s_validateAuthenticationTokenCallback = null;

        internal static AppRemotingSubsystem GetCurrent()
        {
            return m_instance;
        }

        internal static bool UseSystemRuntime { get; set; } = false;

        internal bool IsAppRemotingEnabled()
        {
            return OpenXRFeaturePlugin<AppRemotingPlugin>.Feature.IsValidAndEnabled();
        }

        internal bool InPlayModeRemoting()
        {
#if UNITY_EDITOR
            return (OpenXRFeaturePlugin<PlayModeRemotingPlugin>.Feature.IsValidAndEnabled() && EditorApplication.isPlaying);
#else
            return false;
#endif
        }

        internal bool IsReadyToStart()
        {
            return IsAppRemotingEnabled() && !InPlayModeRemoting() && s_remotingState == RemotingState.Idle;
        }

        internal bool TryGetConnectionState(out ConnectionState connectionState, out DisconnectReason disconnectReason)
        {
            return NativeLib.TryGetRemotingConnectionState(out connectionState, out disconnectReason);
        }

        internal bool TryLocateUserReferenceSpace(FrameTime frameTime, out Pose pose)
        {
            return NativeLib.TryLocateUserReferenceSpace(frameTime, out pose);
        }

        internal bool TryConvertToRemoteTime(long playerPerformanceCount, out long remotePerformanceCount)
        {
            return NativeLib.TryConvertToRemoteTime(playerPerformanceCount, out remotePerformanceCount);
        }

        internal bool TryConvertToPlayerTime(long remotePerformanceCount, out long playerPerformanceCount)
        {
            return NativeLib.TryConvertToPlayerTime(remotePerformanceCount, out playerPerformanceCount);
        }

        internal bool TryEnableRemotingOverride()
        {
            if (!m_runtimeOverrideAttempted && !UseSystemRuntime)
            {
                m_runtimeOverrideAttempted = true;
                if (NativeLib.TryEnableRemotingOverride())
                {
                    return true;
                }
            }
            return false;
        }

        internal void ResetRemotingOverride()
        {
            if (m_runtimeOverrideAttempted)
            {
                m_runtimeOverrideAttempted = false;
                NativeLib.ResetRemotingOverride();
            }
        }

        internal unsafe void InitializeRemoting()
        {
            bool secureConnect = false, secureListen = false;
            NativeLib.SetRemoteSpeechCulture(CultureInfo.CurrentCulture.Name);

            if (s_remotingState == RemotingState.Connect)
            {
                Debug.Log($"[AppRemotingSubsystem] Initializing Remoting Connect");
                if (m_remotingConnectConfiguration.secureConnectConfiguration != null)
                {
                    secureConnect = true;
                    s_secureRemotingConnectConfiguration = m_remotingConnectConfiguration.secureConnectConfiguration.Value;
                    if (s_secureRemotingConnectConfiguration.ValidateServerCertificateCallback != null)
                    {
                        s_internalValidateServerCertificateCallback = new InternalValidateServerCertificateDelegate(ImplementValidateServerCertificate);
                    }
                }

                InternalRemotingConnectConfiguration remotingConnectConfiguration;
                remotingConnectConfiguration.RemoteHostName = m_remotingConnectConfiguration.RemoteHostName;
                remotingConnectConfiguration.RemotePort = m_remotingConnectConfiguration.RemotePort;
                remotingConnectConfiguration.MaxBitrateKbps = m_remotingConnectConfiguration.MaxBitrateKbps;
                remotingConnectConfiguration.VideoCodec = m_remotingConnectConfiguration.VideoCodec;
                remotingConnectConfiguration.EnableAudio = m_remotingConnectConfiguration.EnableAudio;
                remotingConnectConfiguration.AudioCaptureMode = m_remotingConnectConfiguration.AudioCaptureMode;

                // The following method is used for both secure and non-secure Connect in native layer.
                // The secure mode parameters are used in native layer only when secureConnect
                // is set to true, otherwise they are disregarded. 
                NativeLib.ConnectRemoting(
                                remotingConnectConfiguration,
                                secureConnect,
                                s_secureRemotingConnectConfiguration.AuthenticationToken,
                                s_secureRemotingConnectConfiguration.PerformSystemValidation,
                                s_internalValidateServerCertificateCallback);
            }
            else if (s_remotingState == RemotingState.Listen)
            {
                Debug.Log($"[AppRemotingSubsystem] Initializing Remoting Listen");
                if (m_remotingListenConfiguration.secureListenConfiguration != null)
                {
                    secureListen = true;
                    s_secureRemotingListenConfiguration = m_remotingListenConfiguration.secureListenConfiguration.Value;
                    if (s_secureRemotingListenConfiguration.ValidateAuthenticationTokenCallback != null)
                    {
                        s_validateAuthenticationTokenCallback = new SecureRemotingValidateAuthenticationTokenDelegate(ImplementValidateAuthenticationToken);
                    }
                }

                InternalRemotingListenConfiguration remotingListenConfiguration;
                remotingListenConfiguration.ListenInterface = m_remotingListenConfiguration.ListenInterface;
                remotingListenConfiguration.HandshakeListenPort = m_remotingListenConfiguration.HandshakeListenPort;
                remotingListenConfiguration.TransportListenPort = m_remotingListenConfiguration.TransportListenPort;
                remotingListenConfiguration.MaxBitrateKbps = m_remotingListenConfiguration.MaxBitrateKbps;
                remotingListenConfiguration.VideoCodec = m_remotingListenConfiguration.VideoCodec;
                remotingListenConfiguration.EnableAudio = m_remotingListenConfiguration.EnableAudio;
                remotingListenConfiguration.AudioCaptureMode = m_remotingListenConfiguration.AudioCaptureMode;

                if (secureListen)
                {
                    NativeLib.ListenRemoting(
                                    remotingListenConfiguration,
                                    true,
                                    Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafePtr(s_secureRemotingListenConfiguration.Certificate),
                                    (uint)(s_secureRemotingListenConfiguration.Certificate.Length),
                                    s_secureRemotingListenConfiguration.SubjectName,
                                    s_secureRemotingListenConfiguration.KeyPassphrase,
                                    s_validateAuthenticationTokenCallback);

                }
                else
                {
                    NativeLib.ListenRemoting(
                        remotingListenConfiguration,
                        false,
                        null,
                        0,
                        string.Empty,
                        string.Empty,
                        null);
                }
            }
        }

        internal void InitializePlayModeRemoting(RemotingConnectConfiguration playModeConfiguration)
        {
            m_remotingConnectConfiguration = playModeConfiguration;
            s_remotingState = RemotingState.Connect;
            InitializeRemoting();
        }

        internal void OnSessionLossPending()
        {
            if (s_remotingState == RemotingState.Connect)
            {
                _ = TryGetConnectionState(out ConnectionState connectionState, out m_disconnectReasonOnLossPending);

                if (m_disconnectReasonOnLossPending == DisconnectReason.RemotingVersionMismatch)
                {
                    Debug.LogError($"The Holographic Remoting Player app has a mismatched version " +
                        $"on the remote host {m_remotingConnectConfiguration.RemoteHostName}:{m_remotingConnectConfiguration.RemotePort}. " +
                        $"Please update the Player app on your headset and try again.");
                }
                else
                {
                    Debug.LogError($"[AppRemotingSubsystem] Cannot establish a connection to Holographic Remoting Player " +
                        $"on the target with IP Address {m_remotingConnectConfiguration.RemoteHostName}:{m_remotingConnectConfiguration.RemotePort}." +
                        $"Disconnect Reason:{m_disconnectReasonOnLossPending}");
                }

            }
            else if (s_remotingState == RemotingState.Listen)
            {
                Debug.Log("[AppRemotingSubsystem] Listening to incoming Holographic Remoting connection is interrupted.");
            }
        }

        private System.Collections.IEnumerator ConnectRoutine(RemotingConnectConfiguration connectConfiguration)
        {
            var defaultWait = new WaitForSeconds(0.5f);
            if (s_remotingState == RemotingState.Idle)
            {
                m_remotingConnectConfiguration = connectConfiguration;
                m_remotingListenConfiguration = default;
                s_remotingState = RemotingState.Connect;

                ConnectionState previousConnectionState = ConnectionState.Disconnected;
                yield return new GameObject("StartOrStopXRHelper", typeof(StartOrStopXRHelper))
                {
                    hideFlags = HideFlags.HideAndDontSave
                };

                while (true)
                {    
                    if (!TryGetConnectionState(out ConnectionState connectionState, out DisconnectReason disconnectReason))
                    {
                        connectionState = ConnectionState.Disconnected;
                        // TryGetConnectionState() cannot retreive correct disconnectReason after the context gets invalid, 
                        // which happens immediately after session loss pending. Use the prevviously stored disconnectReason
                        // on session loss pending and a valid context below.
                        if(m_disconnectReasonOnLossPending != DisconnectReason.None)
                        {
                            disconnectReason = m_disconnectReasonOnLossPending;
                            m_disconnectReasonOnLossPending = DisconnectReason.None;
                        }
                    }

                    if (connectionState != previousConnectionState)
                    {
                        previousConnectionState = connectionState;

                        if (connectionState == ConnectionState.Connected)
                        {
                            Connected?.Invoke();
                        }
                        else if (connectionState == ConnectionState.Disconnected)
                        {
                            Disconnecting?.Invoke(disconnectReason);
                        }
                    }

                    if (XRGeneralSettings.Instance.Manager.activeLoader == null)
                    {
                        break;
                    }
                    yield return defaultWait;
                }
            }
            else
            {
                Debug.LogError("Cannot connect when previous connection is still in progress");
            }
        }

        internal void StartConnecting(RemotingConnectConfiguration connectConfiguration)
        {
            AppRemotingCoroutineRunner.Start(ConnectRoutine(connectConfiguration));
        }

#pragma warning disable CS0618 // to use the obsolete fields to connect
        internal System.Collections.IEnumerator ConnectLegacy(RemotingConfiguration configuration)
        {
            RemotingConnectConfiguration connectConfiguration;
            connectConfiguration.RemoteHostName = configuration.RemoteHostName;
            connectConfiguration.RemotePort = configuration.RemotePort;
            connectConfiguration.MaxBitrateKbps = configuration.MaxBitrateKbps;
            connectConfiguration.VideoCodec = configuration.VideoCodec;
            connectConfiguration.EnableAudio = configuration.EnableAudio;
            connectConfiguration.AudioCaptureMode = RemotingAudioCaptureMode.SystemWideCapture;
            connectConfiguration.secureConnectConfiguration = null;
            yield return ConnectRoutine(connectConfiguration);
        }
#pragma warning restore CS0618

        private System.Collections.IEnumerator ListenRoutine(RemotingListenConfiguration listenConfiguration, ListenMode listenMode, Action onRemotingListenCompleted)
        {
            var defaultWait = new WaitForSeconds(0.5f);
            s_listenMode = listenMode;

            if (s_remotingState == RemotingState.Idle)
            {
                m_remotingListenConfiguration = listenConfiguration;
                m_remotingConnectConfiguration = default;
                s_remotingState = RemotingState.Listen;

                while (s_remotingState == RemotingState.Listen)
                {
                    ConnectionState previousConnectionState = ConnectionState.Disconnected;
                    yield return new GameObject("StartOrStopXRHelper", typeof(StartOrStopXRHelper))
                    {
                        hideFlags = HideFlags.HideAndDontSave
                    };

                    while (true)
                    {
                        if (!TryGetConnectionState(out ConnectionState connectionState, out DisconnectReason disconnectReason))
                        {
                            connectionState = ConnectionState.Disconnected;
                        }

                        if (connectionState != previousConnectionState)
                        {
                            previousConnectionState = connectionState;

                            if (connectionState == ConnectionState.Connected)
                            {
                                Connected?.Invoke();
                            }
                            else if (connectionState == ConnectionState.Disconnected)
                            {
                                Debug.Log("[AppRemotingSubsystem] Listen, After disconnection, Stop XR Loader.");
                                Disconnecting?.Invoke(disconnectReason);
                                StartOrStopXRHelper.StopXrLoader();
                                break;  // If disconnected, stop XR session and try to restart.
                            }
                        }

                        if (XRGeneralSettings.Instance.Manager.activeLoader == null)
                        {
                            break;  // if XR loader is already stopped, try to restart.
                        }
                        yield return defaultWait;
                    }
                    yield return defaultWait;
                }
            }
            else
            {
                Debug.LogError("[AppRemotingSubsystem] Cannot listen when previous connection is still in progress");
            }

            if (onRemotingListenCompleted != null && s_listenMode == ListenMode.LegacyListen)
            {
                onRemotingListenCompleted.Invoke();
            }
        }

        internal void StartListening(RemotingListenConfiguration listenConfiguration, ListenMode listenMode, Action onRemotingListenCompleted = null)
        {
            AppRemotingCoroutineRunner.Start(ListenRoutine(listenConfiguration, listenMode, onRemotingListenCompleted));
        }

        internal System.Collections.IEnumerator ListenLegacy(RemotingListenConfiguration listenConfiguration, ListenMode listenMode, Action onRemotingListenCompleted = null)
        {
            yield return ListenRoutine(listenConfiguration, listenMode, onRemotingListenCompleted);
        }

        // IL2CPP does not support marshaling delegates that point to instance methods to native code.
        // Using a static method that handles the callback and redirect accordingly. Note that 
        // certificate handling is also done in the following method and hence the signature is a little different than ValidateServerCertificateCallback.
        [MonoPInvokeCallback]
        private static SecureRemotingCertificateValidationResult ImplementValidateServerCertificate(string hostName, SecureRemotingCertificateValidationResult systemValidationResult)
        {
            X509Certificate2Collection certChain = GetCertificateChain();
            SecureRemotingCertificateValidationResult? systemValidationResultPassed = s_secureRemotingConnectConfiguration.PerformSystemValidation ? systemValidationResult : (SecureRemotingCertificateValidationResult?)null;
            return s_secureRemotingConnectConfiguration.ValidateServerCertificateCallback(hostName, certChain, systemValidationResultPassed);
        }

        // Intended to use only as part of secure connect
        private static X509Certificate2Collection GetCertificateChain()
        {
            X509Certificate2Collection certChain = new X509Certificate2Collection();
            uint certChainLength = NativeLib.GetNumCertificates();
            for (uint certIndex = 0; certIndex < certChainLength; certIndex++)
            {
                IntPtr certificate = NativeLib.GetCertificate(certIndex, out int size);
                byte[] certByteArray = new byte[size];
                Marshal.Copy(certificate, certByteArray, 0, size);
                X509Certificate2 cert = new X509Certificate2(certByteArray);
                certChain.Add(cert);
            }
            return certChain;
        }

        // IL2CPP does not support marshaling delegates that point to instance methods to native code.
        // Using a static method that handles the callback and redirect accordingly.
        [MonoPInvokeCallback]
        private static bool ImplementValidateAuthenticationToken(string authenticationTokenToCheck)
        {
            return s_secureRemotingListenConfiguration.ValidateAuthenticationTokenCallback(authenticationTokenToCheck);
        }

        private System.Collections.IEnumerator DisconnectAndStopXR()
        {
            if (OpenXRContext.Current.Instance != 0)
            {
                // Notify the AR Foundation subsystems before the subsystem destroy and 
                // allow some time for cleaning up
                NativeLib.DestroyAnchorSubsystemPending();

                // wait for one frame to make sure the Anchor changes are notified to Unity on GetAnchorChanges() callback
                yield return null;

                NativeLib.RemoveAllAnchors();

                // wait for one frame to make sure removed anchors are notified
                yield return null;

                NativeLib.DisconnectRemoting();
            }

            StartOrStopXRHelper.StopXrLoader();
        }

        internal void Disconnect(bool invokedFromStopListening = false)
        {
            if (s_remotingState != RemotingState.Connect && s_remotingState != RemotingState.Listen)
            {
                Debug.LogError("[AppRemotingSubsystem] Cannot disconnect when the remoting connection is not in progress.");
            }
            Disconnecting?.Invoke(DisconnectReason.DisconnectRequest);
            if (s_remotingState != RemotingState.Disconnecting)
            {
                RemotingState previousRemotingState = s_remotingState;
                s_remotingState = RemotingState.Disconnecting;
                AppRemotingCoroutineRunner.Start(DisconnectAndStopXR());
                if (previousRemotingState == RemotingState.Listen && s_listenMode == ListenMode.Listen && !invokedFromStopListening)
                {
                    // Return if stopListening is not invoked and continue listening.
                    Debug.Log("[AppRemotingSubsystem] Disconnect, Try restart XR session");
                    s_remotingState = RemotingState.Listen;
                    return;
                }
                else
                {
                    s_remotingState = RemotingState.Idle;
                    if (IsAppRemotingEnabled() && !InPlayModeRemoting())
                    {
                        ReadyToStart?.Invoke();
                    }
                }
            }
        }

        internal void StopListening()
        {
            if (s_remotingState != RemotingState.Listen)
            {
                Debug.LogError("[AppRemotingSubsystem] Cannot stop listening when remoting listen is not in progress");
                return;
            }
            else if (s_listenMode == ListenMode.LegacyListen)
            {
                Debug.LogError("[AppRemotingSubsystem] StopListening is not supported with `Listen` coroutine, use `Disconnect` instead");
                return;
            }
            else
            {
                Disconnect(invokedFromStopListening: true);
            }
        }

        internal event ReadyToStartDelegate ReadyToStart;
        internal event DisconnectingDelegate Disconnecting;
        internal event ConnectedDelegate Connected;
    }

    internal class StartOrStopXRHelper : MonoBehaviour
    {
        private void Start()
        {
            // Please make sure to enable "Microphone" capability in Unity Player settings for speech recognition to work 
            // in UWP app remoting. Although it does not use the microphone on remote PC, Unity needs this. 
            StartCoroutine(EnsureInitialization());
        }

        public static System.Collections.IEnumerator EnsureInitialization()
        {
            if (XRGeneralSettings.Instance.Manager.activeLoader == null)
            {
                Debug.Log("[AppRemotingSubsystem] InitializeLoader");
                yield return XRGeneralSettings.Instance.Manager.InitializeLoader();
            }

            if (XRGeneralSettings.Instance.Manager.activeLoader != null)
            {
                Debug.Log("[AppRemotingSubsystem] StartSubsystems");
                XRGeneralSettings.Instance.Manager.StartSubsystems();
            }
        }

        public static void StopXrLoader()
        {
            if (XRGeneralSettings.Instance.Manager.activeLoader != null)
            {
                XRGeneralSettings.Instance.Manager.StopSubsystems();
                Debug.Log("[AppRemotingSubsystem] StopSubsystems");

                if (XRGeneralSettings.Instance.Manager.isInitializationComplete)
                {
                    XRGeneralSettings.Instance.Manager.DeinitializeLoader();
                    Debug.Log("[AppRemotingSubsystem] DeinitializeLoader");
                }
            }
        }

#if UNITY_EDITOR
        public static void OnEnterPlaymodeInEditor()
        {
            EditorApplication.playModeStateChanged += OnPlayModeStateChanged;
        }

        private static void OnPlayModeStateChanged(PlayModeStateChange state)
        {
            // If PlayModeRemotingPlugin isn't enabled or InitManagerOnStart is enabled, we don't need the helper.
            XRGeneralSettings standaloneGeneralSettings = XRSettingsHelpers.GetOrCreateXRGeneralSettings(BuildTargetGroup.Standalone);
            if (!OpenXRFeaturePlugin<PlayModeRemotingPlugin>.Feature.IsValidAndEnabled() || standaloneGeneralSettings == null || standaloneGeneralSettings.InitManagerOnStart)
            {
                EditorApplication.playModeStateChanged -= OnPlayModeStateChanged;
                return;
            }

            if (state == PlayModeStateChange.EnteredPlayMode)
            {
                _ = new GameObject("StartOrStopXRHelper", typeof(StartOrStopXRHelper))
                {
                    hideFlags = HideFlags.HideAndDontSave
                };
            }
            else if (state == PlayModeStateChange.ExitingPlayMode)
            {
                StopXrLoader();
                EditorApplication.playModeStateChanged -= OnPlayModeStateChanged;
            }
        }
#endif
    }

    internal delegate SecureRemotingCertificateValidationResult InternalValidateServerCertificateDelegate(string hostName, SecureRemotingCertificateValidationResult systemValidationResult);

    internal enum ListenMode
    {
        Listen = 0,
        LegacyListen = 1
    };

    internal enum RemotingState
    {
        Idle = 0,
        Connect = 1,
        Listen = 2,
        Disconnecting = 3
    }

    // This internal struct is same as "RemotingConnectConfiguration" without "SecureRemotingConnectConfiguration" 
    // used for native marshalling purposes.
    internal struct InternalRemotingConnectConfiguration
    {
        public string RemoteHostName;
        public ushort RemotePort;
        public uint MaxBitrateKbps;
        public RemotingVideoCodec VideoCodec;
        public bool EnableAudio;
        public RemotingAudioCaptureMode AudioCaptureMode;
    }

    // This internal struct is same as "RemotingListenConfiguration" without "SecureRemotingListenConfiguration" 
    // used for native marshalling purposes.
    internal struct InternalRemotingListenConfiguration
    {
        public string ListenInterface;
        public ushort HandshakeListenPort;
        public ushort TransportListenPort;
        public uint MaxBitrateKbps;
        public RemotingVideoCodec VideoCodec;
        public bool EnableAudio;
        public RemotingAudioCaptureMode AudioCaptureMode;
    }
}