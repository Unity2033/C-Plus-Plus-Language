using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MiddleDetector : MonoBehaviour, IHitable
{
    public void Activate(Runner runner)
    {
        runner.RevertPosition();
    }
}
