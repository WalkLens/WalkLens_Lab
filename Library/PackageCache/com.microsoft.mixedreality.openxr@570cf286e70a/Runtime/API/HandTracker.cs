// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#pragma warning disable CS0618 // Suppress deprecation warnings

using System;
using System.Runtime.InteropServices;
using UnityEngine;

namespace Microsoft.MixedReality.OpenXR
{
    /// <summary>
    /// Represents a user's hand and the ability to track hand joints from it.
    /// </summary>
#if UNITY_ANDROID
    [Obsolete("Hand tracking on Android with the Mixed Reality OpenXR Plugin has been deprecated. " +
        "For apps using Android hand tracking, we recommend transitioning to the OpenXR plugins from Unity and Meta.", false)]
#endif
    public class HandTracker
    {
        /// <summary>
        /// The user's left hand.
        /// </summary>
        public static HandTracker Left { get; } = new HandTracker(Handedness.Left);

        /// <summary>
        /// The user's right hand.
        /// </summary>
        public static HandTracker Right { get; } = new HandTracker(Handedness.Right);

        private HandTrackingFeaturePlugin Feature = OpenXRFeaturePlugin<HandTrackingFeaturePlugin>.Feature;
        private readonly Handedness m_handedness;

        internal HandTracker(Handedness trackerHandedness)
        {
            m_handedness = trackerHandedness;
        }

        /// <summary>
        /// The maximum number of hand joints that might be tracked.
        /// </summary>
        public const int JointCount = 26;

        /// <summary>
        /// Fills the passed-in array with current hand joint locations, if possible.
        /// </summary>
        /// <param name="frameTime">Specify the <see cref="FrameTime"/> to locate the hand joints.</param>
        /// <param name="handJointLocations">An array of HandJointLocations, indexed according to the HandJoint enum.</param>
        /// <returns>Returns true when the hand tracker is actively tracking the hands.
        ///  Returns false when the hand tracker is disabled or it's not properly set up.</returns>
        /// <remarks>
        ///  The return value matches the XrHandTrackingDataSourceStateEXT::isActive value in XR_EXT_hand_tracking_data_source extension.
        ///  It returns true if the extension is not supported by OpenXR runtime because Unity cannot observe the hand tracker active state.
        /// </remarks>
        
        public bool TryLocateHandJoints(FrameTime frameTime, HandJointLocation[] handJointLocations)
        {
            if (handJointLocations.Length != JointCount)
            {
                Debug.LogError($"LocateJoints requires an array of size {JointCount}. You can use HandTracker.JointCount for this.");
                return false;
            }

            return Feature.IsValidAndEnabled() && NativeLib.TryGetHandJointData(m_handedness, frameTime, handJointLocations);
        }

        /// <summary>
        /// Get or set the motion range for this hand tracker.
        /// </summary>
        /// <remarks>
        /// Setting the motion range will take effect immediately for subsequent <see cref="TryLocateHandJoints"/> function calls.
        /// However, for Unity input system updates for hand joints, it will not take effect until next frame.
        ///
        /// If <see cref="HandJointsMotionRange.ConformingToController"/> is used with an actual hand tracker,
        /// <see cref="HandJointsMotionRange.Unobstructed"/> joints will still be returned.
        /// It's only valid when a runtime supports hand joints when using a physical controller.
        /// </remarks>
        public HandJointsMotionRange MotionRange
        {
            get
            {
                return Feature.IsValidAndEnabled() && OpenXRContext.Current.IsSessionRunning
                    ? NativeLib.GetHandJointsMotionRange(m_handedness)
                    : HandJointsMotionRange.Unobstructed;
            }
            set
            {
                if (Feature.IsValidAndEnabled())
                {
                    NativeLib.SetHandJointsMotionRange(m_handedness, value);
                }
            }
        }
    }

    /// <summary>
    /// Represents locational data for a hand joint.
    /// </summary>
    [StructLayout(LayoutKind.Sequential, Pack = 8)]
    public readonly struct HandJointLocation
    {
        /// <summary>
        /// Whether the corresponding hand joint is actively tracked.
        /// </summary>
        /// <remarks>If not actively tracked, the pose may be inferred or last-known but otherwise still meaningful.</remarks>
        public bool IsTracked => Convert.ToBoolean(isTracked);
        // bool isn't blittable, so marshal a byte across the P/Invoke layer instead
        private readonly byte isTracked;

        /// <summary>
        /// The world-space pose of the corresponding hand joint.
        /// </summary>
        public Pose Pose { get; }

        /// <summary>
        /// The radius of the corresponding joint in units of meters.
        /// </summary>
        public float Radius { get; }
    }

