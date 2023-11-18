using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class TestGameManager : MonoBehaviour
{
    private static TestGameManager _instance;
    public static TestGameManager Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = FindObjectOfType<TestGameManager>();

                if (_instance == null)
                {
                    GameObject obj = new GameObject("TestGameManager");
                    _instance = obj.AddComponent<TestGameManager>();
                }
            }
            return _instance;
        }
    }

    // GameManager의 기타 로직 및 변수들...
    [FormerlySerializedAs("instructorGameObject")] [SerializeField] private GameObject instructorPrefab;
    [FormerlySerializedAs("studentGameObject")] [SerializeField] private GameObject studentPrefab;
    public Transform parentTransform;
    private void Awake()
    {
        // Ensure there's only one instance of GameManager
        if (_instance == null)
        {
            _instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void Update()
    {
        // 테스트용
        if(Input.GetKeyDown(KeyCode.S)) SetUserInfo(SceneManager.Instance.userType);
    }

    public void SetUserInfo(UserType userType)
    {
        Debug.Log("set user info" + userType);
        if (userType == UserType.Instructor)
        {
            GameObject gameObject = Instantiate(instructorPrefab); //, parentTransform);
            Debug.Log($"{gameObject.name} + {gameObject.transform.position}");
        }
        else if (userType == UserType.Student)
        {
            Instantiate(studentPrefab); // , parentTransform);
        }
    }
}
