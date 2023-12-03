// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using System.Runtime.InteropServices;
using UnityEngine;

namespace Microsoft.MixedReality.OpenXR
{
    /// <summary>
    /// Interop functions for Windows Perception APIs
    /// </summary>
    public static class PerceptionInterop
    {
        private static MixedRealityFeaturePlugin Feature => OpenXRFeaturePlugin<MixedRealityFeaturePlugin>.Feature;

        /// <summary>
        /// Get a COM wrapper object of a Windows.Perception.Spatial.SpatialCoordinateSystem object
        /// located at the given pose in the current Unity scene.
        /// If failed, the function returns nullptr.
        /// The application should acquire a new one when session origin is changed or tracking mode is changed
        /// by listening to XRInputSubsystem.trackingOriginUpdated and monitoring ARSession.currentTrackingMode.
        /// </summary>
        /// <param name="poseInScene">The pose of returned coordinate system in the current Unity scene.
        /// If input Pose.identity, the returned coordinate system will be at the origin of the current Unity scene.</param>
        /// <returns>Returns a COM wrapper C# object of type Windows.Perception.Spatial.SpatialCoordinateSystem. 
        /// Returns null if such coordinate system cannot be found at the moment.</returns>
        public static object GetSceneCoordinateSystem(Pose poseInScene)
        {
            if (Feature.IsValidAndEnabled() && OpenXRContext.Current.IsSessionRunning)
            {
                IntPtr unknown = NativeLib.TryAcquireSceneCoordinateSystem(poseInScene);
                if (unknown != IntPtr.Zero)
                {
                    object result = Marshal.GetObjectForIUnknown(unknown);
                    Marshal.Release(unknown);   // Balance the ref count because "feature.TryAcquire" increment it on return.
                    return result;
                }
            }
            return null;
        }
    }
}
