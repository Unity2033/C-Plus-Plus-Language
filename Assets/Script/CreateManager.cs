using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateManager : MonoBehaviour
{
    private MemoryPool memoryPool;

    string [] name = new string[2];
    
    private void Awake()
    {
        name[0] = "Goblin";
        name[1] = "Slime";

        memoryPool = new MemoryPool(Resources.Load<GameObject>(name[Random.Range(0,2)]));
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

            GameObject monster = Resources.Load<GameObject>(name[Random.Range(0, 2)]);

            monster = memoryPool.ActivatePoolItem(monster);
            monster.GetComponent<Monster>().SetUp(memoryPool);

            monster.transform.position = Random.insideUnitCircle.normalized * 5;
        }
      
    }
}
