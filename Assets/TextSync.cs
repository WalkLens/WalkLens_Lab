using UnityEngine;
using UnityEngine.UI;

public class TextSync : MonoBehaviour
{
    public Text sourceUIText; // UIText ���
    public Text targetUIText; // �ٸ� UI ���

    private void Update()
    {
        targetUIText.text = sourceUIText.text; // Text ���� �����Ͽ� ����   
    }
}
