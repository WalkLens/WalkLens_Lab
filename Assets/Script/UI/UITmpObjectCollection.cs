using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;

public class UITmpObjectCollection : MonoBehaviour
{
    [SerializeField] private List<GameObject> studentUIObjects;
    [SerializeField] private List<TextMeshProUGUI> studentUITmpList;

    private void Start()
    {
        LoadTMPData();
        // AddStudentUI("Test Name");
    }

    public void LoadTMPData()
    {
        for (int i = 0; i < studentUIObjects.Count; i++)
        {
            studentUITmpList.Add(studentUIObjects[i].GetComponentInChildren<TextMeshProUGUI>());
        }
    }
    public void AddStudentUI(string studentName)
    {
        Debug.Log("Add Student UI");
        for (int i = 0; i < studentUITmpList.Count; i++)
        {
            if (!studentUIObjects[i].activeInHierarchy)
            {
                studentUIObjects[i].SetActive(true);
                studentUITmpList[i].text = $"{studentName}";
                return;
            }      
        }
    }

    public void SearchNameOnList(string studentName)
    {
        foreach (var tmp in studentUITmpList)
        {
            if (tmp.text.Contains(studentName))
            {
                tmp.transform.parent.gameObject.SetActive(true);
            }
            else
            {
                tmp.transform.parent.gameObject.SetActive(false);
            }
        }        
    }
}
