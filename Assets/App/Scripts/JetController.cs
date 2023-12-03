using MRTKExtensions.QRCodes;
using System;
using UnityEngine;

public class JetController : MonoBehaviour
{
    [SerializeField]
    private QRTrackerController trackerController;
    public static Tuple<float, float, float>[] pointPosition = new Tuple<float, float, float>[3];
    

    Transform newSet;
    Vector3 newPointPosition;

    public GameObject point;
    
    public Transform jet;
    public Transform UIObj;



    //int numPoint = QRTrackerController.Counting;
    private void Start()
    {
        trackerController.PositionSet += PoseFound;
        //jet = transform.GetChild(0);
        //UIObj = transform.GetChild(1);
    }

    private void PoseFound(object sender, Pose pose)
    {
        Debug.Log("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        //var childObj = transform.GetChild(0);
        jet.SetPositionAndRotation(pose.position, pose.rotation);
        jet.gameObject.SetActive(true);
        Debug.Log(jet);

        newSet = jet;

        newPointPosition = jet.position + jet.right *0.3f;       
        pointPosition[QRTrackerController.Counting] = new Tuple<float, float, float>(newPointPosition.x, newPointPosition.y, newPointPosition.z);

       

        //var UIobj = transform.GetChild(1);
        Debug.Log(UIObj);
        Vector3 localoffset = Vector3.up * 0.5f;
        UIObj.SetPositionAndRotation(pose.position + localoffset, pose.rotation);
        UIObj.gameObject.SetActive(true);

    }

    public void MakePoints()
    {

        GameObject Point = Instantiate(point, newPointPosition, newSet.rotation);

        Debug.Log(pointPosition[QRTrackerController.Counting]);
        Debug.Log(QRTrackerController.Counting);
        QRTrackerController.Counting++;
        

    }
}