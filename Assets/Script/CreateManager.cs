using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateManager : MonoBehaviour
{
    private MemoryPool memoryPool;
    
    private void Awake()
    {
        memoryPool = new MemoryPool(Resources.Load<GameObject>("Goblin"));
    }

    void Start()
    {
        StartCoroutine(Create());
    }

    public IEnumerator Create()
    {
        var wait = new WaitForSeconds(5f);

        while(true)
        {
            yield return wait;

            GameObject monster = memoryPool.ActivatePoolItem();
            monster.GetComponent<Monster>().SetUp(memoryPool);

            monster.transform.position = Random.insideUnitCircle.normalized * 5;
        }
      
    }
}
