using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum WeaponType
{
    None,
    Sword,
    sorcerySword
}

public class Playerweapons : MonoBehaviour
{
    public WeaponType currentWeapon = WeaponType.None;
    private Playerattack attackScript;

    private void Start()
    {
        // Initialize the Playerattack component
        attackScript = GetComponent<Playerattack>();
        UpdateWeaponVisibility();
    }

    // Set the player's weapon and update its visibility
    public void SetWeapon(WeaponType weaponType)
    {
        currentWeapon = weaponType;
        UpdateWeaponVisibility();
    }

    // Get the current weapon type
    public WeaponType GetCurrentWeapon()
    {
        return currentWeapon;
    }

     // Update the visibility of weapons based on the current weapon type
    private void UpdateWeaponVisibility()
    {
        // Exit if attackScript is not found
        if (attackScript == null)
        {
            return;
        }

        // Toggle weapon visibility
        switch (currentWeapon)
        {
            case WeaponType.None:
                attackScript.sword.SetActive(false);
                attackScript.sorcerySword.SetActive(false);
                break;
            case WeaponType.Sword:
                attackScript.sword.SetActive(true);
                attackScript.sorcerySword.SetActive(false);
                break;
            case WeaponType.sorcerySword:
                attackScript.sword.SetActive(false);
                attackScript.sorcerySword.SetActive(true);
                break;
            default:
                break;
        }
    }
}