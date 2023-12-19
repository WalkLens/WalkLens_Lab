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
          
  
        if (nowstepNumber < maxStepNumber) // �ִ뺸�� ���� ����
        {
            BackStepButton.SetActive(true);
            nowstepNumber++;       
        }

        if (nowstepNumber == maxStepNumber) //�� �� �� �������� �Ѿ�°Ÿ�, ���� ���� ��ư�� ���ش�
        {
            ForwardStepButton.SetActive(false);
        }


        ControlUIPage(nowstepNumber);

    }

    public void PrevUI()
    {
        

        if (nowstepNumber > minStepNumber) // �ּҺ��� 
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

        float distance = 2f; // UI�� ī�޶�κ��� 2m �տ� ��ġ
        Vector3 uiPosition = cameraTransform.position + cameraForward * distance;
        playerUIObject.transform.position = uiPosition;
        playerUIObject.SetActive(true);
        */
    }


    public void ControlUIPage(int nowstepNumber)
    {
        StepNotice.text = $"Lecture {nowstepNumber+1}";
        lectureToggleManager.ClickLectureButtonUI(nowstepNumber);
        //Video ���� ��ũ��Ʈ
        //Toggle ��ȣ ���� ��ũ��Ʈ
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
