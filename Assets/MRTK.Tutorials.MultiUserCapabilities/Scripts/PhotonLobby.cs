using Photon.Pun;
using Photon.Realtime;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using ExitGames.Client.Photon;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEditor.XR;

namespace MRTK.Tutorials.MultiUserCapabilities
{
    public class PhotonLobby : MonoBehaviourPunCallbacks
    {
        public static PhotonLobby Lobby;
        [SerializeField]
        private GameObject identificationUI;
        [SerializeField]
        private Text stdName;
        [SerializeField]
        private TextMeshProUGUI roomName;
        [SerializeField]
        private TextMeshProUGUI password;

        private int roomNumber = 1;
        private int userIdCount;
        private List<RoomInfo> roomList = new List<RoomInfo>();

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

        //// 포톤 서버룸 입장시
        //public override void OnJoinedRoom()
        //{
        //    base.OnJoinedRoom();

        //    Debug.Log("\nPhotonLobby.OnJoinedRoom()");
        //    Debug.Log("Current room name: " + PhotonNetwork.CurrentRoom.Name);
        //    Debug.Log("Other players in room: " + PhotonNetwork.CountOfPlayersInRooms);
        //    Debug.Log("Total players in room: " + (PhotonNetwork.CountOfPlayersInRooms + 1));
        //}

        //// 포톤 서버룸 조인 실패시 다시 시도
        //public override void OnJoinRandomFailed(short returnCode, string message)
        //{
        //    CreateRoom();
        //}

        //// 포톤 서버룸 생성 실패시 다시 시도
        //public override void OnCreateRoomFailed(short returnCode, string message)
        //{
        //    Debug.Log("\nPhotonLobby.OnCreateRoomFailed()");
        //    Debug.LogError("Creating Room Failed");
        //    CreateRoom();
        //}

        // 포톤 서버룸 생성 시 룸넘버 증가
        public override void OnCreatedRoom()
        {
            base.OnCreatedRoom();
            roomNumber++;
        }
        public override void OnRoomListUpdate(List<RoomInfo> roomList)
        {
            base.OnRoomListUpdate(roomList);

            this.roomList = roomList; // 방 목록을 업데이트
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
        //private void CreateRoom()
        //{
        //    var roomOptions = new RoomOptions { IsVisible = true, IsOpen = true, MaxPlayers = 10 };
        //    PhotonNetwork.CreateRoom("Room" + Random.Range(1, 3000), roomOptions);
        //}
        private void CreateRoom(string roomName, string roomPassword)
        {
            var roomOptions = new RoomOptions { IsVisible = true, IsOpen = true, MaxPlayers = 10 };
            roomOptions.CustomRoomProperties = new ExitGames.Client.Photon.Hashtable() { { "Password", roomPassword } };
            roomOptions.CustomRoomPropertiesForLobby = new string[] { "Password" };
            PhotonNetwork.CreateRoom(roomName, roomOptions);
        }



        // Identification에서 Supervisor 선택시
        public void SetSupervisorId()
        {
            identificationUI.SetActive(false);
            PhotonNetwork.NickName = "Supervisor";
            CreateRoom(roomName.text, password.text);
            //JoinRoom();
        }

        // Identification에서 Student 선택시
        public void SetStudentId()
        {
            identificationUI.SetActive(false);
            string nickName = stdName.text;
            Debug.Log("nickName : " + nickName);
            PhotonNetwork.NickName = nickName;
            PhotonNetwork.CreateRoom("Waiting Room");
            // JoinRoom();
        }

        // 포톤 서버룸 조인
        //private void JoinRoom()
        //{
        //    if (isIdentified)
        //    {
        //        Debug.Log("UI비활성화");
        //        PhotonNetwork.JoinRandomRoom();
        //        Debug.Log("방 진입");
        //    }
        //}
        //public void JoinRoom(string roomName, string inputPassword)
        //{
        //    RoomInfo roomInfo = roomList.FirstOrDefault(room => room.Name == roomName);
        //    if (roomInfo != null)
        //    {
        //        string roomPassword = roomInfo.CustomProperties["Password"].ToString();
        //        if (roomPassword == inputPassword)
        //        {
        //            PhotonNetwork.JoinRoom(roomName);
        //        }
        //        else
        //        {
        //            // 비밀번호가 일치하지 않습니다.
        //        }
        //    }
        //    else
        //    {
        //        // 해당 이름의 방이 존재하지 않습니다.
        //    }
        //}

    }
}