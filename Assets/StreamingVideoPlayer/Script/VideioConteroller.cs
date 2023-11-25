using Firebase;
using Firebase.Storage;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Security.Cryptography.X509Certificates;
using System.Threading;
using System.Threading.Tasks;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;
using UnityEngine.EventSystems;
using PressableButton = MixedReality.Toolkit.UX.PressableButton;

public class VideioConteroller : MonoBehaviour
{
    public string videoName;
    public string videoExtention;
    public Button downloadButton;
    public Button playButton;

    public PressableButton dButton;
    public PressableButton pButton;
    //�� �Ʒ��� ������ �ʿ� �����ϴ�.

    #region Setting
    [Space(5)]
    [Header("Setting")]
    [SerializeField] private Animator videioAnimator;
    [SerializeField] private Animator playAnimator;

    [SerializeField] private VideoPlayer vp;
    [SerializeField] private Slider progressbar;
    [SerializeField] private bool isClicked = false;
    [SerializeField] private GameObject bottomController;
    [SerializeField] private Slider loading;
    [SerializeField] private bool isLoading = false;
    #endregion

    protected static string UriFileScheme = Uri.UriSchemeFile + "://";
    protected string persistentDataPath;

    protected CancellationTokenSource cancellationTokenSource = new CancellationTokenSource();
    protected string fileContents;
    protected bool operationInProgress;
    protected Task previousTask;

    private void OnApplicationQuit()
    {
        vp.targetTexture.Release();
    }

    public void Update()
    {
        if(isClicked == false && vp.isPlaying)
        {
            progressbar.value = (float)(vp.time / vp.length);
        }
    }

    public int cnt = 0;
    private StorageReference storageReference;
    private string localFilenameUriString;
    private string filename;
    
    public void Awake()
    {
        
        /*
        var storageReference = GetStorageReference();
        var localFilenameUriString = PathToPersistentDataPathUriString($"{videoName}.{videoExtention}");
        var filename = FileUriStringToPath(localFilenameUriString);
        persistentDataPath = Application.persistentDataPath;
        storageReference = GetStorageReference();
        localFilenameUriString = PathToPersistentDataPathUriString($"{videoName}.{videoExtention}");
        filename = FileUriStringToPath(localFilenameUriString);
        */
        loading.gameObject.SetActive(false);

        /*
        if (File.Exists(filename))
        {
            downloadButton.interactable = false;
        }
        */
        
    }


    #region Util

    /*
    public void StartVideio(StorageReference storageReference, string localFilenameUriString, string filename)
    {
        Debug.Log(localFilenameUriString);
        Debug.Log(filename);
        if (File.Exists(filename))
        {
            Debug.Log($"exists vedio file : {filename}");
            SetVideio(filename);
        }
        else
        {
            loading.gameObject.SetActive(true);
            Download();
        }
    }
    */
    
    private void SetVideio(string filename)
    {
        //print(VideoSource.Url);
        vp.source = VideoSource.Url;
        vp.url = filename;
        //vp.Play();
    }

    private void Loading(float value)
    {
        Debug.Log(value);
        var fillImage = loading.fillRect.GetComponent<Image>();
        loading.value = value;
        fillImage.color = new Color(fillImage.color.r, value, fillImage.color.b, fillImage.color.a);
    }

    /*
    public void Download(StorageReference storageReference, string localFilenameUriString, string filename)
    {

        StartCoroutine(DownloadToFile(storageReference, localFilenameUriString, filename));
    }
    */

    //private string[] filename_arr = new string[5];
    private List<string> filename_arr = new List<string>();
    
    public void Download(string vid1)
    {
        persistentDataPath = Application.persistentDataPath;
        storageReference = GetStorageReference(vid1);


        localFilenameUriString = PathToPersistentDataPathUriString($"{vid1}.{videoExtention}");
        filename = FileUriStringToPath(localFilenameUriString);
        print(filename);
        filename_arr.Add(filename);
        StartCoroutine(DownloadToFile(storageReference, localFilenameUriString, filename));

    }

    protected string FileUriStringToPath(string fileUriString)
    {
        return Uri.UnescapeDataString((new Uri(fileUriString)).PathAndQuery);
    }

