using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Obstacle : MonoBehaviour
{
    [SerializeField] Vector3 direction;
    [SerializeField] float speed = 5.0f;

    public float Speed
    {
        get { return speed; }
        set { speed = value; }
    }

    private void OnEnable()
    {
        direction = Vector3.forward;
    }

    void Update()
    {
        transform.Translate(direction * speed * Time.deltaTime);       
    }
}
