using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Monster : MonoBehaviour, IAttack
{
    protected int health;
    protected int attack;
    protected MemoryPool memoryPool;
 
    public int Health
    {
        get { return attack; }
        set { health = value; }
    }

    virtual public void Use() 
    {
        Debug.Log("Monster Animation");
    }

    public void SetUp(MemoryPool memoryPool)
    {
        this.memoryPool = memoryPool;
    }
}
