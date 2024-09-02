using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class movingplatform : MonoBehaviour
{
    public float speed;
    public Vector3 destination;

    private Vector3 positionA, positionB;
    private Vector2 targetPosition;

    
    void Start()
    {
        // Initialize positions and set the target position to positionB
        positionA = transform.position;
        positionB = transform.position + destination;
        targetPosition = positionB;
    }

    void Update()
    {
        // Switch target position when the platform reaches positionA or positionB
        if (Vector2.Distance(transform.position, positionA) < .1f)
        {
            targetPosition = positionB;
        }

        if (Vector2.Distance(transform.position, positionB) < .1f)
        {
            targetPosition = positionA;
        }

        // Move platform towards the target position
        transform.position = Vector2.MoveTowards(transform.position, targetPosition, speed * Time.deltaTime);
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        // Attach player to the platform when they collide
        if (collision.gameObject.CompareTag("Player"))
        {
            collision.transform.SetParent(this.transform);
        }
    }

    private void OnCollisionExit2D(Collision2D collision)
    {
        // Detach player from the platform when they stop colliding
        if (collision.gameObject.CompareTag("Player"))
        {
            collision.transform.SetParent(null);
        }
    }
}
