using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckingStep : MonoBehaviour
{
    private GameObject[] childObjects;

    // Start is called before the first frame update
    void Start()
    {
        InitializeChildObjects();
    }

    private void InitializeChildObjects()
    {
        // ��� �ڽ� ������Ʈ�� �����ͼ� �迭�� ����
        int childCount = transform.childCount;
        childObjects = new GameObject[childCount];

        for (int i = 0; i < childCount; i++)
        {
            childObjects[i] = transform.GetChild(i).gameObject;

            // �� �ڽ� ������Ʈ�� ���� ������ �����ϱ� ���� �̺�Ʈ �ڵ鷯 ���
            //childObjects[i].SetActive(true); // Ȱ��ȭ ���·� ����
            childObjects[i].GetComponent<StepNoticeScript>().OnObjectStateChanged += HandleObjectStateChanged;
        }
    }

    private void HandleObjectStateChanged(GameObject childObject, bool isActive)
    {
        // �ڽ� ������Ʈ�� ���°� ����Ǹ� ȣ��Ǵ� �ݹ� �޼���
        if (isActive)
        {
            Debug.Log(childObject.name + "��(��) Ȱ��ȭ�Ǿ����ϴ�.");
        }
        else
        {
            Debug.Log(childObject.name + "��(��) ��Ȱ��ȭ�Ǿ����ϴ�.");
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
