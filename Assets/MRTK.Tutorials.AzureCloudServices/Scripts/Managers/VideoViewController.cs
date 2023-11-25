using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.Video;
using MRTK.Tutorials.AzureCloudServices.Scripts.Managers;
using System.IO;
using System.Threading.Tasks;

public class VideoViewController : MonoBehaviour
{

    

    [Header("Manager")]
    [SerializeField]
    private SceneController sceneController;
    public VideoPlayer video;
    //public VideoClip videoClip;


    private void Awake()
    {
        if(sceneController == null){
            sceneController = FindObjectOfType<SceneController>();
        }
    }

    // Start is called before the first frame update
    async void Start()
    {
        try
        {
            var videoData = await sceneController.DataManager.DownloadBlob("hololens_example");
            await LoadVideoFromBytes(videoData, "myVideo.mp4");
        }
        catch (Exception ex)
        {
            Debug.LogError($"An error occurred: {ex.Message}");
        }
    }



    public async Task LoadVideoFromBytes(byte[] videoData, string fileName)
    {
        //print("load");
        string filePath = Path.Combine(Application.temporaryCachePath, fileName);
        await File.WriteAllBytesAsync(filePath, videoData);

        PlayVideo(filePath);
    }

    private void PlayVideo(string filePath)
    {
        video.url = filePath;
        video.Play();
    }


}
