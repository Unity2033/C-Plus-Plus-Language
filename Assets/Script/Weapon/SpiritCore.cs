using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class SpiritCore : MonoBehaviour, IWeapon
{
    public void Attack(GameObject obj)
    {
        obj.transform.RotateAround
        (
            obj.transform.parent.position,
            Vector3.forward, 
            100f * Time.deltaTime
        );
    }

}
