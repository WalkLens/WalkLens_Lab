using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class SceneManager : MonoBehaviour
{
    private static SceneManager _instance;

    public static SceneManager Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = FindObjectOfType<SceneManager>();
                if (_instance == null)
                {
                    GameObject obj = new GameObject("SceneManager");
                    _instance = obj.AddComponent<SceneManager>();
                }
            }

            return _instance;
        }
    }
    
    public UserType userType;
    void Start()
    {
        DontDestroyOnLoad(this);
    }

    public void LoadUITestScene(int userTypeNum)
    {
        if (userTypeNum == 0)
        {
            UnityEngine.SceneManagement.SceneManager.LoadScene("UITestScene");
            userType = UserType.Instructor;
            //TestGameManager.Instance.SetUserInfo(userType);
        }
        else if(userTypeNum == 1)
        {
            UnityEngine.SceneManagement.SceneManager.LoadScene("UITestScene");
            userType = UserType.Student;
            //TestGameManager.Instance.SetUserInfo(userType);
        }
    }
}
public enum UserType
{
    Instructor,
    Student
}