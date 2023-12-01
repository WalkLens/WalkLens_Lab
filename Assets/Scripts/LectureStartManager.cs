using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LectureStartManager : MonoBehaviour
{
    public GameObject playerUI1;
    public GameObject playerUI2;

    public GameObject teacherUI1;
    public GameObject teacherUI2;

    public void ActivateUI()
   {
        // ī�޶� ���鿡 UI Ȱ��ȭ ��Ű��
        // ��ġ��
        Transform cameraTransform = Camera.main.transform;
        Vector3 cameraForward = cameraTransform.forward;
        float distance = 2f;
        Vector3 uiPosition = cameraTransform.position + cameraForward * distance;

        // ȸ����
        Quaternion uiRotation = Quaternion.LookRotation(cameraForward);

        if (PhotonNetwork.NickName == "Supervisor")
        {

            teacherUI1.transform.position = uiPosition;
            teacherUI1.transform.rotation = uiRotation;
            teacherUI1.SetActive(true);

            teacherUI2.transform.position = uiPosition;
            teacherUI2.transform.rotation = uiRotation;
            teacherUI2.SetActive(true);
        }
        else
        {
            playerUI1.transform.position = uiPosition;
            playerUI1.transform.rotation = uiRotation;
            playerUI1.SetActive(true);

            playerUI2.transform.position = uiPosition;
            playerUI2.transform.rotation = uiRotation;
            playerUI2.SetActive(true);
        }
        
    }

    public void ResetScene() { UnityEngine.SceneManagement.SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);}
        
}
