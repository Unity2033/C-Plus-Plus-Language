using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleManager : MonoBehaviour
{
    [SerializeField] List<GameObject> obstacleList;

    [SerializeField] GameObject [ ] obstaclePrefabs;

    void Start()
    {
        obstacleList.Capacity = 10;

        Create();
    }
     
    public void Create()
    {
        for(int i = 0; i < obstaclePrefabs.Length; i++)
        {
            GameObject obstacle = Instantiate(obstaclePrefabs[i]);

            obstacle.SetActive(false);

            obstacleList.Add(obstacle);
        }
    }
  
}
