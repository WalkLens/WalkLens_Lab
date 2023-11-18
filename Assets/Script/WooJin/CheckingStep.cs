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
        // 모든 자식 오브젝트를 가져와서 배열에 저장
        int childCount = transform.childCount;
        childObjects = new GameObject[childCount];

        for (int i = 0; i < childCount; i++)
        {
            childObjects[i] = transform.GetChild(i).gameObject;

            // 각 자식 오브젝트의 상태 변경을 감시하기 위한 이벤트 핸들러 등록
            //childObjects[i].SetActive(true); // 활성화 상태로 시작
            childObjects[i].GetComponent<StepNoticeScript>().OnObjectStateChanged += HandleObjectStateChanged;
        }
    }

    private void HandleObjectStateChanged(GameObject childObject, bool isActive)
    {
        // 자식 오브젝트의 상태가 변경되면 호출되는 콜백 메서드
        if (isActive)
        {
            Debug.Log(childObject.name + "이(가) 활성화되었습니다.");
        }
        else
        {
            Debug.Log(childObject.name + "이(가) 비활성화되었습니다.");
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
