using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackDetector : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        Obstacle clone = other.GetComponent<Obstacle>();

        if(clone != null)
        {
            clone.Speed = transform.parent.GetComponent<Obstacle>().Speed;
        }
    }
}
