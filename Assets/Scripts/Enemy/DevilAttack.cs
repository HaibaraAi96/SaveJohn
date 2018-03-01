using UnityEngine;
using System.Collections;

public class DevilAttack : MonoBehaviour
{
	public float timeBetweenAttacks = 2.0f;
	public int attackDamage = 10;
	public float waitAttack = 0.3f;
	public bool isAttacking;

	Animator anim;
	GameObject player;
	PlayerHealth playerHealth;
	DevilHealth devilHealth;
	bool playerInRange;
	float timer;



	void Awake ()
	{
		player = GameObject.FindGameObjectWithTag ("Player");
		playerHealth = player.GetComponent <PlayerHealth> ();
		devilHealth = GetComponent<DevilHealth>();
		anim = GetComponent <Animator> ();
	}


	void OnTriggerEnter (Collider other)
	{
		if(other.gameObject == player)
		{
			playerInRange = true;
		}
	}


	void OnTriggerExit (Collider other)
	{
		if(other.gameObject == player)
		{
			playerInRange = false;
		}
	}


	void Update ()
	{
		timer += Time.deltaTime;
		anim.SetBool ("IsAttacking", isAttacking);

		if (timer >= waitAttack) {
			isAttacking = false;
		}

		if(timer >= timeBetweenAttacks && playerInRange && devilHealth.currentHealth > 0)
		{
			Attack ();
		}

		if(playerHealth.currentHealth <= 0)
		{
			anim.SetTrigger ("PlayerDead");
		}
	}


	void Attack ()
	{
		timer = 0f;

		if(playerHealth.currentHealth > 0)
		{
			isAttacking = true;
			playerHealth.TakeDamage (attackDamage);
//			Invoke ("SetAttackFlag", waitAttack);
		}
	}

	void SetAttackFlag () {
		isAttacking = false;
	}
}
