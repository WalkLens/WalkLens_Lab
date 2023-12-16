using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Calculator : MonoBehaviour
{
    [SerializeField] private PhysicalProperty selectedProperty;
    [SerializeField] private PhysicalProperty prevProperty;
    [SerializeField] private TextMeshProUGUI[] textMeshProUGUI;
    [SerializeField] private Material originMaterial;
    [SerializeField] private Material onClickedMaterial;
    [SerializeField] private RawImage[] optionRawImages;
    private float[] values;
    void Start()
    {
        selectedProperty = PhysicalProperty.MW;
        prevProperty = selectedProperty;
        EraseNum();
    }

    public void WriteNum(int num)
    {
        if (selectedProperty == PhysicalProperty.MW) textMeshProUGUI[0].text += num.ToString();
        else if (selectedProperty == PhysicalProperty.M) textMeshProUGUI[1].text += num.ToString();
        else if (selectedProperty == PhysicalProperty.mg) textMeshProUGUI[2].text += num.ToString();
        else if (selectedProperty == PhysicalProperty.ml) textMeshProUGUI[3].text += num.ToString();
    }

    public void WriteMicrodot()
    {
        if (selectedProperty == PhysicalProperty.MW) textMeshProUGUI[0].text += ".";
        else if (selectedProperty == PhysicalProperty.M) textMeshProUGUI[1].text += ".";
        else if (selectedProperty == PhysicalProperty.mg) textMeshProUGUI[2].text += ".";
        else if (selectedProperty == PhysicalProperty.ml) textMeshProUGUI[3].text += ".";
    }

    public void EraseNum()
    {
        for (int i = 0; i < textMeshProUGUI.Length; i++)
        {
            textMeshProUGUI[i].text = "";
        }
        /*textMeshProUGUI[0].text = "";
        textMeshProUGUI[1].text = "";
        textMeshProUGUI[2].text = "";
        textMeshProUGUI[3].text = "";*/
        SetAllPropertyOriginMaterial();

    }

    public void DeleteLastIndex()
    {
        if (selectedProperty == PhysicalProperty.MW)
        {
            textMeshProUGUI[0].text = GetDeletedLastWord(textMeshProUGUI[0].text);
        }
        else if (selectedProperty == PhysicalProperty.M)
        {
            textMeshProUGUI[1].text = GetDeletedLastWord(textMeshProUGUI[1].text);
        }else if (selectedProperty == PhysicalProperty.mg)
        {
            textMeshProUGUI[2].text = GetDeletedLastWord(textMeshProUGUI[2].text);
        }else if (selectedProperty == PhysicalProperty.ml)
        {
            textMeshProUGUI[3].text = GetDeletedLastWord(textMeshProUGUI[3].text);
        }
    }

    private void SetPrevMaterial(PhysicalProperty prevProperty)
    {
        switch (prevProperty)
        {
            case PhysicalProperty.MW:
                optionRawImages[0].material = originMaterial;
                break;
            case PhysicalProperty.M:
                optionRawImages[1].material = originMaterial;
                break;
            case PhysicalProperty.mg:
                optionRawImages[2].material = originMaterial;
                break;
            case PhysicalProperty.ml:
                optionRawImages[3].material = originMaterial;
                break;
        }
    }
    public void OnClickedChangeBGMaterial(int optionIndex)
    {
        Debug.Log($"ChangeBGMaterial : {optionIndex}");
        switch (optionIndex)
        {
            case 0:
                SetPrevMaterial(prevProperty);
                optionRawImages[0].material = onClickedMaterial;
                prevProperty = PhysicalProperty.MW;
                break;
            case 1:
                SetPrevMaterial(prevProperty);
                optionRawImages[1].material = onClickedMaterial;
                prevProperty = PhysicalProperty.M;
                break;
            case 2:
                SetPrevMaterial(prevProperty);
                optionRawImages[2].material = onClickedMaterial;
                prevProperty = PhysicalProperty.mg;
                break;
            case 3:
                SetPrevMaterial(prevProperty);
                optionRawImages[3].material = onClickedMaterial;
                prevProperty = PhysicalProperty.ml;
                break;
        }
        // 1번 선택 -> 1번만 선택된 mat, 나머지 선택되지 않은 mat
        /*switch (optionIndex)
        {
            case 0:
                optionRawImages[0].material = onClickedMaterial;
                optionRawImages[1].material = originMaterial;
                optionRawImages[2].material = originMaterial;
                optionRawImages[3].material = originMaterial;
                break;
            case 1:
                optionRawImages[0].material = originMaterial;
                optionRawImages[1].material = onClickedMaterial;
                optionRawImages[2].material = originMaterial;
                optionRawImages[3].material = originMaterial;
                break;
            case 2:
                optionRawImages[0].material = originMaterial;
                optionRawImages[1].material = originMaterial;
                optionRawImages[2].material = onClickedMaterial;
                optionRawImages[3].material = originMaterial;
                break;
            case 3:
                optionRawImages[0].material = originMaterial;
                optionRawImages[1].material = originMaterial;
                optionRawImages[2].material = originMaterial;
                optionRawImages[3].material = onClickedMaterial;
                break;
        }*/
    }
    
    public string GetDeletedLastWord(string textNum)
    {
        if (string.IsNullOrEmpty(textNum))
        {
            return null; // 빈 문자열이거나 null이면 그대로 반환
        }

        // 마지막 인덱스의 문자를 제외한 부분을 가져옴
        return textNum.Substring(0, textNum.Length - 1);
    }

    private void SetAllPropertyOriginMaterial()
    {
        for (int i = 0; i < optionRawImages.Length; i++)
        {
            optionRawImages[i].material = originMaterial;    
        }
    }
    public void SelectProperty(int propertyName)
    {
        if (propertyName == 0) selectedProperty = PhysicalProperty.MW;
        else if (propertyName == 1) selectedProperty = PhysicalProperty.M;
        else if (propertyName == 2) selectedProperty = PhysicalProperty.mg;
        else if (propertyName == 3) selectedProperty = PhysicalProperty.ml;
        /*if (propertyName == PhysicalProperty.MW) selectedProperty = PhysicalProperty.MW;
        else if (propertyName == PhysicalProperty.M) selectedProperty = PhysicalProperty.M;
        else if (propertyName == PhysicalProperty.mg) selectedProperty = PhysicalProperty.mg;
        else if (propertyName == PhysicalProperty.ml) selectedProperty = PhysicalProperty.ml;*/
    }

    public void TryCalcuate()
    {
        // mg = M.W * M * D
        // 값이 채워진 것 흰색, 계산할 값 빨간색
        // 4개의 boolean
        Debug.Log("계산 실행");
        values = new float[textMeshProUGUI.Length];
        bool[] isCorrectPhysicalProperties = CheckCorrectInput();

        for (int i = 0; i < isCorrectPhysicalProperties.Length; i++)
        {
            if (!isCorrectPhysicalProperties[i])
            {
                values[i] = CalculateRemainder(i);
                Debug.Log("Calculataed Value : "+values[i]);
                textMeshProUGUI[i].text = values[i].ToString();
                break;
            }
        }
        SetAllPropertyOriginMaterial();
    }

    private float CalculateRemainder(int nonInputPropertyNum)
    {
        // 0이 없다면 2 / (1, 3)
        // 1이 없다면 2 / (0, 3)
        // 2가 없다면 0 * 1 * 3
        // 3이 없다면 2 / (0, 1)
        if (nonInputPropertyNum == 0)
        {
            return values[2] / (values[1] * values[3]);
        } 
        else if (nonInputPropertyNum == 1)
        {
            return values[2] / (values[0] * values[3]);
        }
        else if (nonInputPropertyNum == 2)
        {
            return values[0] / (values[1] * values[3]);
        }
        else if (nonInputPropertyNum == 3)
        {
            return values[2] / (values[0] * values[1]);
        }
        else Debug.LogError("Fail Calculate");
        return 0;
    }
    private bool[] CheckCorrectInput()
    {
        bool[] isValueRight = new bool[textMeshProUGUI.Length];
        Debug.Log("Check Correct Input");
        for (int i = 0; i < textMeshProUGUI.Length; i++)
        {
            if (!float.TryParse(textMeshProUGUI[i].text, out float value))
            {
                isValueRight[i] = false;
                WriteErrorLog(i);
            }
            else
            {
                values[i] = value;
                isValueRight[i] = true;    
            }
        }

        foreach (var VARIABLE in isValueRight)
        {
            Debug.Log(VARIABLE);
        }
        return isValueRight;
    }

    private void WriteErrorLog(int textIndex)
    {
        if (string.IsNullOrEmpty(textMeshProUGUI[textIndex].text))
        {
            return; // 빈 문자열이거나 null이면 그대로 반환
        }
        // Unity Editor와 계산기의 TMPro에 에러임을 알림.
        Debug.LogError("Write Available Value");
        if (textIndex == 0) textMeshProUGUI[0].text = $"MW Wrong Input";
        else if (textIndex == 1) textMeshProUGUI[1].text = $"M {textIndex} Wrong Input";
        else if (textIndex == 2) textMeshProUGUI[2].text = $"mg {textIndex} Wrong Input";
        else if (textIndex == 3) textMeshProUGUI[3].text = $"ml {textIndex} Wrong Input";
    }
}
public enum PhysicalProperty
{
    MW, M, mg, ml
}
