using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LectureStartManager : MonoBehaviour
{
    public GameObject playerUI1;
    public GameObject playerUI2;

    public GameObject teacherUI1;
    public GameObject teacherUI2;

    public void ActivateUI()
   {
        
        Transform cameraTransform = Camera.main.transform;
        Vector3 cameraForward = cameraTransform.forward;
        float distance = 2f;
        Vector3 uiPosition = cameraTransform.position + cameraForward * distance;

        if (PhotonNetwork.NickName == "Supervisor")
        {
        
            teacherUI1.transform.position = uiPosition;
            teacherUI1.SetActive(true);
            teacherUI2.SetActive(true);
        }
        else
        {
            playerUI1.transform.position = uiPosition;
            playerUI1.SetActive(true);
            playerUI2.SetActive(true);
        }
        
    }
}
