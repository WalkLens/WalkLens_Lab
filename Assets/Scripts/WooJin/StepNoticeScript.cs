using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StepNoticeScript : MonoBehaviour
{
    public delegate void ObjectStateChangedHandler(GameObject childObject, bool isActive);
    public event ObjectStateChangedHandler OnObjectStateChanged;
    // Start is called before the first frame update
    private void OnEnable()
    {
        // 오브젝트가 활성화될 때 이벤트 호출
        NotifyObjectStateChanged(true);
    }
    private void OnDisable()
    {
        // 오브젝트가 비활성화될 때 이벤트 호출
        NotifyObjectStateChanged(false);
    }

    private void NotifyObjectStateChanged(bool isActive)
    {
        // 이벤트를 호출하여 상태 변경을 알림
        if (OnObjectStateChanged != null)
        {
            OnObjectStateChanged.Invoke(gameObject, isActive);
        }
    }


}
