using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class timer : MonoBehaviour
{
    public TextMeshProUGUI timerDisplay;

    [SerializeField] 
    private float timeLeft = 120f;

    private void Start()
    {
        // Initially hide timer display
        if (timerDisplay != null)
            timerDisplay.gameObject.SetActive(false);
    }

    private void Update()
    {
        // Stop timer if game is over
        if (playermanage.isGameOver)
        {
            return;
        }

        // Update timer if the display is active
        if (timerDisplay.gameObject.activeSelf)
        {
            if (timeLeft > 0)
            {
                timeLeft -= Time.deltaTime;
                UpdateTimerDisplay();
            }
            else
            {
                timeLeft = 0;
                UpdateTimerDisplay();
            }
        }
    }

    // Reset timer and show display
    public void ResetTimer()
    {
        timeLeft = 120f; 
        UpdateTimerDisplay();

        if (timerDisplay != null)
            timerDisplay.gameObject.SetActive(true);
    }

    // Format and update timer display text
    private void UpdateTimerDisplay()
    {
        if (timerDisplay != null)
        {
            // Calculate minutes and seconds from the time left
            int mins = Mathf.FloorToInt(timeLeft / 60);
            int secs = Mathf.FloorToInt(timeLeft % 60);

            // Format the time as MM:SS and set the text on the timer display
            timerDisplay.text = string.Format("{0:00}:{1:00}", mins, secs);
        }
    }
}
