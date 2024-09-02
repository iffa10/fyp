using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class audiomanage : MonoBehaviour
{
    // References
    [SerializeField] public AudioSource musicSource; 
    [SerializeField] AudioSource SFXSource;          

    // AudioClip variables for different sounds
    public AudioClip background;       
    public AudioClip playerJump;       
    public AudioClip playerClimb;     
    public AudioClip playerCollect;    
    public AudioClip playerDeflect;   
    public AudioClip playerShoot;      
    public AudioClip playerDamage;    
    public AudioClip playerDie;       
    public AudioClip enemyShoot;       
    public AudioClip enemyDamage;     
    public AudioClip enemyDie;         
    public AudioClip levelComplete;    
    public AudioClip gameComplete; 

    // Boolean to track whether game has started
    public bool gameStarted = false;

    void Update()
    {
        // Play background music if game started and music is not playing
        if (gameStarted && !musicSource.isPlaying)
        {
            musicSource.clip = background; 
            musicSource.loop = true;       
            musicSource.Play();          
        }
    }

    // Starts the game
    public void StartGame()
    {
        gameStarted = true; 
    }

    // Plays a specific sound effect
    public void PlaySFX(AudioClip clip)
    {
        SFXSource.PlayOneShot(clip); 
    }

    // Stops all sound effects
    public void StopSFX()
    {
        SFXSource.Stop(); 
    }
}
