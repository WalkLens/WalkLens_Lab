﻿// Copyright (c) Reality Collective. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

using RealityCollective.Attributes;
using UnityEditor;
using UnityEngine;

namespace RealityCollective.Editor.PropertyDrawers
{
    /// <summary>
    /// Renders enum flags on fields with the attribute.
    /// From https://answers.unity.com/questions/486694/default-editor-enum-as-flags-.html
    /// </summary>
    [CustomPropertyDrawer(typeof(EnumFlagsAttribute))]
    public sealed class EnumFlagsAttributeDrawer : PropertyDrawer
    {
        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            property.intValue = EditorGUI.MaskField(position, label, property.intValue, property.enumDisplayNames);
        }
    }
}