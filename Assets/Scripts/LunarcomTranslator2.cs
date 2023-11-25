using UnityEngine;
using Microsoft.CognitiveServices.Speech;
using Microsoft.CognitiveServices.Speech.Translation;

public class LunarcomTranslator2 : MonoBehaviour
{
    public delegate void TranslationRecognizerDelegate();

    public TranslateToLanguage FromLanguage = TranslateToLanguage.Korean;
    public TranslateToLanguage TargetLanguage = TranslateToLanguage.Russian;

    private string recognizedString = "Select a mode to begin.";
    private string translatedString = "";
    private object threadLocker = new object();
    private bool isPunEnabled;

    private TranslationRecognizer translator;

    private bool micPermissionGranted = false;
    ///private bool scanning = false;

    private string fromLanguage = "";
    private string toLanguage = "";

    private LunarcomController lunarcomController;
    public bool IsPunEnabled
    {
        set => isPunEnabled = value;
    }
    void Start()
    {
        lunarcomController = LunarcomController.lunarcomController;

        if (LunarcomController.lunarcomController.outputText == null)
        {
            Debug.LogError("outputText property is null! Assign a UI Text element to it.");
        }
        else
        {
            micPermissionGranted = true;
        }

        lunarcomController.onSelectRecognitionMode += HandleOnSelectRecognitionMode;

        switch (FromLanguage)
        {
            case TranslateToLanguage.Russian:
                fromLanguage = "ru-RU";
                break;
            case TranslateToLanguage.German:
                fromLanguage = "de-DE";
                break;
            case TranslateToLanguage.Chinese:
                fromLanguage = "zh-HK";
                break;
            case TranslateToLanguage.Korean:
                fromLanguage = "ko-KR";
                break;
            case TranslateToLanguage.English:
                fromLanguage = "en-US";
                break;
            case TranslateToLanguage.Japanese:
                fromLanguage = "ja-JP";
                break;
        }

        switch (TargetLanguage)
        {
            case TranslateToLanguage.Russian:
                toLanguage = "ru-RU";
                break;
            case TranslateToLanguage.German:
                toLanguage = "de-DE";
                break;
            case TranslateToLanguage.Chinese:
                toLanguage = "zh-HK";
                break;
            case TranslateToLanguage.Korean:
                toLanguage = "ko-KR";
                break;
            case TranslateToLanguage.English:
                toLanguage = "en-US";
                break;
            case TranslateToLanguage.Japanese:
                toLanguage = "ja-JP";
                break;
        }
    }

    public void HandleOnSelectRecognitionMode(RecognitionMode recognitionMode)
    {
        if (recognitionMode == RecognitionMode.Intent_Recognizer)
        {
            recognizedString = fromLanguage + " -> " + toLanguage + "\n" + "무언가 말해보세요...!";
            translatedString = "";
            BeginTranslating();
        }
        else
        {
            if (translator != null)
            {
                translator.StopContinuousRecognitionAsync();
            }
            translator = null;
            recognizedString = "";
            translatedString = "";
        }
    }

    public async void BeginTranslating()
    {
        if (micPermissionGranted)
        {
            CreateTranslationRecognizer();

            if (translator != null)
            {
                await translator.StartContinuousRecognitionAsync().ConfigureAwait(false);
            }
        }
        else
        {
            recognizedString = "This app cannot function without access to the microphone.";
        }
    }


    void CreateTranslationRecognizer()
    {
        if (translator == null)
        {
            SpeechTranslationConfig config = SpeechTranslationConfig.FromSubscription(lunarcomController.SpeechServiceAPIKey, lunarcomController.SpeechServiceRegion);
            config.SpeechRecognitionLanguage = fromLanguage;
            config.AddTargetLanguage(toLanguage);

            translator = new TranslationRecognizer(config);

            if (translator != null)
            {
                translator.Recognizing += HandleTranslatorRecognizing;
                translator.Recognized += HandleTranslatorRecognized;
                translator.Canceled += HandleTranslatorCanceled;
                translator.SessionStarted += HandleTranslatorSessionStarted;
                translator.SessionStopped += HandleTranslatorSessionStopped;
            }
        }
    }

    #region Translation Recognition Event Handlers
    private void HandleTranslatorRecognizing(object s, TranslationRecognitionEventArgs e)
    {
        if (e.Result.Reason == ResultReason.TranslatingSpeech)
        {
            if (e.Result.Text != "")
            {
                recognizedString = e.Result.Text;

                foreach (var element in e.Result.Translations)
                {
                    translatedString = element.Value;
                }
            }
        }
    }

    private void HandleTranslatorRecognized(object s, TranslationRecognitionEventArgs e)
    {
        if (e.Result.Reason == ResultReason.TranslatedSpeech)
        {
            recognizedString = e.Result.Text;

            foreach (var element in e.Result.Translations)
            {
                translatedString = element.Value;
            }
        }
    }

    private void HandleTranslatorCanceled(object s, TranslationRecognitionEventArgs e)
    {
    }

    private void HandleTranslatorSessionStarted(object s, SessionEventArgs e)
    {
    }

    public void HandleTranslatorSessionStopped(object s, SessionEventArgs e)
    {
    }
    #endregion

    private void Update()
    {
        PunUpdateTranslator();
    }

    void OnDestroy()
    {
        if (translator != null)
        {
            translator.Dispose();
        }
    }

    public void PunUpdateTranslator()
    {
        if (isPunEnabled)
            OnToggleTranslator?.Invoke();
        else
            UpdateTranslator();
    }

    public void UpdateTranslator()
    {
        if (lunarcomController.CurrentRecognitionMode() == RecognitionMode.Intent_Recognizer)
        {
            if (recognizedString != "")
            {
                lunarcomController.UpdateLunarcomText(recognizedString);
                if (translatedString != "")
                {
                    lunarcomController.outputText.text += "\n\n번역된 텍스트:\n" + translatedString;
                }
            }
        }
    }

    public event TranslationRecognizerDelegate OnToggleTranslator;
}
