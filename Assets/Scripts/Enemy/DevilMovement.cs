using UnityEngine;
using System.Collections;

public class DevilMovement : MonoBehaviour
{
	Transform player;
	PlayerHealth playerHealth;
//	EnemyHealth enemyHealth;
	DevilHealth devilHealth;
	DevilAttack devilAttack;
	UnityEngine.AI.NavMeshAgent nav;


	void Awake ()
	{
		player = GameObject.FindGameObjectWithTag ("Player").transform;
		playerHealth = player.GetComponent <PlayerHealth> ();
		devilHealth = GetComponent <DevilHealth> ();
		devilAttack = GetComponent <DevilAttack> ();
		nav = GetComponent <UnityEngine.AI.NavMeshAgent> ();
	}


	void Update ()
	{
//		if (!devilHealth.isTakingDamage && !devilAttack.isAttacking) {
//			nav.Stop ();
//		}
		if(devilHealth.currentHealth > 0 && playerHealth.currentHealth > 0)
		{
//			Debug.Log (devilHealth.isTakingDamage);
//			nav.Resume();
			nav.SetDestination (player.position);
		}
		else
		{
			nav.enabled = false;
		}
	}
}
