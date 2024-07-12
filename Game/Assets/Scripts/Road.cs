using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Road : MonoBehaviour, IInteractable, IHitable
{
    [SerializeField] UnityEvent callback;

    public void Activate(Runner runner)
    {
        runner.Possible();
    }

    public void Interact()
    {
        if (callback != null)
        {
            callback.Invoke();
        }
    }
}
