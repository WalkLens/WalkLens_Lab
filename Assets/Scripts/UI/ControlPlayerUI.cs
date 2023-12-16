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

    private ToggleCollection toggleCollection;

    //public PressableButton[] pressableButtons = new PressableButton[maxStepNumber];

    public void NextUI()
    {
        if (nowstepNumber == maxStepNumber-1) //�� �� �� �������� �Ѿ�°Ÿ�, ���� ���� ��ư�� ���ش�
            {
                ForwardStepButton.SetActive(false);
            }    
  
        if (nowstepNumber < maxStepNumber) // �ִ뺸�� ���� ����
        {
            BackStepButton.SetActive(true);
            nowstepNumber++;  
                     
        }
        
        toggleCollection.CurrentIndex = nowstepNumber;
        ControlUIPage(nowstepNumber);

    }

    public void PrevUI()
    {
        if (nowstepNumber == minStepNumber+1)
        {
            BackStepButton.SetActive(false);    
        }

        if (nowstepNumber > minStepNumber) // �ּҺ��� 
        {
            ForwardStepButton.SetActive(true);
            nowstepNumber--;
        }

        toggleCollection.CurrentIndex = nowstepNumber;
        
        ControlUIPage(nowstepNumber);

    }


    // Start is called before the first frame update
    void Start()
    {
        toggleCollection = new ToggleCollection();
        

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
        //Video ���� ��ũ��Ʈ
        //Toggle ��ȣ ���� ��ũ��Ʈ
    }


    


    // Update is called once per frame
    void Update()
    {
        
    }

    
}
