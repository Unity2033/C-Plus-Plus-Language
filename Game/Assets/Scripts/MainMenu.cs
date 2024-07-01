using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainMenu : MonoBehaviour
{
    public void Execute()
    {
        EventManager.Publish(EventType.START);

        StartCoroutine(SceneController.Instance.AsyncLoad(1));
    }
}
