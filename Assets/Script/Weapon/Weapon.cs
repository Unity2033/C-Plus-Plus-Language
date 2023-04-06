using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weapon
{
    private IWeapon weapon;

    public Sprite WeaponShape(string name)
    {
        return Resources.Load<Sprite>(name);
    }

    public void SetWeapon(IWeapon weapon)
    {
        this.weapon = weapon;   
    }

    public void Attack(GameObject obj)
    {
        weapon.Attack(obj);
    }
}
