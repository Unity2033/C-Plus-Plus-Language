using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum RoadLine
{
    LEFT   = -1,
    MIDDLE =  0,
    RIGHT  =  1,
}

public class Runner : MonoBehaviour
{
    [SerializeField] RoadLine roadLine;
    [SerializeField] float positionX = 3.5f;

    void Start()
    {
        roadLine = RoadLine.MIDDLE;
    }

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.LeftArrow))
        {
            if(roadLine != RoadLine.LEFT)
            {
                roadLine--;
            }
        }

        if(Input.GetKeyDown(KeyCode.RightArrow))
        {
            if(roadLine != RoadLine.RIGHT)
            {
                roadLine++;
            }
        }
    }
}
