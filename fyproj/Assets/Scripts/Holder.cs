using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Holder : MonoBehaviour
{
    // Arrays of background sprites
    public Sprite[] bgSprites;
    public SpriteRenderer bg;

    // Update background sprite based on level
    public void NextLevel(int level)
    {
        if (bgSprites.Length > level && bgSprites[level] != null)
        {
            bg.sprite = bgSprites[level];
        }
        else
        {
            bg.sprite = null;
        }
    }
}