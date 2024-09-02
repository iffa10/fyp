using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelfDestroy : StateMachineBehaviour
{
    // Called entering a state
    public override void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) 
    {
        // Destroys the game object after the animation state duration
        Destroy(animator.gameObject, stateInfo.length);
    }
}
