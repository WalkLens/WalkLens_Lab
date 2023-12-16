using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MRTKExtensions.Animation
{
    public class LookAtCamera : MonoBehaviour
    {
        public float RotateAngle = 180f;

        void Update()
        {
            gameObject.transform.LookAt(Camera.main.transform);
            gameObject.transform.Rotate(Vector3.up, RotateAngle);
        }
    }
}

