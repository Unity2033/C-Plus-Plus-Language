using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weapon
{
    private IWeapon weapon;
    private Sprite spriteShape;

    public void SetWeapon(IWeapon weapon, Sprite spriteShape)
    {
        this.weapon = weapon;
        this.spriteShape = spriteShape;
    }

    public void Attack()
    {
        weapon.Attack();
    }


}
