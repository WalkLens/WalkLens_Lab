using MixedReality.Toolkit.UX;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ControlPlayerUI : MonoBehaviour
{
    private int nowstepNumber;
    static private int maxStepNumber = 5;
    private int minStepNumber = 0;

    public GameObject BackStepButton;
    public GameObject ForwardStepButton;

    public TextMeshPro StepNotice;

    public LectureToggleManager lectureToggleManager;

    //public PressableButton[] pressableButtons = new PressableButton[maxStepNumber];

    public void NextUI()
    {
          
  
        if (nowstepNumber < maxStepNumber) // 최대보다 작은 구간
        {
            BackStepButton.SetActive(true);
            nowstepNumber++;       
        }

        if (nowstepNumber == maxStepNumber) //딱 그 전 구간에서 넘어가는거면, 다음 스텝 버튼을 없앤다
        {
            ForwardStepButton.SetActive(false);
        }


        ControlUIPage(nowstepNumber);

    }

    public void PrevUI()
    {
        

        if (nowstepNumber > minStepNumber) // 최소보다 
        {
            ForwardStepButton.SetActive(true);
            nowstepNumber--;
        }

        if (nowstepNumber == minStepNumber)
        {
            BackStepButton.SetActive(false);
        }



        ControlUIPage(nowstepNumber);

    }


    // Start is called before the first frame update
    void Start()
    {
        
        /*
        GameObject playerUIObject = this.gameObject;
        Transform cameraTransform = Camera.main.transform;
        Vector3 cameraForward = cameraTransform.forward;

        float distance = 2f; // UI를 카메라로부터 2m 앞에 배치
        Vector3 uiPosition = cameraTransform.position + cameraForward * distance;
        playerUIObject.transform.position = uiPosition;
        playerUIObject.SetActive(true);
        */
    }


    public void ControlUIPage(int nowstepNumber)
    {
        StepNotice.text = $"Lecture {nowstepNumber+1}";
        lectureToggleManager.ClickLectureButtonUI(nowstepNumber);
        //Video 관련 스크립트
        //Toggle 번호 관련 스크립트
    }

    public void ReceiveNumfromToggle(int toggleNum)
    {
        StepNotice.text = $"Lecture {toggleNum + 1}";
        nowstepNumber = toggleNum;
        if (nowstepNumber == minStepNumber)
        {
            ForwardStepButton.SetActive(true);
            BackStepButton.SetActive(false);
        }else if (nowstepNumber == maxStepNumber)
        {
            ForwardStepButton.SetActive(false);
            BackStepButton.SetActive(true);
        }
        else
        {
            ForwardStepButton.SetActive(true);
            BackStepButton.SetActive(true);
        }

    }

    


    // Update is called once per frame
    void Update()
    {
        
    }

    
}
