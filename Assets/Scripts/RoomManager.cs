using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using TMPro;

public class RoomManager : MonoBehaviourPunCallbacks
{
    public static string specificRoomName;
    public static GameObject switchRoomUI;
    public GameObject switchRoomUISample;
    [SerializeField]
    private TextMeshProUGUI supervisor_RoomName;
    public GameObject m_Content;
    public GameObject m_RoomListBox;
    PhotonView photonview;
    GameObject m_RoomListBox_Frontplate;
    GameObject m_RoomListBox_AnimatedContent;
    GameObject m_RoomListBox_TMP;
    void Start()
    {
        PhotonNetwork.ConnectUsingSettings();
        photonview = GetComponent<PhotonView>();
        switchRoomUI = switchRoomUISample;
    }

    // 포톤 서버룸 입장시
    public override void OnJoinedRoom()
    {
        base.OnJoinedRoom();
        SetRoomListReturn();

        Debug.Log("\nPhotonLobby.OnJoinedRoom()");
        Debug.Log("Current room name: " + PhotonNetwork.CurrentRoom.Name);
        Debug.Log("Other players in room: " + PhotonNetwork.CountOfPlayersInRooms);
        Debug.Log("Total players in room: " + (PhotonNetwork.CountOfPlayersInRooms + 1));
    }
    public void LeaveRoom()
    {
        PhotonNetwork.LeaveRoom();
        Debug.Log("Leave Current Room!");
    }
    public override void OnConnectedToMaster()
    {
        PhotonNetwork.JoinRoom(RoomManager.specificRoomName);
        Debug.Log("Switch Room : " + RoomManager.specificRoomName);
    }
    // 방 추가
    public void AddRoomListBox(string roomName)
    {
        GameObject goRoomListBox = Instantiate(m_RoomListBox, m_Content.transform);
        m_RoomListBox_Frontplate = goRoomListBox.transform.GetChild(2).gameObject;
        m_RoomListBox_AnimatedContent = m_RoomListBox_Frontplate.transform.GetChild(0).gameObject;
        m_RoomListBox_TMP = m_RoomListBox_AnimatedContent.transform.GetChild(1).gameObject;

        m_RoomListBox_TMP.GetComponent<TextMeshProUGUI>().text = roomName;
    }

    // 방 목록 전송하기
    public void SetRoomListReturn()
    {
        string strMessage = supervisor_RoomName.text;
        if (PhotonNetwork.NickName == "Supervisor") { photonview.RPC("RPC_RoomName", RpcTarget.All, strMessage); }
        Debug.Log("RoomNameReturn : " + strMessage);
    }

    [PunRPC]
    void RPC_RoomName(string rpc_RoomName)
    {
        Debug.Log("RPC_RoomName : " + rpc_RoomName);
        AddRoomListBox(rpc_RoomName);
    }
}
