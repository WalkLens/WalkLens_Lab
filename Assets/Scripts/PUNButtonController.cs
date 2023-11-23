using UnityEngine;
using Photon.Pun;

public class PUNButtonController : MonoBehaviourPun
{
    private LunarcomButtonController lunarcombuttonController;

    private void Start()
    {
        // Cache references
        lunarcombuttonController = GetComponent<LunarcomButtonController>();
        //Debug.Log("buttoncontroller 불러오기");
        lunarcombuttonController.OnTogglePunButtonController += OnToggleButtonController;
        //Debug.Log("buttoncontroller 구독");
        lunarcombuttonController.IsPunEnabled = true;
        //Debug.Log("buttoncontroller pun 활성화");
    }

    private void OnToggleButtonController()
    {
        //Debug.Log("함수 실행");
        photonView.RPC("PunRPC_ToggleButtonController", RpcTarget.All);
        //Debug.Log("RPC 불러오기");
    }

    [PunRPC]
    private void PunRPC_ToggleButtonController()
    {
        lunarcombuttonController.ToggleSelected();
    }
}
