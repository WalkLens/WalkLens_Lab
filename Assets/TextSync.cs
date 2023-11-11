using UnityEngine;
using UnityEngine.UI;

public class TextSync : MonoBehaviour
{
    public Text sourceUIText; // UIText ���
    public Text targetUIText; // �ٸ� UI ���

    private void Update()
    {
        if (sourceUIText != null && targetUIText != null)
        {
            targetUIText.text = sourceUIText.text; // Text ���� �����Ͽ� ����
        }
    }
}
