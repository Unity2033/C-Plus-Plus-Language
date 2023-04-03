using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponManager : MonoBehaviour
{
    Weapon weapon;
    [SerializeField] public SpriteRenderer spriteRenderer;

    void Start()
    {
        weapon = new Weapon();

        weapon.SetWeapon(new Boom(),Resources.Load<Sprite>("Boom"));
    }

    public void ChangeBoom()
    {
        spriteRenderer.sprite = Resources.Load<Sprite>("Boom");
        weapon.SetWeapon(new Boom(), spriteRenderer.sprite);
    }

    public void Attack()
    {
        weapon.Attack();
    }
    

}
