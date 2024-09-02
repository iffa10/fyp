using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Playercollision : MonoBehaviour
{
    private timer timerScript;
    private playermovement movement;
    private Playerhealth healthScript;
    private audiomanage audiomanage;

    private void Awake()
    {
        // Initialize audiomanage reference
        audiomanage = GameObject.FindGameObjectWithTag("Audio").GetComponent<audiomanage>();
    }

    void Start()
    {
        // Initialize referenced to other scripts
        timerScript = FindObjectOfType<timer>();
        movement = GetComponent<playermovement>();
        healthScript = FindObjectOfType<Playerhealth>();
    }

    void OnCollisionEnter2D(Collision2D collision)
    {
        // Handle collisions with spikes or bullets
        if(collision.gameObject.CompareTag("Spikes") || collision.gameObject.CompareTag("Bullet"))
        {
            // Decrease player health
            healthScript.health--;

            //Play damage sound
            if (audiomanage != null && audiomanage.playerDamage != null)
            {
                audiomanage.PlaySFX(audiomanage.playerDamage);
            }

            // Update health UI
            if (healthScript != null)
            {
                healthScript.UpdateHeartsUI();
            }

            // Check if player health is zero or less
            if (healthScript.health <= 0)
            {
                // Trigger death animation, end game, and disable player movement
                gameObject.GetComponent<Animator>().SetBool("isDead", true);
                playermanage.isGameOver = true;
                gameObject.GetComponent<playermovement>().enabled = false;

                // Stop background music and play death sound
                if (audiomanage != null)
                {
                    audiomanage.musicSource.Stop(); 
                    if (audiomanage.playerDie != null)
                    {
                        audiomanage.PlaySFX(audiomanage.playerDie);
                    }
                }

                // Display game over scores
                if (Score.instance != null)
                {
                    Score.instance.GameOverScoreText.text = "YOUR SCORE: " + Score.instance.ScoreNumber.ToString();
                    Score.instance.GameOverHighScoreText.text = "HIGH SCORE: " + PlayerPrefs.GetInt("highscore", 0).ToString();
                }

                // Notify player attack script about player death
                Playerattack playerAttack = gameObject.GetComponent<Playerattack>();
                if (playerAttack != null)
                {
                    playerAttack.SetPlayerDead();
                }
            }
            else
            {
                // Play damage sound and start respawn coroutine
                if (audiomanage != null && audiomanage.playerDamage != null)
                {
                    audiomanage.PlaySFX(audiomanage.playerDamage);
                }
                StartCoroutine(DamageAndRespawn());
            }
        }
    }

    // Coroutine to handle damage effects and respawn the player
    IEnumerator DamageAndRespawn()
    {
        Physics2D.IgnoreLayerCollision(11, 12);
        yield return new WaitForSeconds(2);
        timerScript.ResetTimer();
        transform.position = movement.levels[movement.currentLevel].transform.GetChild(movement.levels[movement.currentLevel].transform.childCount - 1).position;
        Physics2D.IgnoreLayerCollision(11, 12, false);
    }
}