    /// <summary>
    /// Describes which hand the current hand tracker represents.
    /// </summary>
    public enum Handedness
    {
        /// <summary>
        /// Represents the user's left hand.
        /// </summary>
        Left = 0,

        /// <summary>
        /// Represents the user's right hand.
        /// </summary>
        Right
    }

    /// <summary>
    /// The supported tracked hand joints in OpenXR.
    /// </summary>
    /// <remarks>See https://registry.khronos.org/OpenXR/specs/1.0/html/xrspec.html#XrHandJointEXT for more information.</remarks>
    public enum HandJoint
    {
        /// <summary>
        /// The palm.
        /// </summary>
        Palm,
        /// <summary>
        /// The wrist.
        /// </summary>
        Wrist,
        /// <summary>
        /// The lowest joint of the thumb.
        /// </summary>
        ThumbMetacarpal,
        /// <summary>
        /// The second joint of the thumb.
        /// </summary>
        ThumbProximal,
        /// <summary>
        /// The joint nearest the tip of the thumb.
        /// </summary>
        ThumbDistal,
        /// <summary>
        /// The tip of the thumb.
        /// </summary>
        ThumbTip,
        /// <summary>
        /// The lowest joint of the index finger.
        /// </summary>
        IndexMetacarpal,
        /// <summary>
        /// The knuckle joint of the index finger.
        /// </summary>
        IndexProximal,
        /// <summary>
        /// The middle joint of the index finger.
        /// </summary>
        IndexIntermediate,
        /// <summary>
        /// The joint nearest the tip of the index finger.
        /// </summary>
        IndexDistal,
        /// <summary>
        /// The tip of the index finger.
        /// </summary>
        IndexTip,
        /// <summary>
        /// The lowest joint of the middle finger.
        /// </summary>
        MiddleMetacarpal,
        /// <summary>
        /// The proximal joint of the middle finger.
        /// </summary>
        MiddleProximal,
        /// <summary>
        /// The middle joint of the middle finger.
        /// </summary>
        MiddleIntermediate,
        /// <summary>
        /// The joint nearest the tip of the middle finger.
        /// </summary>
        MiddleDistal,
        /// <summary>
        /// The tip of the middle finger.
        /// </summary>
        MiddleTip,
        /// <summary>
        /// The lowest joint of the ring finger.
        /// </summary>
        RingMetacarpal,
        /// <summary>
        /// The knuckle of the ring finger.
        /// </summary>
        RingProximal,
        /// <summary>
        /// The middle joint of the ring finger.
        /// </summary>
        RingIntermediate,
        /// <summary>
        /// The joint nearest the tip of the ring finger.
        /// </summary>
        RingDistal,
        /// <summary>
        /// The tip of the ring finger.
        /// </summary>
        RingTip,
        /// <summary>
        /// The lowest joint of the little finger.
        /// </summary>
        LittleMetacarpal,
        /// <summary>
        /// The knuckle joint of the little finger.
        /// </summary>
        LittleProximal,
        /// <summary>
        /// The middle joint of the little finger.
        /// </summary>
        LittleIntermediate,
        /// <summary>
        /// The joint nearest the tip of the little finger.
        /// </summary>
        LittleDistal,
        /// <summary>
        /// The tip of the little finger.
        /// </summary>
        LittleTip,
    }

    /// <summary>
    /// The requested hand joints' range of motion from a controller.
    /// </summary>
    /// <remarks>See https://registry.khronos.org/OpenXR/specs/1.0/html/xrspec.html#XrHandJointsMotionRangeEXT for more information.</remarks>
    public enum HandJointsMotionRange
    {
        /// <summary>
        /// The range of motion of a human hand, without any obstructions.
        /// </summary>
        Unobstructed = 1,
        /// <summary>
        /// The range of motion of the hand joints taking into account any physical limits imposed by the controller itself.
        /// </summary>
        /// <remarks>
        /// This will tend to be the most accurate pose compared to the user’s actual hand pose, but might not allow a closed fist for example.
        /// </remarks>
        ConformingToController = 2,
    }
}
