using Photon.Pun;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace MRTK.Tutorials.MultiUserCapabilities
{
    public class PhotonUser : MonoBehaviour
    {
        [SerializeField]
        private TMP_Text idText;
        [SerializeField]
        private TMP_Text stepText;
        private PhotonView pv;
        private string username;

        private void Start()
        {
            pv = GetComponent<PhotonView>();

            if (!pv.IsMine) return;

            // 유저 머리 위에 나오는 UI 이름 세팅
            username = PhotonNetwork.NickName;
            if (username == "Supervisor")
            {
                idText.text = "";
                stepText.text = "Supervisor";
            }
            else 
            {
                idText.text = username; 
            }
            pv.RPC("PunRPC_SetNickName", RpcTarget.AllBuffered, username);
        }

        [PunRPC]
        private void PunRPC_SetNickName(string nName)
        {
            gameObject.name = nName;
        }

        [PunRPC]
        private void PunRPC_ShareAzureAnchorId(string anchorId)
        {
            GenericNetworkManager.Instance.azureAnchorId = anchorId;

            Debug.Log("\nPhotonUser.PunRPC_ShareAzureAnchorId()");
            Debug.Log("GenericNetworkManager.instance.azureAnchorId: " + GenericNetworkManager.Instance.azureAnchorId);
            Debug.Log("Azure Anchor ID shared by user: " + pv.Controller.UserId);
        }

        public void ShareAzureAnchorId()
        {
            if (pv != null)
                pv.RPC("PunRPC_ShareAzureAnchorId", RpcTarget.AllBuffered,
                    GenericNetworkManager.Instance.azureAnchorId);
            else
                Debug.LogError("PV is null");
        }
    }
}
