using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class lecturestart_vidupload : MonoBehaviour
{

    [SerializeField] protected VideoPlayer videoPlayerComponent;
    public string url;
    public void UrlDispatcher(string url)
    {
        if (this.videoPlayerComponent.isPlaying || this.videoPlayerComponent.isPaused)
        {
            this.videoPlayerComponent.Stop();
        }

        this.videoPlayerComponent.url = url;
    }

    // Start is called before the first frame update
    private void OnEnable()
    {
        UrlDispatcher(url);
    }
}
