using Photon.Pun;
using Photon.Realtime;
using UnityEngine;
using UnityEngine.UI;

namespace MRTK.Tutorials.MultiUserCapabilities
{
    public class PhotonLobby : MonoBehaviourPunCallbacks
    {
        public static PhotonLobby Lobby;
        [SerializeField]
        private GameObject identificationUI;
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
            var randomUserId = Random.Range(0, 999999);

            //PhotonNetwork.AutomaticallySyncScene = true;
            //PhotonNetwork.AuthValues = new AuthenticationValues();
            //PhotonNetwork.AuthValues.UserId = randomUserId.ToString();
            userIdCount++;
            //PhotonNetwork.NickName = PhotonNetwork.AuthValues.UserId;
        }

        public override void OnJoinedRoom()
        {
            base.OnJoinedRoom();

            Debug.Log("\nPhotonLobby.OnJoinedRoom()");
            Debug.Log("Current room name: " + PhotonNetwork.CurrentRoom.Name);
            Debug.Log("Other players in room: " + PhotonNetwork.CountOfPlayersInRooms);
            Debug.Log("Total players in room: " + (PhotonNetwork.CountOfPlayersInRooms + 1));
        }

        public override void OnJoinRandomFailed(short returnCode, string message)
        {
            CreateRoom();
        }

        public override void OnCreateRoomFailed(short returnCode, string message)
        {
            Debug.Log("\nPhotonLobby.OnCreateRoomFailed()");
            Debug.LogError("Creating Room Failed");
            CreateRoom();
        }

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

        private void CreateRoom()
        {
            var roomOptions = new RoomOptions { IsVisible = true, IsOpen = true, MaxPlayers = 10 };
            PhotonNetwork.CreateRoom("Room" + Random.Range(1, 3000), roomOptions);
        }

        public void SetTeacherId()
        {
            identificationUI.SetActive(false);
            PhotonNetwork.NickName = "Supervisor";
            isIdentified = true;
            JoinRoom();
        }

        public void SetStudentId()
        {
            identificationUI.SetActive(false);
            string nickName = stdName.text;
            Debug.Log("nickName : " + nickName);
            PhotonNetwork.NickName = nickName;
            isIdentified = true;
            JoinRoom();
        }

        private void JoinRoom()
        {
            if (isIdentified)
            {
                Debug.Log("UI비활성화");
                PhotonNetwork.JoinRandomRoom();
                Debug.Log("방 진입");
            }
        }
    }
}
