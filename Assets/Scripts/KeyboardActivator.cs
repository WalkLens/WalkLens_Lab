using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeyboardActivator : MonoBehaviour
{
    [SerializeField]
    private GameObject keyboard;

    public void SetKeyboard()
    {
        Instantiate(keyboard);
    }
}