    protected IEnumerator DownloadToFile(StorageReference storageReference, string localFilenameUriString, string filename)
    {
        isLoading = true;
        //Debug.Log(String.Format("Downloading {0} to {1}...", storageReference.Path,
        //                       localFilenameUriString));
        var task = storageReference.GetFileAsync(
          localFilenameUriString,
          new StorageProgress<DownloadState>((v) => DisplayDownloadState(v, filename)),
          cancellationTokenSource.Token);
        yield return new WaitForTaskCompletion(this, task);
        if (!(task.IsFaulted || task.IsCanceled))
        {
            Debug.Log(String.Format("Finished uploading file {0} ({1})", localFilenameUriString,
                                   filename));
            Debug.Log(String.Format("File Size {0} bytes\n", (new FileInfo(filename)).Length));

            videioAnimator.SetTrigger("LoadingFinish");
            isLoading = false;
            //SetVideio(filename);
            //fileContents = File.ReadAllText(filename);
        }
    }
    protected StorageReference GetStorageReference(string vidname)
    {
        var appBucket = FirebaseApp.DefaultInstance.Options.StorageBucket;
        var MyStorageBucket = String.Format("gs://{0}/", appBucket);
        Debug.Log(MyStorageBucket);
        var downloadTarget = $"{MyStorageBucket}/{$"{vidname}.{videoExtention}"}";
        // If this is an absolute path including a bucket create a storage instance.
        if (downloadTarget.StartsWith("gs://") ||
            downloadTarget.StartsWith("http://") ||
            downloadTarget.StartsWith("https://"))
        {
            var storageUri = new Uri(downloadTarget);
            var firebaseStorage = FirebaseStorage.GetInstance(
              String.Format("{0}://{1}", storageUri.Scheme, storageUri.Host));
            return firebaseStorage.GetReferenceFromUrl(downloadTarget);
        }
        // When using relative paths use the default storage instance which uses the bucket supplied
        // on creation of FirebaseApp.
        return FirebaseStorage.DefaultInstance.GetReference(downloadTarget);
    }

    protected virtual string PathToPersistentDataPathUriString(string filename)
    {
        if (filename.StartsWith(UriFileScheme))
        {
            return filename;
        }
        return String.Format("{0}{1}/{2}", UriFileScheme, persistentDataPath,
                             filename);
    }
    protected virtual void DisplayDownloadState(DownloadState downloadState, string filename)
    {
        if (operationInProgress)
        {

            //Debug.Log(String.Format("Downloading {0}: {1} out of {2}", downloadState.Reference.Name,
            //                       downloadState.BytesTransferred, downloadState.TotalByteCount));
            Loading((float)(Math.Round((float)downloadState.BytesTransferred, 2) / Math.Round((float)downloadState.TotalByteCount, 2)));
        }
    }

    class WaitForTaskCompletion : CustomYieldInstruction
    {
        Task task;
        VideioConteroller uiHandler;

        // Create an enumerator that waits for the specified task to complete.
        public WaitForTaskCompletion(VideioConteroller uiHandler, Task task)
        {
            uiHandler.previousTask = task;
            uiHandler.operationInProgress = true;
            this.uiHandler = uiHandler;
            this.task = task;
        }

        // Wait for the task to complete.
        public override bool keepWaiting
        {
            get
            {
                if (task.IsCompleted)
                {
                    uiHandler.operationInProgress = false;
                    uiHandler.cancellationTokenSource = new CancellationTokenSource();
                    if (task.IsFaulted)
                    {
                        uiHandler.DisplayStorageException(task.Exception);
                    }
                    return false;
                }
                return true;
            }
        }
    }

    protected void DisplayStorageException(Exception exception)
    {
        var storageException = exception as StorageException;
        if (storageException != null)
        {
            Debug.Log(String.Format("Error Code: {0}", storageException.ErrorCode));
            Debug.Log(String.Format("HTTP Result Code: {0}", storageException.HttpResultCode));
            Debug.Log(String.Format("Recoverable: {0}", storageException.IsRecoverableException));
            Debug.Log(storageException.ToString());
        }
        else
        {
            Debug.Log(exception.ToString());
        }
    }
    #endregion
    #region TriggerEvent
    public void Down()
    {
        isClicked = true;
    }

    public void UP()
    {
        vp.time = progressbar.value * vp.length;
        isClicked = false;

    }

    public void Click(string pButton) 
    {

        /*
        if(cnt==1){
            vp.Play();
        }
        cnt += 1;
        */
        if(vp.isPlaying)
        {
            vp.Pause();
            playAnimator.SetTrigger("Pause");
        }
        else
        {

            if(pButton == "vid1"){
                print(filename_arr[0]);
                print(pButton);
                SetVideio(filename_arr[0]);
            }
            if(pButton == "vid2"){
                print(filename_arr[1]);
                print(pButton);
                SetVideio(filename_arr[1]);
            }
            if(pButton == "vid3"){
                print(filename_arr[2]);
                print(pButton);
                SetVideio(filename_arr[2]);
            }
            if(pButton == "vid4"){
                SetVideio(filename_arr[3]);
            }
            if(pButton == "vid5"){
                SetVideio(filename_arr[4]);
            }

            vp.Play();
            playAnimator.SetTrigger("Play");
        }
    }

    public void Hover()
    {
        if (isLoading) return;
        videioAnimator.SetTrigger("HoverIn");
    }

    public void Exit()
    {
        if (isLoading) return;
        videioAnimator.SetTrigger("HoverOut");
    }

    #endregion

}
