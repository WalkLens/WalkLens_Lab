using UnityEngine;

namespace UnityEditor.XR.ARSubsystems
{
    /// <summary>
    /// This class shows a warning that com.unity.xr.arsubsystems is now deprecated.
    /// </summary>
    class DeprecatedWarning
    {
        const string k_Title = "Deprecated: AR Subsystems Package";
        const string k_Message = "AR Subsystems package has been deprecated. It is now a part of AR Foundation package. If you have an explicit dependency on AR Subsystems package then replace it with AR Foundation package in the manifest.json file.";
        const string k_HideWarningKey = "HideARSubsystemsDeprecatedWarning";

        [InitializeOnLoadMethod]
        static void ShowWarning()
        {
            if (Application.isBatchMode)
            {
                return;
            }

            if (EditorUserSettings.GetConfigValue(k_HideWarningKey)?.Equals("true") ?? false)
            {
                return;
            }

            var hideWarning = !EditorUtility.DisplayDialog(
                k_Title,
                k_Message,
                "Understood",
                "Don't warn me again for this project"
            );
            EditorUserSettings.SetConfigValue(k_HideWarningKey, hideWarning.ToString().ToLower());
        }
    }
}
