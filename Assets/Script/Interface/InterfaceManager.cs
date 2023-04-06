using UnityEngine;

public interface IAttack
{
    public void Use();
}

public interface IWeapon
{
    public void Attack(GameObject obj);
}


