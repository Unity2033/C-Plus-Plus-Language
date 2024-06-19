using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class RoadTreadmill : MonoBehaviour
{
    [SerializeField] UnityEvent callback;

    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Road"))
        {
            if (callback != null)
            {
                callback.Invoke();
            }
        }
    }
}
