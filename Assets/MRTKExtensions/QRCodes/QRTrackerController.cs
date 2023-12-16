﻿using System;
using RealityCollective.ServiceFramework.Services;
using UnityEngine;

namespace MRTKExtensions.QRCodes
{
    public class QRTrackerController : MonoBehaviour
    {
        [SerializeField]
        private SpatialGraphCoordinateSystemSetter spatialGraphCoordinateSystemSetter;

        [SerializeField]
        private string locationQrValue = string.Empty;

        private Transform markerHolder;
        //private AudioSource audioSource;
        private GameObject markerDisplay;
        private QRInfo lastMessage;
        //make points
        public static int Counting = 0;

        public GameObject StartUI;
       

        /*public void CheckingPoints()
        {
            //make points instantiate and if points are more than 3points, then calculate the best position
            Counting++;
            Debug.Log($"{Counting}");
            
        }
        */
   
        public bool IsTrackingActive { get; private set; } = true;

        private IQRCodeTrackingService qrCodeTrackingService;

        private IQRCodeTrackingService QRCodeTrackingService
        {
            get
            {
                while (!ServiceManager.Instance.IsInitialized && Time.time < 5) ;
                return qrCodeTrackingService ??
                       (qrCodeTrackingService = ServiceManager.Instance.GetService<IQRCodeTrackingService>());
            }
        }

        private void Start()
        {
            if (!QRCodeTrackingService.IsSupported)
            {
                return;
            }
            //markerHolder = position of QR code
            markerHolder = spatialGraphCoordinateSystemSetter.gameObject.transform;

            //markerDisplay is below of QR object
            markerDisplay = markerHolder.GetChild(0).gameObject;
            //markerDisplay.SetActive(false);

            //audioSource = markerHolder.gameObject.GetComponent<AudioSource>();

            QRCodeTrackingService.QRCodeFound += ProcessTrackingFound;
            spatialGraphCoordinateSystemSetter.PositionAcquired += SetPosition;
            spatialGraphCoordinateSystemSetter.PositionAcquisitionFailed +=
                (s, e) => ResetTracking();


            if (QRCodeTrackingService.IsInitialized)
            {
                StartTracking();
            }
            else
            {
                QRCodeTrackingService.Initialized += QRCodeTrackingService_Initialized;
            }
        }

        private void QRCodeTrackingService_Initialized(object sender, EventArgs e)
        {
            StartTracking();
        }

        private void StartTracking()
        {
            QRCodeTrackingService.Enable();
        }

        public void ResetTracking()
        {
            
            if (QRCodeTrackingService.IsInitialized)
            {
                markerDisplay.SetActive(false);

     
                IsTrackingActive = true;

                if (Counting >= 3)
                {
                    IsTrackingActive = false;
                    markerDisplay.SetActive(false);
                }


            }
        }

        private void ProcessTrackingFound(object sender, QRInfo msg)
        {
            if (msg == null || !IsTrackingActive )
            {
                return;
            }

            lastMessage = msg;

            if (msg.Data == locationQrValue && Math.Abs((DateTimeOffset.UtcNow - msg.LastDetectedTime.UtcDateTime).TotalMilliseconds) < 200)
            {
                spatialGraphCoordinateSystemSetter.SetLocationIdSize(msg.SpatialGraphNodeId,
                    msg.PhysicalSideLength);
            }
        }

        private void SetPosition(object sender, Pose pose)
        {
            IsTrackingActive = false;
            markerHolder.localScale = Vector3.one * lastMessage.PhysicalSideLength;
            markerDisplay.SetActive(true);

            PositionSet?.Invoke(this, pose);
            StartUI.SetActive(true);
            StartUI.transform.position = pose.position;
            //GameObject noticeUI = Instantiate(StartUI, pose.position, pose.rotation);


            
            //audioSource.Play();
        }

        public EventHandler<Pose> PositionSet;
    }
}