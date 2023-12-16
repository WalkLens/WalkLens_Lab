using Photon.Pun;
using Photon.Realtime;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

namespace MRTK.Tutorials.MultiUserCapabilities
{
    public class PhotonLobby : MonoBehaviourPunCallbacks
    {
        public static PhotonLobby Lobby;
        public TextMeshProUGUI roomNameInput;
        public TextMeshProUGUI passwordInput;
        public GameObject student_Content;
        public GameObject room_Content;
        public GameObject studentBtn;
        public GameObject roomBtn;

        [SerializeField]
        private GameObject mainMenuUI;
        [SerializeField]
        private GameObject supervisor_connectUI;
        [SerializeField]
        private GameObject student_RoomListUI;
        [SerializeField]
        private Text stdName;
        private int roomNumber = 1;
        private int userIdCount;
        private bool isIdentified = false;

        private void Awake()
        {
            if (Lobby == null)
            {
                Lobby = this;
            }
            else
            {
                if (Lobby != this)
                {
                    Destroy(Lobby.gameObject);
                    Lobby = this;
                }
            }

            DontDestroyOnLoad(gameObject);

            GenericNetworkManager.OnReadyToStartNetwork += StartNetwork;
        }

        public override void OnConnectedToMaster()
        {
            userIdCount++;
        }

        // 포톤 서버룸 입장시
        public override void OnJoinedRoom()
        {
            base.OnJoinedRoom();

            Debug.Log("\nPhotonLobby.OnJoinedRoom()");
            Debug.Log("Current room name: " + PhotonNetwork.CurrentRoom.Name);
            Debug.Log("Other players in room: " + PhotonNetwork.CountOfPlayersInRooms);
            Debug.Log("Total players in room: " + (PhotonNetwork.CountOfPlayersInRooms + 1));
        }

        // 포톤 서버룸 조인 실패시 다시 시도
        public override void OnJoinRandomFailed(short returnCode, string message)
        {
            CreateRoom();
        }

        // 포톤 서버룸 생성 실패시 다시 시도
        public override void OnCreateRoomFailed(short returnCode, string message)
        {
            Debug.Log("\nPhotonLobby.OnCreateRoomFailed()");
            Debug.LogError("Creating Room Failed");
            CreateRoom();
        }

        // 포톤 서버룸 생성 시 룸넘버 증가
        public override void OnCreatedRoom()
        {
            base.OnCreatedRoom();
            roomNumber++;
        }

        public void OnCancelButtonClicked()
        {
            PhotonNetwork.LeaveRoom();
        }

        private void StartNetwork()
        {
            PhotonNetwork.ConnectUsingSettings();
            Lobby = this;
        }

        // 포톤 서버룸 생성
        public void CreateRoom()
        {
            string roomName = roomNameInput.text;
            string password = passwordInput.text;

            var roomOptions = new RoomOptions
            {
                IsVisible = true,
                IsOpen = true,
                MaxPlayers = 10,
                CustomRoomProperties = new ExitGames.Client.Photon.Hashtable
                {
                    { "Password", password }
                }
            };
            PhotonNetwork.CreateRoom(roomName, roomOptions);
            JoinRoom();
        }

        // Identification에서 Supervisor 선택시
        public void SetSupervisorId()
        {
            mainMenuUI.SetActive(false);
            supervisor_connectUI.SetActive(true); 
            PhotonNetwork.NickName = "Supervisor";
            isIdentified = true;
            //CreateRoom();
            //PhotonNetwork.JoinRoom(roomNameInput.text);
        }

        // Identification에서 Student 선택시
        public void SetStudentId()
        {
            mainMenuUI.SetActive(false);
            string nickName = stdName.text;
            Debug.Log("nickName : " + nickName);
            PhotonNetwork.NickName = nickName;
            isIdentified = true;
            student_RoomListUI.SetActive(true);
            //PhotonNetwork.JoinRoom(roomNameInput.text);
        }

        // 포톤 서버룸 조인
        private void JoinRoom()
        {
            if (isIdentified)
            {
                Debug.Log("UI비활성화");
                PhotonNetwork.JoinRoom(roomNameInput.text);
                Debug.Log("방 진입");
            }
        }
        public void AddStudentBtn()
        {
            GameObject studentNameObject = Instantiate(studentBtn,room_Content.transform);
            GameObject studentNameObject_Name = studentBtn.transform.GetChild(4).gameObject;
            studentNameObject_Name.GetComponent<TextMeshProUGUI>().text = stdName.text;
        }
        public void AddRoomBtn()
        {
            GameObject roomNameObject = Instantiate(studentBtn, room_Content.transform);
            GameObject roomNameObject_Name = studentBtn.transform.GetChild(4).gameObject;
            roomNameObject_Name.GetComponent<TextMeshProUGUI>().text = roomNameInput.text;
        }
    }
}
