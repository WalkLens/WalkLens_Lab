using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetActive : MonoBehaviour
{
    public GameObject target;
    public void SetActiveTrue()
    {
        target.SetActive(true);
    }

    public void SetActiveFalse()
    {
        target.SetActive(false);
    }
}
