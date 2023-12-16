using System;
using System.Collections;
using System.Collections.Generic;
using MixedReality.Toolkit.UX;
using Photon.Pun;
using UnityEngine;
using UnityEngine.UI;

public class LectureToggleManager : MonoBehaviour
{
    // 받고 보내기
    public GameObject lectureInfo;
    public Image toggleOffImage;
    public Image toggleOnImage;

    public ControlPlayerUI controlPlayerUI;
    public FontIconSelector[] fontIconSelectors; // 128, 24
    public int lectureNums;
    private void Start()
    {
        fontIconSelectors = lectureInfo.GetComponentsInChildren<FontIconSelector>();
        lectureNums = fontIconSelectors.Length;
        ClickLectureButtonUI(0);
    }

    public void ClickLectureButtonUI(int lectureIndex)
    {
        for (int i = 0; i < lectureNums; i++)
        {
            fontIconSelectors[i].CurrentIconName = "Icon 24";
        }

        fontIconSelectors[lectureIndex].CurrentIconName = "Icon 128";
        Debug.Log(lectureIndex);
        controlPlayerUI.ReceiveNumfromToggle(lectureIndex);
    }
    public void ToggleOn()
    {
        toggleOnImage.enabled = true;
        toggleOffImage.enabled = false;
        LectureInfoSetOn();
    }

    public void ToggleOff()
    {
        toggleOnImage.enabled = false;
        toggleOffImage.enabled = true;
        LectureInfoSetOff();
    }
    public void LectureInfoSetOff()
    {
        lectureInfo.SetActive(false);
    }

    public void LectureInfoSetOn()
    {
        lectureInfo.SetActive(true);
    }



}
