using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Slime : Monster
{
    void Start()
    {
        health = 50;
        attack = 1;
    }

    override public void Use()
    {
        Debug.Log("고블린 공격");
        memoryPool.DeactivatePoolItem(gameObject);
    }
}
