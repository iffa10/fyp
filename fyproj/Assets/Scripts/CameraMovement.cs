using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMovement : MonoBehaviour
{
    // Reference to player's Transform to follow
    public Transform player;

    // Smooth camera movement
    void FixedUpdate()
    {
        // Follow player but limit y position to 0
        float yPos = player.position.y > 0 ? player.position.y : 0;
        // Update camera position
        transform.position = new Vector3(player.position.x, yPos, 0);
    }
}
