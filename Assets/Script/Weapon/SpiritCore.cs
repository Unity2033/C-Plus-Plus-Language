using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class SpiritCore : MonoBehaviour, IWeapon
{

    void Awake()
    {
        Create(Resources.Load<GameObject>("GameObject"));
    }

    public void Create(GameObject obj)
    {
        Instantiate(obj);
    }

    public void Attack()
    {
        Debug.Log("Æã~Æã");
    }

}
