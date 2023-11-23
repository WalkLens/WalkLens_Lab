using UnityEngine;
using UnityEngine.UI;

public class TextSync : MonoBehaviour
{
    public Text sourceUIText; // UIText 요소
    public Text targetUIText; // 다른 UI 요소

    private void Update()
    {
        targetUIText.text = sourceUIText.text; // Text 값을 복사하여 연동   
    }
}
