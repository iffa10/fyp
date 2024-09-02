using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class playermovement : MonoBehaviour
{
    private float movementInputX;
    private float movementInputY;
    private float movementSpeed = 8f;
    private float jumpForce = 14f;
    private bool facingRightDirection = true;
    private bool canMove = false;

    private Rigidbody2D playerRb;
    [SerializeField]
    private LayerMask groundLayer;

    [SerializeField]
    private laddermovement laddermovementScript;

    public int currentLevel = 0;
    public GameObject[] levels;

    public GameObject levelEnd;
    bool levelEnded = false;
    float levelTimer = 2f;

    public GameObject gameEnd;
    bool gameEnded = false;

    public Holder camBG;

    private timer timerScript;
    private Playerattack attackScript;
    private Playerweapons weaponsScript;
    private audiomanage audiomanage;
    [SerializeField] private GameObject ManageWeapons;
    
    private void Awake()
    {
        audiomanage = GameObject.FindGameObjectWithTag("Audio").GetComponent<audiomanage>();
    }

    void Start()
    {
        // Initialize components and start level
        playerRb = GetComponent<Rigidbody2D>();
        timerScript = FindObjectOfType<timer>(); 
        weaponsScript = ManageWeapons.GetComponent<Playerweapons>(); 
        attackScript = ManageWeapons.GetComponent<Playerattack>(); 
        StartLevel(currentLevel);

        // Disable movement
        canMove = false;
    }

    void Update()
    {
        // Enable movement if audio manager exists and game has started
        if (audiomanage != null && audiomanage.gameStarted)
        {
            canMove = true;
        }

        if (canMove)
        {
            // Get raw input values for horizontal and vertical movement
            movementInputX = Input.GetAxisRaw("Horizontal");
            movementInputY = Input.GetAxisRaw("Vertical");

            // Update animation based on whether the player is moving horizontally
            if (movementInputX == 0)
            {
                GetComponent<Animator>().SetBool("isWalking", false);
            }
            else
            {
                GetComponent<Animator>().SetBool("isWalking", true);
            }

            // Handle jumping and vertical movement when not climbing
            if (!laddermovementScript.playerClimbing)
            {
                if (Input.GetButtonDown("Vertical") && IsOnGround())
                {
                    // Apply upward velocity for jump
                    playerRb.velocity = new Vector2(playerRb.velocity.x, jumpForce);

                    // Play the jump sound effect
                    if (audiomanage != null && audiomanage.playerJump != null)
                    {
                        audiomanage.PlaySFX(audiomanage.playerJump);
                    }
                }

                // Reduce upward velocity when vertical input is released
                if (Input.GetButtonUp("Vertical") && playerRb.velocity.y > 0f)
                {
                    playerRb.velocity = new Vector2(playerRb.velocity.x, playerRb.velocity.y * 0.5f);
                }
            }
            else 
            {
                // Handle climbing movement when on ladder
                playerRb.velocity = new Vector2(movementInputX * movementSpeed, movementInputY * laddermovementScript.climbSpeed);
                
                // Play climbing sound
                if (audiomanage != null && audiomanage.playerClimb != null)
                {
                    audiomanage.PlaySFX(audiomanage.playerClimb);
                }
            }

            // Apply horizontal movement and maintain current vertical velocity
            playerRb.velocity = new Vector2(movementInputX * movementSpeed, playerRb.velocity.y);

            FlipPlayerDirection();

            // Handle level transition and timer
            if(levelEnded)
            {
                levelTimer -= Time.deltaTime;
                if(levelTimer < 0)
                {
                    levelEnded = false;
                    levelTimer = 2f;
                    ++currentLevel;

                    // Update levels and reset player position
                    for(int i = 0; i < levels.Length; i++)
                    {
                        if(currentLevel == i)
                        {
                            levels[i].SetActive(true);
                            transform.position = levels[i].transform.GetChild(levels[i].transform.childCount - 1).position;
                        }
                        else
                            levels[i].SetActive(false);
                    }
                    camBG.NextLevel(currentLevel);
                    levelEnd.SetActive(false);

                    // Reset the timer after the level is completed
                    if (timerScript != null)
                    {
                        timerScript.ResetTimer();
                    }

                    // Set the weapon for the new level
                    StartLevel(currentLevel);
                }
            }

            // Exit early if the game has ended
            if (gameEnded)
            {
                return;
            }
        }
    }

    // Check if the player is on the ground
    private bool IsOnGround()
    {
        return Physics2D.OverlapCircle(transform.position - transform.up * 0.5f, 0.2f, groundLayer);
    }

    // Flip the player's direction
    private void FlipPlayerDirection()
    {
        if (facingRightDirection && movementInputX < 0f || !facingRightDirection && movementInputX > 0f)
        {
            facingRightDirection = !facingRightDirection;
            Vector3 localScale = transform.localScale;
            localScale.x *= -1f;
            transform.localScale = localScale;
        }
    }

    // Set up the player's weapon for the specified level
    private void StartLevel(int levelIndex)
    {
        switch (levelIndex)
        {
            case 1: // Level 2
                weaponsScript.SetWeapon(WeaponType.Sword);
                break;
            case 2: // Level 3
                weaponsScript.SetWeapon(WeaponType.sorcerySword);
                break;
            default: // Level 1
                weaponsScript.SetWeapon(WeaponType.None);
                break;
        }
    }

    // Handle collisions with triggers
    void OnTriggerEnter2D(Collider2D collide)
    {
        if (gameEnded) return;

        if (collide.gameObject.CompareTag("Portal"))
        {
            levelEnd.SetActive(true);
            levelEnded = true;
            if (audiomanage != null && audiomanage.levelComplete != null)
            {
                audiomanage.PlaySFX(audiomanage.levelComplete);
            }
        }
        else if (collide.gameObject.CompareTag("Princess"))
        {
            gameEnd.SetActive(true);
            gameEnded = true;
            
            // Stop the timer
            if (timerScript != null)
            {
                timerScript.enabled = false;
            }

            // Stop background music
            if (audiomanage != null && audiomanage.musicSource != null)
            {
                audiomanage.musicSource.Stop();
            }

            // Play game complete sound
            if (audiomanage != null && audiomanage.gameComplete != null)
            {
                audiomanage.PlaySFX(audiomanage.gameComplete);
            }

            if (Score.instance != null)
            {
                Score.instance.UpdateEndGameScores();
            }
        }
    }

    // Check if the game has ended
    public bool IsGameEnded() 
    {
        return gameEnded;
    }
}
