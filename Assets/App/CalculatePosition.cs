using JetBrains.Annotations;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem.LowLevel;
using UnityEngine.UIElements;

public class CalculatePosition : MonoBehaviour
{
    /*
    public Transform Body;
    public GameObject Plane1;
    public GameObject Plane2;

    public Transform targetPoint1;
    public Transform Point2;
    public Transform Point3;
    
    Vector3 initalvector;

    Vector3 getPoint1;
    Vector3 getPoint2;
    Vector3 getPoint3;

    //Rotation 보정
    Vector3 setvector;
    Vector3 initialmidleVector;
    Vector3 setmidleVector;

    */


    //Scale 보정
    float k;

    public GameObject Plane2;

    //newscript
    Transform originPosition1;
    Transform originPosition2;
    Transform originPosition3;

    Vector3 getPosition1;
    Vector3 getPosition2;
    Vector3 getPosition3;


    // Start is called before the first frame update
    void Start()
    {
        


    }

    // Update is called once per frame
    void Update()
    {
        
    }


    public void BodySampling()
    {
        //get scale
        newSetScale();

        newSetRotation();

        newSetPosition();


    }



    public void newSetScale()
    {
        //초반 세팅
        originPosition1 = GameObject.Find("TargetPoint1").transform;
        originPosition2 = GameObject.Find("Point2").transform;
        originPosition3 = GameObject.Find("Point3").transform;

        getPosition1 = new Vector3(JetController.pointPosition[0].Item1, JetController.pointPosition[0].Item2, JetController.pointPosition[0].Item3);
        getPosition2 = new Vector3(JetController.pointPosition[1].Item1, JetController.pointPosition[1].Item2, JetController.pointPosition[1].Item3);
        getPosition3 = new Vector3(JetController.pointPosition[2].Item1, JetController.pointPosition[2].Item2, JetController.pointPosition[2].Item3);

        float L1 = Vector3.Distance(originPosition2.position, originPosition3.position);
        float L2 = Vector3.Distance(originPosition1.position, originPosition3.position);
        float L3 = Vector3.Distance(originPosition1.position, originPosition2.position);

        float l1 = Vector3.Distance(getPosition2, getPosition3);
        float l2 = Vector3.Distance(getPosition1, getPosition3);
        float l3 = Vector3.Distance(getPosition1, getPosition2);

        k = (L1 * l1 + L2 * l2 + L3 * l3) / (L1 * L1 + L2 * L2 + L3 * L3);

        Vector3 currentScale = transform.localScale;
        transform.localScale = new Vector3(currentScale.x * k, currentScale.y * k, currentScale.z * k);

    }

    public void newSetRotation()
    {


        //점들이 이루는 plane의 normalvector를 계산한다.
        originPosition1 = GameObject.Find("TargetPoint1").transform;
        originPosition2 = GameObject.Find("Point2").transform;
        originPosition3 = GameObject.Find("Point3").transform;

        Vector3 originalNormalVector = GetNormalVector(originPosition1.position, originPosition2.position, originPosition3.position);

        Vector3 getNormalVector = GetNormalVector(getPosition1, getPosition2, getPosition3);

        
        //get parameter for rotation

        Vector3 rotationAxis = Vector3.Cross(originalNormalVector, getNormalVector).normalized;
        float angle = Vector3.Angle(getNormalVector, originalNormalVector);

        //lets rotaiton
        Quaternion rotationQuaternion = Quaternion.AngleAxis(angle, rotationAxis);
        transform.rotation = rotationQuaternion;

        //teset
        //Instantiate(Plane2, (getPosition1 + getPosition2 + getPosition3) / 3, Quaternion.FromToRotation(Vector3.up, getNormalVector));
        

        
        //get direction rotation
        originPosition1 = GameObject.Find("TargetPoint1").transform;
        originPosition2 = GameObject.Find("Point2").transform;
        originPosition3 = GameObject.Find("Point3").transform;

        Vector3 originMidleVector = midleVector(originPosition1.position, originPosition2.position, originPosition3.position);
        Vector3 getMidleVector = midleVector(getPosition1, getPosition2, getPosition3);

        Vector3 formidaxis = Vector3.Cross(originMidleVector, getMidleVector).normalized;

        float midangle = Vector3.Angle(originMidleVector, getMidleVector);
        Quaternion midrotationQuaternion = Quaternion.AngleAxis(midangle, formidaxis);
        

        //Quaternion midrotationQuaternion = Quaternion.FromToRotation(originMidleVector, getMidleVector);
        transform.rotation = midrotationQuaternion * transform.rotation;

    }
    
