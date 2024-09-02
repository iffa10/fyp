using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Playerhealth : MonoBehaviour
{
    // Define player health and array of heart UI images
    public int health = 3; 
    public Image[] hearts; 

    // Updates the UI to reflect the current health
    public void UpdateHeartsUI()
    {
        for(int i = 0; i < hearts.Length; i++)
        {
            if(i >= health)
            {
                // Make heart semi-transparent if health is low
                hearts[i].color = new Color(hearts[i].color.r, hearts[i].color.g, hearts[i].color.b, 0.25f);
            }
            else
            {
                // Make heart fully opaque if health is high
                hearts[i].color = new Color(hearts[i].color.r, hearts[i].color.g, hearts[i].color.b, 1f);
            }
        }
    }
}
