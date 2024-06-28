using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FrontDetector : MonoBehaviour, IHitable
{
    public void Activate(Runner runner)
    {
        runner.Die();
    }
}
