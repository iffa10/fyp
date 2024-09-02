using UnityEngine.SceneManagement;
using UnityEngine;

public class playermanage : MonoBehaviour
{
    public static bool isGameOver;
    public GameObject GameOverPanel;
    public GameObject GameStartPanel;
    public Playerhealth player;
    public timer timer;
    public Score score;

    private void Awake()
    {
        isGameOver = false;
    }

    // Display the game over panel if the game is over
    void Update()
    {
        if (isGameOver && GameOverPanel != null)
        {
            GameOverPanel.SetActive(true);
        }

        else if (isGameOver && GameStartPanel != null)
        {
            GameStartPanel.SetActive(false);
        }
    }

    // Hide the start panel, reset timer, and show scores
    public void StartGame()
    {
        if (GameStartPanel != null)
        {
            GameStartPanel.SetActive(false);
        }

        if (timer != null)
        {
            timer.gameObject.SetActive(true);
            timer.ResetTimer(); // Reset the timer
        }

        if (score != null)
        {
            score.CurrentScoreText.gameObject.SetActive(true); 
            score.HighScoreText.gameObject.SetActive(true); 
        }

        // Reset game and start audio if manager exists
        isGameOver = false;
        audiomanage instance = FindObjectOfType<audiomanage>();
        if (instance != null)
        {
            instance.StartGame();
        }
    }

    public void RestartLevel()
    {
        // Reset the player's health to full before restarting the level
        player.health = 3;
        
        // Reload the current scene
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}