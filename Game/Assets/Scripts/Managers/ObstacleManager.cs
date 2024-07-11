using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleManager : State
{
    [SerializeField] int random;

    [SerializeField] List<GameObject> obstacleList;

    [SerializeField] Transform activePositions;
    [SerializeField] GameObject [ ] obstaclePrefabs;

    void Start()
    {
        obstacleList.Capacity = 10;

        Create();

        StartCoroutine(ActiveObstacle());
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

    public bool ExamineActive()
    {
        for(int i = 0; i < obstacleList.Count; i++)
        {
            if (obstacleList[i].activeSelf == false)
            {
                return false;
            }
        }

        return true;
    }

    public IEnumerator ActiveObstacle()
    {
        while(state)
        {
            if (Random.Range(0, 2) == 1)
            {
                random = Random.Range(0, obstacleList.Count);

                while (obstacleList[random].activeSelf == true)
                {
                    if (ExamineActive())
                    {
                        GameObject obstacle = Instantiate(obstaclePrefabs[Random.Range(0, obstaclePrefabs.Length)]);

                        obstacle.SetActive(false);

                        obstacleList.Add(obstacle);
                    }

                    random = (random + 1) % obstacleList.Count;
                }

                obstacleList[random].SetActive(true);

                obstacleList[random].transform.position = activePositions.position;
            }

            yield return CoroutineCache.waitForSeconds(5.0f);
        }
    }
  
}