    public Vector3 midleVector(Vector3 point1, Vector3 point2, Vector3 point3)
    {
        Vector3 midleVector = (point2 + point3) / 2 - point1;
        return midleVector;
    }

    public Vector3 GetNormalVector(Vector3 point1, Vector3 point2, Vector3 point3)
        {
            return Vector3.Cross(point3 - point1, point2 - point1).normalized;
        }

    public void newSetPosition()
    {
        Vector3 objectPosition = Vector3.zero;
        GameObject targetObject = GameObject.Find("TargetPoint1");
        if (targetObject != null)
        {
            objectPosition = targetObject.transform.position;
        }
        else
        {
            Debug.Log("There is no TargetPoint1");
        }


        transform.position += (getPosition1 - objectPosition);
    }


    



    



































    /*
    public void BodyMaking()
    {
        getPoint1 = new Vector3(JetController.pointPosition[0].Item1, JetController.pointPosition[0].Item2, JetController.pointPosition[0].Item3);
        getPoint2 = new Vector3(JetController.pointPosition[1].Item1, JetController.pointPosition[1].Item2, JetController.pointPosition[1].Item3);
        getPoint3 = new Vector3(JetController.pointPosition[2].Item1, JetController.pointPosition[2].Item2, JetController.pointPosition[2].Item3);

        float L1 = Vector3.Distance(targetPoint1.position, Point2.position);
        float L2 = Vector3.Distance(targetPoint1.position, Point3.position);
        float L3 = Vector3.Distance(Point2.position, Point3.position);

        float l1 = Vector3.Distance(getPoint1, getPoint2);
        float l2 = Vector3.Distance(getPoint1, getPoint3);
        float l3 = Vector3.Distance(getPoint2, getPoint3);

        k = (L1 * l1 + L2 * l2 + L3 * l3) / (L1 * L1 + L2 * L2 + L3 * L3);


        initalvector = Vector3.Cross(Point3.position - targetPoint1.position, Point2.position - targetPoint1.position).normalized;
        Debug.Log($"initalvector vector{initalvector}");

        setvector = Vector3.Cross(getPoint3 - getPoint1, getPoint2 - getPoint1).normalized;
        Debug.Log($"setvector vector{setvector}");


        //tset
        Instantiate(Plane1, (getPoint1 + getPoint2 + getPoint3) / 3, Quaternion.FromToRotation(Vector3.up, setvector));





        setmidleVector = midleVector(getPoint1, getPoint2, getPoint3);


        SetScale(k);

        SetRotation(initalvector, setvector);

        SetnewlocalPosition();


    }

    public void SetScale(float k)
    {
        Vector3 currentScale = Body.transform.localScale;

        Body.transform.localScale = new Vector3(currentScale.x * k, currentScale.y * k, currentScale.z * k);
    }

    public void SetRotation(Vector3 initalvector, Vector3 setvector)
    {
        Quaternion rotation = Quaternion.FromToRotation(initalvector, setvector);
        Debug.Log($"rotation vector{rotation}");


        //Quaternion origin = Body.transform.rotation;

        transform.rotation *= rotation ;
        Debug.Log($"new rotation vector{transform.rotation}");


        GameObject newsetpoint1 = GameObject.Find("TargetPoint1");
        GameObject newsetpoint2 = GameObject.Find("Point2");
        GameObject newsetpoint3 = GameObject.Find("Point3");

        Vector3 testplanevector = Vector3.Cross(newsetpoint3.transform.position - newsetpoint1.transform.position, newsetpoint2.transform.position - newsetpoint1.transform.position).normalized;
        Debug.Log(testplanevector);
        
        
        //teset
        Instantiate(Plane2, (getPoint1 + getPoint2 + getPoint3) / 3, Quaternion.FromToRotation(Vector3.up, testplanevector));




        initialmidleVector = midleVector(newsetpoint1.transform.position, newsetpoint2.transform.position, newsetpoint3.transform.position);



        float angle = Vector3.Angle(initialmidleVector, setmidleVector);
        transform.Rotate(testplanevector, angle);

    }

    public void SetnewlocalPosition()
    {
        Vector3 objectPosition = Vector3.zero;
        GameObject targetObject = GameObject.Find("TargetPoint1");
        if (targetObject != null)
        {
            objectPosition = targetObject.transform.position;
        }
        else
        {
            Debug.Log("There is no TargetPoint1");
        }


        transform.position += (getPoint1 - objectPosition);


    }

   
    */
}
