using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Util : MonoBehaviour
{
    static public void Flip(SpriteRenderer spriteRenderer, Vector2 direction, bool state)
    {
        if (direction.x > 0)
        {
            spriteRenderer.flipX = state;
        }
        else if (direction.x < 0)
        {
            spriteRenderer.flipX = !state;
        }

    }
}
