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
        // ������Ʈ�� Ȱ��ȭ�� �� �̺�Ʈ ȣ��
        NotifyObjectStateChanged(true);
    }
    private void OnDisable()
    {
        // ������Ʈ�� ��Ȱ��ȭ�� �� �̺�Ʈ ȣ��
        NotifyObjectStateChanged(false);
    }

    private void NotifyObjectStateChanged(bool isActive)
    {
        // �̺�Ʈ�� ȣ���Ͽ� ���� ������ �˸�
        if (OnObjectStateChanged != null)
        {
            OnObjectStateChanged.Invoke(gameObject, isActive);
        }
    }


}
