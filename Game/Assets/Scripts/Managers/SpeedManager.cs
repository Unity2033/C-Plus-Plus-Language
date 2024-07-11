using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SpeedManager : State
{
    [SerializeField] UnityEvent callback;

    [SerializeField] static float speed;
    [SerializeField] float limitSpeed = 60.0f;

    public static float Speed
    {
        get { return speed; }
        set { speed = value; }
    }

    private void Awake()
    {
        speed = 20.0f;

        StartCoroutine(Increase());
    }

    IEnumerator Increase()
    {
        while(limitSpeed > speed && state == true)
        {
            if(callback != null)
            {
                callback.Invoke();
            }

            yield return new WaitForSeconds(2.5f);

            speed++;
        }
    }

}
