using UnityEngine;
using Photon.Pun;

public class PUNButtonController : MonoBehaviourPun
{
    private LunarcomButtonController lunarcombuttonController;

    private void Start()
    {
        // Cache references
        lunarcombuttonController = GetComponent<LunarcomButtonController>();
        //Debug.Log("buttoncontroller �ҷ�����");
        lunarcombuttonController.OnTogglePunButtonController += OnToggleButtonController;
        //Debug.Log("buttoncontroller ����");
        lunarcombuttonController.IsPunEnabled = true;
        //Debug.Log("buttoncontroller pun Ȱ��ȭ");
    }

    private void OnToggleButtonController()
    {
        //Debug.Log("�Լ� ����");
        photonView.RPC("PunRPC_ToggleButtonController", RpcTarget.All);
        //Debug.Log("RPC �ҷ�����");
    }

    [PunRPC]
    private void PunRPC_ToggleButtonController()
    {
        lunarcombuttonController.ToggleSelected();
    }
}
