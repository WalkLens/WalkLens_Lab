using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;

public class UITmpObjectCollection : MonoBehaviour
{
    [SerializeField] private List<GameObject> studentUIObjects;
    [SerializeField] private List<TextMeshProUGUI> studentUITmpList;

    public void LoadTMPData()
    {
        if (studentUIObjects == null)
        {
            
        }
    }
    public void AddStudentUI(string studentName)
    {
        
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
