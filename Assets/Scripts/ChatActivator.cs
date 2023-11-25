using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem.LowLevel;
using UnityEngine.XR.Interaction.Toolkit;

public class ChatActivator : MonoBehaviour
{
    [SerializeField]
    private GameObject chatUI;
    [SerializeField]
    private GameObject inputField;
    private bool isSelected = false;
    // Start is called before the first frame update
    public void ToggleChatUI()
    {
        if (isSelected)
        {
            Deactivate();
        }
        else
        {
            chatUI.SetActive(true);
            inputField.SetActive(true);
            isSelected = true;
        }
    }

    public void Deactivate()
    {
        chatUI.SetActive(false);
        inputField.SetActive(false);
        isSelected = false;
    }
}
