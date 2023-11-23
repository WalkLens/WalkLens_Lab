using System.Collections;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using TMPro;

public class ChatManager : MonoBehaviourPunCallbacks
{
    // ä�� ������ ǥ���� �θ� ������Ʈ
    public GameObject m_Content;

    // �ؽ�Ʈ UI ��ҷ� ����� ä�� ������ ǥ���� ����
    public TMP_Text chatOutputText;

    // PhotonView ������Ʈ
    PhotonView photonview;

    // ä�� ������ ���� Text UI ���
    GameObject m_ContentText;

    // ������� �г���
    string m_strUserName;

    void Start()
    {
        // ȭ�� �ػ� ����
        Screen.SetResolution(960, 600, false);

        // Photon ������ ���� ������ ������ ����
        PhotonNetwork.ConnectUsingSettings();

        // ä�� ����(Text UI)�� ���� GameObject�� �ڽ� ������Ʈ(Text)�� ����
        m_ContentText = m_Content.transform.GetChild(0).gameObject;

        // PhotonView ������Ʈ ��������
        photonview = GetComponent<PhotonView>();
    }

    void Update()
    {
        // ����ڰ� Enter Ű�� ������ ä�� �Է� ���� Ȱ��ȭ
        if (Input.GetKeyDown(KeyCode.Return))
        {
            OnEndEditEvent();
        }
    }

    public override void OnConnectedToMaster()
    {
        //// �� ����
        //RoomOptions options = new RoomOptions();
        //options.MaxPlayers = 5;

        //// ������ �г��� ����
        //int nRandomKey = Random.Range(0, 100);
        //m_strUserName = "user" + nRandomKey;

        //// PhotonNetwork.LocalPlayer.NickName�� �г��� ����
        //PhotonNetwork.LocalPlayer.NickName = m_strUserName;

        //// �Ǵ� �̹� ������� �濡 �����ϰų� ������ ���� ����
        //PhotonNetwork.JoinOrCreateRoom("Room1", options, null);
    }

    public override void OnJoinedRoom()
    {
        // �濡 �������� ���� ó��
        AddChatMessage("Connected user: " + PhotonNetwork.LocalPlayer.NickName);
    }

    public void OnEndEditEvent()
    {
        // Enter Ű�� ������ �� ä�� �޽��� ����
        string strMessage = m_strUserName + " : " + " " + "\n";

        // RPC�� ����Ͽ� ��� �÷��̾�� �޽��� ����
        photonview.RPC("RPC_Chat", RpcTarget.All, strMessage);
    }

    void AddChatMessage(string message)
    {
        // �����ð��� �ΰ� �޽��� �߰�
        StartCoroutine(AddMessageWithDelay(message, 0.1f));
    }

    IEnumerator AddMessageWithDelay(string message, float delay)
    {
        // ���� �ð��� ��ٸ� �� �޽��� �߰�
        yield return new WaitForSeconds(delay);

        // Text UI�� �޽��� �߰�
        chatOutputText.text += message;

        // Scroll to the bottom
        Canvas.ForceUpdateCanvases();
        m_Content.GetComponent<RectTransform>().anchoredPosition = new Vector2(0, float.NegativeInfinity);
    }

    [PunRPC]
    void RPC_Chat(string message)
    {
        // RPC�� ���� ���� �޽����� ó���Ͽ� Text UI�� �߰�
        AddChatMessage(message);
    }
}
