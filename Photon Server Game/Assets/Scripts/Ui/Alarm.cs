using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public enum AlarmType
{
    Alarm,
    NickName
}

public class Alarm : MonoBehaviour
{
    [SerializeField] Text content;

    public static void Show(string message, AlarmType alarmType)
    {
        GameObject window = Instantiate(Resources.Load<GameObject>(alarmType.ToString()));

        Debug.Log(window);

        window.GetComponent<Alarm>().content.text = message;

        window.GetComponent<Alarm>().content.fontSize = 65;

        window.GetComponent<Alarm>().content.alignment = TextAnchor.MiddleCenter;
    }

    public void Close()
    {
        Destroy(gameObject);
    }
}
