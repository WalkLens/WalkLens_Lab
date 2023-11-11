using Microsoft.Azure.SpatialAnchors;
using UnityEngine;

namespace MRTK.Tutorials.MultiUserCapabilities
{
    public class SharingModuleScript : MonoBehaviour
    {
        private AnchorModuleScript anchorModuleScript;
        private CloudSpatialAnchor currentCloudAnchor;

        private void Start()
        {
            anchorModuleScript = GetComponent<AnchorModuleScript>();
        }

        public void ShareAzureAnchor()
        {
            Debug.Log("\nSharingModuleScript.ShareAzureAnchor()");

            GenericNetworkManager.Instance.azureAnchorId = currentCloudAnchor.Identifier;
            Debug.Log("GenericNetworkManager.Instance.azureAnchorId: " + GenericNetworkManager.Instance.azureAnchorId);

            var pvLocalUser = GenericNetworkManager.Instance.localUser.gameObject;
            var pu = pvLocalUser.gameObject.GetComponent<PhotonUser>();
            pu.ShareAzureAnchorId();
        }

        public void GetAzureAnchor()
        {
            Debug.Log("\nSharingModuleScript.GetAzureAnchor()");
            Debug.Log("GenericNetworkManager.Instance.azureAnchorId: " + GenericNetworkManager.Instance.azureAnchorId);

            anchorModuleScript.FindAzureAnchor(GenericNetworkManager.Instance.azureAnchorId);
        }
    }
}
