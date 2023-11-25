using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using MRTK.Tutorials.GettingStarted;
using Microsoft.CognitiveServices.Speech.Translation;

public class PUNTextController : MonoBehaviourPun
{
    private LunarcomTranslationRecognizer translationRecognizer;
    private bool isMine;
    [SerializeField] Text text;

    private void Start()
    {
        isMine = GetComponent<PhotonView>().IsMine;
        // Cache references
        translationRecognizer = GetComponent<LunarcomTranslationRecognizer>();
        translationRecognizer.OnToggleTranslator += OnToggleTraslationController;
        translationRecognizer.IsPunEnabled = true;
    }

    private void OnToggleTraslationController()
    {
        if (!isMine) return;

        //Debug.Log("锅开角青");
        photonView.RPC("PunRPC_ToggleTranslator", RpcTarget.All);
        photonView.RPC("sync", RpcTarget.All, text.text);
        //Debug.Log("锅开肯丰");
    }

    [PunRPC]
    private void PunRPC_ToggleTranslator()
    {
        translationRecognizer.UpdateTranslator();
        //Debug.Log("锅开RPC 角青");
    }

    [PunRPC]
    private void sync(string t)
    {
        text.text = t;
        //Debug.Log("教农");
    }

}