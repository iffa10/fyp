using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class laddermovement : MonoBehaviour
{
    private float verticalInput;
    public float climbSpeed = 6f;
    private bool nearLadder;
    public bool playerClimbing { get; private set; }

    [SerializeField] private Rigidbody2D playerRb;

    void Start()
    {
        // Initialize climbing and ladder proximity flags
        playerClimbing = false;
        nearLadder = false;
    }

    void Update()
    {
        // Check if player should start or stop climbing
        if (nearLadder)
        {
            // Get vertical input from player
            verticalInput = Input.GetAxis("Vertical");
            if(Mathf.Abs(verticalInput) > 0f)
                playerClimbing = true;
        }
    }

    void FixedUpdate()
    {
        //Apply climbing movement
        if (playerClimbing)
        {
            // Apply climbing velocity based on vertical input
            playerRb.velocity = new Vector2(playerRb.velocity.x, verticalInput * climbSpeed);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Ladder"))
        {
            // Disable gravity while climbing
            playerRb.gravityScale = 0f;
            nearLadder = true;
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.CompareTag("Ladder"))
        {
            // Restore gravity and stop climbing
            nearLadder = false;
            playerClimbing = false;
            playerRb.gravityScale = 3f; 
        }
    }
}