using System.Collections;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using TMPro;

public class ChatManager : MonoBehaviourPunCallbacks
{
    // 채팅 내용을 표시할 부모 오브젝트
    public GameObject m_Content;

    // 텍스트 UI 요소로 변경된 채팅 내용을 표시할 변수
    public TMP_Text chatOutputText;

    // PhotonView 컴포넌트
    PhotonView photonview;

    // 채팅 내용을 담을 Text UI 요소
    GameObject m_ContentText;

    // 사용자의 닉네임
    string m_strUserName;

    void Start()
    {
        // 화면 해상도 설정
        Screen.SetResolution(960, 600, false);

        // Photon 설정에 따라 마스터 서버에 연결
        PhotonNetwork.ConnectUsingSettings();

        // 채팅 내용(Text UI)을 담을 GameObject의 자식 오브젝트(Text)를 참조
        m_ContentText = m_Content.transform.GetChild(0).gameObject;

        // PhotonView 컴포넌트 가져오기
        photonview = GetComponent<PhotonView>();
    }

    void Update()
    {
        // 사용자가 Enter 키를 누르면 채팅 입력 상자 활성화
        if (Input.GetKeyDown(KeyCode.Return))
        {
            OnEndEditEvent();
        }
    }

    public override void OnConnectedToMaster()
    {
        //// 방 설정
        //RoomOptions options = new RoomOptions();
        //options.MaxPlayers = 5;

        //// 랜덤한 닉네임 생성
        //int nRandomKey = Random.Range(0, 100);
        //m_strUserName = "user" + nRandomKey;

        //// PhotonNetwork.LocalPlayer.NickName에 닉네임 설정
        //PhotonNetwork.LocalPlayer.NickName = m_strUserName;

        //// 또는 이미 만들어진 방에 참가하거나 없으면 새로 생성
        //PhotonNetwork.JoinOrCreateRoom("Room1", options, null);
    }

    public override void OnJoinedRoom()
    {
        // 방에 참가했을 때의 처리
        AddChatMessage("Connected user: " + PhotonNetwork.LocalPlayer.NickName);
    }

    public void OnEndEditEvent()
    {
        // Enter 키를 눌렀을 때 채팅 메시지 전송
        string strMessage = m_strUserName + " : " + " " + "\n";

        // RPC를 사용하여 모든 플레이어에게 메시지 전송
        photonview.RPC("RPC_Chat", RpcTarget.All, strMessage);
    }

    void AddChatMessage(string message)
    {
        // 지연시간을 두고 메시지 추가
        StartCoroutine(AddMessageWithDelay(message, 0.1f));
    }

    IEnumerator AddMessageWithDelay(string message, float delay)
    {
        // 일정 시간을 기다린 후 메시지 추가
        yield return new WaitForSeconds(delay);

        // Text UI에 메시지 추가
        chatOutputText.text += message;

        // Scroll to the bottom
        Canvas.ForceUpdateCanvases();
        m_Content.GetComponent<RectTransform>().anchoredPosition = new Vector2(0, float.NegativeInfinity);
    }

    [PunRPC]
    void RPC_Chat(string message)
    {
        // RPC를 통해 받은 메시지를 처리하여 Text UI에 추가
        AddChatMessage(message);
    }
}
