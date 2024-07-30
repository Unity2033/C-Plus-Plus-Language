using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum State
{ 
    RUN,
    ATTACK,
    DIE
}

public class Unit : MonoBehaviour
{
    [SerializeField] State state;
    [SerializeField] GameObject tower;
    [SerializeField] float speed = 5.0f;

    void Start()
    {
        state = State.RUN;
        tower = GameObject.Find("Tower");

        transform.LookAt(tower.transform.position);
    }

    void Update()
    {
        switch (state) 
        {
          case State.RUN    : Run();
                break;
          case State.ATTACK : 
                break;
          case State.DIE    :
                break;
        }
    }

    public void Run()
    {
        transform.position = Vector3.MoveTowards
        (
            transform.position, 
            tower.transform.position,
            speed * Time.deltaTime
        );
    }
}
