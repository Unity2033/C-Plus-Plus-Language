using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class WeaponManager : MonoBehaviour
{
    private Weapon weapon;

    [SerializeField] GameObject character;
    [SerializeField] GameObject weaponObject;

    private IWeapon[] iWeapon = new IWeapon[3] { new SpiritCore(), new SpiritCore() , new SpiritCore() };

    void Start()
    {
        weapon = new Weapon();

        weaponObject = Instantiate(Resources.Load<GameObject>("Weapon"));
        weaponObject.transform.SetParent(character.transform);

        SelectWeapon();
    }

    public void SelectWeapon(int count = 0)
    {
        weapon.SetWeapon(iWeapon[count]);

        switch (count)
        {
            case 0 : weaponObject.GetComponent<SpriteRenderer>().sprite = weapon.WeaponShape("SpiritCore");
                break;
            case 1 : weaponObject.GetComponent<SpriteRenderer>().sprite = weapon.WeaponShape("MagicWand");
                break;
            case 2: weaponObject.GetComponent<SpriteRenderer>().sprite = weapon.WeaponShape("Broken");
                break;
        }
    }

    public void Update()
    {
        weapon.Attack(weaponObject);
    }
}
