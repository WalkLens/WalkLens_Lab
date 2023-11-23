using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using TMPro;

public class ChatManager : MonoBehaviourPunCallbacks
{
    public GameObject m_Content;
    //public TMP_InputField m_inputField;
    public Text outputText;

    PhotonView photonview;

    GameObject m_ContentText;

    string m_strUserName;


    void Start()
    {
        Screen.SetResolution(960, 600, false);
        PhotonNetwork.ConnectUsingSettings();
        m_ContentText = m_Content.transform.GetChild(0).gameObject;
        photonview = GetComponent<PhotonView>();
        m_strUserName = PhotonNetwork.LocalPlayer.NickName;
        AddChatMessage("connect user : " + PhotonNetwork.LocalPlayer.NickName);
    }

    void Update()
    {
        //if (Input.GetKeyDown(KeyCode.Return) && m_inputField.isFocused == false)
        //{
        //    m_inputField.ActivateInputField();
        //}
    }
    //public override void OnConnectedToMaster()
    //{
    //    RoomOptions options = new RoomOptions();
    //    options.MaxPlayers = 5;

    //    int nRandomKey = Random.Range(0, 100);

    //    m_strUserName = "user" + nRandomKey;

    //    PhotonNetwork.LocalPlayer.NickName = m_strUserName;
    //    PhotonNetwork.JoinOrCreateRoom("Room1", options, null);
    //}

    public override void OnJoinedRoom()
    {
        //m_strUserName = PhotonNetwork.LocalPlayer.NickName;
        //AddChatMessage("connect user : " + PhotonNetwork.LocalPlayer.NickName);
    }

    public void OnEndEditEvent()
    {
        //if (isInputEnded)
        //{
        //    Debug.Log("OnEndEditEvent!!!");
        //    string strMessage = m_strUserName + " : " + m_inputField.text;

        //    photonview.RPC("RPC_Chat", RpcTarget.All, strMessage);
        //    m_inputField.text = "";
        //    isInputEnded = false;
        //}
    }

    void AddChatMessage(string message)
    {
        GameObject goText = Instantiate(m_ContentText, m_Content.transform);

        goText.GetComponent<TextMeshProUGUI>().text = message;
        m_Content.GetComponent<RectTransform>().anchoredPosition = Vector3.zero;

    }

    public void SetInputReturn()
    {
        string strMessage = m_strUserName + " : " + outputText.text;
        photonview.RPC("RPC_Chat", RpcTarget.All, strMessage);
        Debug.Log("connect user : " + PhotonNetwork.LocalPlayer.NickName);
    }

    [PunRPC]
    void RPC_Chat(string message)
    {
        AddChatMessage(message);
    }

}