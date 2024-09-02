using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    // References
    GameObject player;
    public GameObject pointA;
    public GameObject pointB;
    private Rigidbody2D enemyRb;
    private Animator animator;
    private Transform pointNow;
    public float speed;
    public EnemyHealth enemyHealth;
    public Score score;

    // Shooting variables
    float castTime = 1f;
    bool fire = false;
    public GameObject bulletPrefab;
    GameObject bullet;
    float fireRate = 3f;
    public Color bulletColor = Color.white;
    public float bulletSpeed = 3;

    private audiomanage audiomanage;

    void Start()
    {
        // Initialize components
        player = GameObject.Find("Player");
        enemyRb = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        audiomanage = GameObject.FindGameObjectWithTag("Audio").GetComponent<audiomanage>();
        
        if(pointB)
            pointNow = pointB.transform;
    }

    void Update()
    {
         // Exit if game over
        if (playermanage.isGameOver) 
        {
            return;
        }

        // Check if player is within shooting range
        if(Vector3.Distance(player.transform.position, transform.position) < 6f)
        {
            // Face the player
            transform.localScale = player.transform.position.x > transform.position.x ? new Vector3(1, 1, 1) : new Vector3(-1, 1, 1);

            // Prepare to fire
            if(!fire && fireRate < 0)
            {
                fireRate = 3f;
                fire = true;
            }
        }
        else if(pointA != null)
        {
            // Patrol and flip direction if needed
            if (transform.localScale.x < 0 && pointNow == pointA.transform || 
                transform.localScale.x > 0 && pointNow == pointB.transform)
            {
                ChangeDirection();
            }
        }
        
        // Handle firing
        if(fire)
        {
            if(castTime > 0.999f)
            {
                // Create and set up the bullet
                bullet = Instantiate(bulletPrefab, transform.position + new Vector3(0.6f * transform.localScale.x, 0.2f, 0), Quaternion.identity, transform);
                bullet.SetActive(true);
                bullet.GetComponent<SpriteRenderer>().color = bulletColor;

                // Play shooting sound
                if (audiomanage != null && audiomanage.enemyShoot != null)
                {
                    audiomanage.PlaySFX(audiomanage.enemyShoot);
                }
            }
                
            // Countdown and finalize bullet
            castTime -= Time.deltaTime;

            if(castTime < 0)
            {
                fire = false;
                castTime = 1f;
                Vector3 diff = player.transform.position - transform.position;
                bullet.GetComponent<Rigidbody2D>().velocity = (diff).normalized * bulletSpeed;
                bullet.GetComponent<Rigidbody2D>().isKinematic = false;
                bullet.GetComponent<Bullet>().direction = (diff).normalized;
                bullet.transform.rotation = Quaternion.Euler(0f, 0f, Mathf.Atan2(diff.y, diff.x) * Mathf.Rad2Deg);
                bullet.transform.SetParent(null);
                Vector3 localScale = bullet.transform.localScale;
                localScale.x = 1;
                bullet.transform.localScale = localScale;
            }
        }
        else
        {
            // Reduce fireRate timer
            fireRate -= Time.deltaTime;
        }

       // Patrol logic
        if (pointB != null)
        {
            Vector2 direction = pointNow.position - transform.position;
            enemyRb.velocity = pointNow == pointB.transform ? new Vector2(-speed, 0) : new Vector2(speed, 0);
            
            if (Vector2.Distance(transform.position, pointNow.position) < 0.5f)
            {
                ChangeDirection();
                pointNow = pointNow == pointB.transform ? pointA.transform : pointB.transform;
            }
        }
    }

    void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Bullet"))
        {
            // Handle bullet collision
            collision.gameObject.GetComponent<CapsuleCollider2D>().enabled = false;

            // Decrease enemy health
            enemyHealth.health--;

            // Play damage sound
            if (audiomanage != null && audiomanage.enemyDamage != null)
            {
                audiomanage.PlaySFX(audiomanage.enemyDamage);
            }

            // Update enemy's health UI
            if (enemyHealth != null)
            {
                enemyHealth.UpdateEnemyHealth();
            }

            // Check for death
            if (enemyHealth.health <= 0)
            {
                // Handle enemy death
                gameObject.GetComponent<Animator>().SetBool("isDead", true);
                gameObject.GetComponent<Enemy>().enabled = false;

                if (audiomanage != null && audiomanage.enemyDie != null)
                {
                    audiomanage.PlaySFX(audiomanage.enemyDie);
                }
                
                if (score != null)
                {
                    score.AddScore(600);
                }

                foreach (Transform child in transform)
                    child.gameObject.SetActive(false);

                Destroy(gameObject, 2f);
            }
        }
    }

    private void ChangeDirection()
    {
        // Flip enemy direction
        Vector3 localScale = transform.localScale;
        localScale.x *= -1;
        transform.localScale = localScale;
    }
}
