using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mouse : MonoBehaviour
{
    void Start()
    {
        ActiveMouse(false, CursorLockMode.Locked);
    }

    public static void ActiveMouse(bool state, CursorLockMode mode)
    {
        Cursor.visible = state;
        Cursor.lockState = mode;
    }

}
