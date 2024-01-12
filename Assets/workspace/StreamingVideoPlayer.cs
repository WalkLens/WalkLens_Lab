using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class StreamingVideoPlayer : MonoBehaviour
{
    // ���� ����� ���� �÷��̾� ������Ʈ.
    [SerializeField] protected VideoPlayer videoPlayerComponent;

    // Play ��ư�� ������ ��. ���.
    public void OnClickPlay()
    {
        this.videoPlayerComponent.Play();
    }

    // Pause ��ư�� ������ ��. �Ͻ�����.
    public void OnClickPause()
    {
        this.videoPlayerComponent.Pause();
    }

    private int clkcnt = 0;
    public void OnClickHandler()
    {
        
        if(clkcnt % 2 == 0){
            OnClickPlay();
        }
        else{
            OnClickPause();
        }

        clkcnt += 1;
    }


    // ������� ����. 1���� ��ư���� ���. �Ͻ����� �ϰ� ������ ��� ����.
    public void OnClickedPlayResumeToggle()
    {
        if (videoPlayerComponent == null)
        {
            return;
        }

        if (videoPlayerComponent.isPlaying)
        {
            videoPlayerComponent.Pause();
            return;
        }

        videoPlayerComponent.Play();
    }

    // ��ư �̺�Ʈ �ڵ鷯�� �Էµ� string url �� ����Ͽ� �����ų ������ ����.
    public void OnClickUrlDispatcher(string url)
    {
        if (this.videoPlayerComponent.isPlaying || this.videoPlayerComponent.isPaused)
        {
            this.videoPlayerComponent.Stop();
        }

        this.videoPlayerComponent.url = url;
    }
}
