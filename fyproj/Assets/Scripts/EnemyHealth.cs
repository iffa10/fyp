using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EnemyHealth : MonoBehaviour
{
    // Current enemy health
    public int health = 3;

    // Array representing health bar UI elements
    public GameObject[] bar;

    // Update health bar UI based on the current health
    public void UpdateEnemyHealth()
    {
        // Loop through each health bar element
        for(int i = 0; i < bar.Length; i++){
            // Enable or disable the health bar element based on the enemy's current health
            if(i >= health)
                bar[i].SetActive(false);
            else
            {
                bar[i].SetActive(true);
            }
        }
    }
}
