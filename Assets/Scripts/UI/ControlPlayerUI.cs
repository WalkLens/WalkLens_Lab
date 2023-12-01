using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControlPlayerUI : MonoBehaviour
{
   
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }



    public void StartPlayerUI()
    {
        GameObject playerUIObject = this.gameObject;
        Transform cameraTransform = Camera.main.transform;
        Vector3 cameraForward = cameraTransform.forward;

        float distance = 2f; // UI를 카메라로부터 2m 앞에 배치
        Vector3 uiPosition = cameraTransform.position + cameraForward * distance;
        playerUIObject.transform.position = uiPosition;
        playerUIObject.SetActive(true);
    }
}
