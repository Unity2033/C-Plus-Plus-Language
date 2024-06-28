using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class CoroutineCache : MonoBehaviour
{
    class Compare : IEqualityComparer<float>
    {
        public bool Equals(float x, float y)
        {
            return x == y;
        }

        public int GetHashCode(float obj)
        {
            return obj.GetHashCode();
        }
    }

    private static readonly Dictionary<float, WaitForSeconds> dictionary =
        new Dictionary<float, WaitForSeconds>(new Compare());

    public static WaitForSeconds waitForSeconds(float time)
    {
        WaitForSeconds waitforSecond = null;

        if(dictionary.TryGetValue(time, out waitforSecond) == false)
        {
            dictionary.Add(time, waitforSecond = new WaitForSeconds(time));
        }

        return waitforSecond;
    }
}
