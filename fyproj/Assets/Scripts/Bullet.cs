using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    // Direction of the bullet's movement
    public Vector3 direction;

    // Handles collision: triggers animation and disables the collider
    void OnCollisionEnter2D(Collision2D collider)
    {
        GetComponent<Animator>().SetBool("hit", true);
        Destroy(GetComponent<CapsuleCollider2D>());
    }
}
