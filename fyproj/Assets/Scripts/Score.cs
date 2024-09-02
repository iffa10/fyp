using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Score : MonoBehaviour
{
    public static Score instance;

    public TextMeshProUGUI CurrentScoreText;
    public TextMeshProUGUI HighScoreText;

    public TextMeshProUGUI EndGameScoreText;
    public TextMeshProUGUI EndGameHighScoreText;

    public TextMeshProUGUI GameOverScoreText;  
    public TextMeshProUGUI GameOverHighScoreText;

    
    public int ScoreNumber { get; private set; }
    private int HighScoreNumber;
    private audiomanage audiomanage;

    private void Awake() 
    {
        instance = this;
        audiomanage = GameObject.FindGameObjectWithTag("Audio").GetComponent<audiomanage>();
    }

    void Start()
    {
        // Load the high score from PlayerPrefs
        HighScoreNumber = PlayerPrefs.GetInt("highscore", 0);
        
        // Initially hide the score text
        if (CurrentScoreText != null)
            CurrentScoreText.gameObject.SetActive(false);
        if (HighScoreText != null)
            HighScoreText.gameObject.SetActive(false);

        // Set the initial text for score and high score
        CurrentScoreText.text = ScoreNumber.ToString();
        HighScoreText.text = "HIGH SCORE " + HighScoreNumber.ToString();
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        // Update the score based on the item collected
        if (other.tag == "Coins")
        {
            AddScore(200);
            Destroy(other.gameObject);
            PlayCollectSound();
        }
        else if (other.tag == "Crystals")
        {
            AddScore(300);
            Destroy(other.gameObject);
            PlayCollectSound();
        }
        else if (other.tag == "waterOrb")
        {
            AddScore(400);
            Destroy(other.gameObject);
            PlayCollectSound();
        }
    }

    // Method to add score and update the high score if needed
    public void AddScore(int points)
    {
        ScoreNumber += points;
        CurrentScoreText.text = ScoreNumber.ToString();

        // Check and update the high score
        if (ScoreNumber > HighScoreNumber)
        {
            HighScoreNumber = ScoreNumber;
            HighScoreText.text = "HIGH SCORE " + HighScoreNumber.ToString();
            PlayerPrefs.SetInt("highscore", HighScoreNumber);
        }
    }

    // Plays the sound effect for collecting items
    private void PlayCollectSound()
    {
        if (audiomanage != null && audiomanage.playerCollect != null)
        {
            audiomanage.PlaySFX(audiomanage.playerCollect);
        }
    }

    // Updates the end game score and high score displays
    public void UpdateEndGameScores()
    {
        if (EndGameScoreText != null)
        {
            EndGameScoreText.text = "YOUR SCORE: " + ScoreNumber.ToString();
        }

        if (EndGameHighScoreText != null)
        {
            EndGameHighScoreText.text = "HIGH SCORE: " + HighScoreNumber.ToString();
        }
    }
}
