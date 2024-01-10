using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using TMPro;

public class ConnectRoom : MonoBehaviourPunCallbacks
{
    [SerializeField]
    private TextMeshProUGUI roomNameTMP;
    public void ActivateSwitchRoomUI()
    {
        RoomManager.specificRoomName = roomNameTMP.text;
        RoomManager.switchRoomUI.SetActive(true);
    }
}
