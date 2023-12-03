using Photon.Pun;
using UnityEngine;

namespace MRTK.Tutorials.MultiUserCapabilities
{
    public class GenericNetSync : MonoBehaviourPun, IPunObservable
    {
        [SerializeField] private bool isUser = default;

        private Camera mainCamera;

        private Vector3 networkLocalPosition;
        private Quaternion networkLocalRotation;
        // 추가 : 스케일 변수 추가하여 크기변경도 동기화 되도록
        private Vector3 networkLocalScale;

        private Vector3 startingLocalPosition;
        private Quaternion startingLocalRotation;
        private Vector3 startingLocalScale;

        void IPunObservable.OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
        {
            if (stream.IsWriting)
            {
                stream.SendNext(transform.localPosition);
                stream.SendNext(transform.localRotation);
                stream.SendNext(transform.localScale);
            }
            else
            {
                networkLocalPosition = (Vector3)stream.ReceiveNext();
                networkLocalRotation = (Quaternion)stream.ReceiveNext();
                networkLocalScale = (Vector3)stream.ReceiveNext();
            }
        }

        private void Start()
        {
            mainCamera = Camera.main;

            if (isUser)
            {
                if (TableAnchor.Instance != null) transform.parent = FindObjectOfType<TableAnchor>().transform;

                if (photonView.IsMine) GenericNetworkManager.Instance.localUser = photonView;
            }

            var trans = transform;
            startingLocalPosition = trans.localPosition;
            startingLocalRotation = trans.localRotation;

            networkLocalPosition = startingLocalPosition;
            networkLocalRotation = startingLocalRotation;
            networkLocalScale = startingLocalScale;
        }

        // private void FixedUpdate()
        private void Update()
        {
            if (!photonView.IsMine)
            {
                var trans = transform;
                trans.localPosition = networkLocalPosition;
                trans.localRotation = networkLocalRotation;
                trans.localScale = networkLocalScale;
            }

            if (photonView.IsMine && isUser)
            {
                var trans = transform;
                var mainCameraTransform = mainCamera.transform;
                trans.position = mainCameraTransform.position;
                trans.rotation = mainCameraTransform.rotation;
            }
        }
    }
}
