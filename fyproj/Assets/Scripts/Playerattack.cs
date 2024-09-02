using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Playerattack : MonoBehaviour
{
    // References
    public GameObject sword; 
    public GameObject sorcerySword; 
    public GameObject bulletPrefab; 
    float sorcerySwordShootInterval = 5f; 
    private float sorcerySwordShootTimer;

    public Playerweapons weaponsManager;
    private audiomanage audiomanage;
    private playermovement playermovement;

    private bool isPlayerDead = false;

    private void Start()
    {
        // Initialize shooting timer and get necessary components
        sorcerySwordShootTimer = sorcerySwordShootInterval;
        audiomanage = GameObject.FindGameObjectWithTag("Audio").GetComponent<audiomanage>();
        playermovement = GameObject.FindObjectOfType<playermovement>();
    }

    private void Update()
    {
        // Exit if the game has ended or weapons manager is not assigned
        if (playermovement != null && playermovement.IsGameEnded()) 
        {
            return; 
        }
        if (weaponsManager == null)
        {
            return;
        }

        // Handle weapon activation and shooting
        WeaponType currentWeapon = weaponsManager.GetCurrentWeapon();

        switch (currentWeapon)
        {
            case WeaponType.None:
                sword.SetActive(false);
                sorcerySword.SetActive(false);
                break;
            case WeaponType.Sword:
                sword.SetActive(true);
                sorcerySword.SetActive(false);
                break;
            case WeaponType.sorcerySword:
                sword.SetActive(false);
                sorcerySword.SetActive(true);

                // Handle shooting with sorcery sword
                sorcerySwordShootTimer -= Time.deltaTime;
                if (sorcerySwordShootTimer <= 0f)
                {
                    ShootWithsorcerySword();
                    sorcerySwordShootTimer = sorcerySwordShootInterval;
                }
                break;
            default:
                break;
        }
    }

    private void ShootWithsorcerySword()
    {
        // Return if player is dead
        if (isPlayerDead)
        {
            return;
        }

        if (bulletPrefab != null)
        {
            // Instantiate bullet at player's position with no rotation
            GameObject bullet = Instantiate(bulletPrefab, transform.position, Quaternion.identity);
            Rigidbody2D bulletRb = bullet.GetComponent<Rigidbody2D>();

            if (bulletRb != null)
            {
                // Set bullet direction and speed based on player facing direction
                Vector3 direction = (transform.localScale.x > 0 ? Vector3.right : Vector3.left).normalized;
                bulletRb.velocity = direction * 6f;
            }
            Destroy(bullet, 5f); // Destroy bullet after 5 seconds

            //Play shooting sound
            if (audiomanage != null && audiomanage.playerShoot != null)
            {
                audiomanage.PlaySFX(audiomanage.playerShoot);
            }
        }
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        // Handle bullet deflection if hit by a bullet while holding the sword
        if (other.CompareTag("Bullet"))
        {
            Bullet bullet = other.GetComponent<Bullet>();
            if (bullet != null && weaponsManager.GetCurrentWeapon() == WeaponType.Sword)
            {
                DeflectBullet(bullet);
            }
        }
    }

    private void DeflectBullet(Bullet bullet)
    {
        // Reverse the bullet's velocity and change its layer to "playerbullet"
        Rigidbody2D bulletRb = bullet.GetComponent<Rigidbody2D>();
        if (bulletRb != null)
        {
            bulletRb.velocity = -bulletRb.velocity; // Reverse bullet's velocity
            bullet.gameObject.layer = LayerMask.NameToLayer("playerbullet");
            if (audiomanage != null && audiomanage.playerDeflect != null)
            {
                audiomanage.PlaySFX(audiomanage.playerDeflect);
            }
        }
    }
    public void SetPlayerDead()
    {
        // Set player as dead and prevent further actions
        isPlayerDead = true;
    }
}
