using UnityEngine;

public class DevilHealth : MonoBehaviour
{
	public int startingHealth = 100;
	public int currentHealth;
	public float sinkSpeed = 2.5f;
	public int scoreValue = 10;
	public bool isTakingDamage;
	public AudioClip deathClip;
	public float timeWaitDamage = 0.3f;


	Animator anim;
	AudioSource enemyAudio;
	ParticleSystem hitParticles;
	CapsuleCollider capsuleCollider;
	bool isDead;
	bool isSinking;
	float timer;


	void Awake ()
	{
		anim = GetComponent <Animator> ();
		enemyAudio = GetComponent <AudioSource> ();
		hitParticles = GetComponentInChildren <ParticleSystem> ();
		capsuleCollider = GetComponent <CapsuleCollider> ();

		isTakingDamage = false;
		currentHealth = startingHealth;
	}


	void Update ()
	{
//		Debug.Log ("isSinkng");
		timer += Time.deltaTime;
		anim.SetBool("TakeDamage", isTakingDamage);

		if (timer >= timeWaitDamage) {
			isTakingDamage = false;
		}

		if(isSinking)
		{
//			Debug.Log ("start");
			transform.Translate (-Vector3.up * sinkSpeed * Time.deltaTime);
		}
	}


	public void TakeDamage (int amount, Vector3 hitPoint)
	{
		if(isDead)
			return;
//		Debug.Log ("Taking Damage");
		timer = 0;
		enemyAudio.Play ();
		isTakingDamage = true;
//		Debug.Log(isTakingDamage);
		currentHealth -= amount;

		hitParticles.transform.position = hitPoint;
		hitParticles.Play();
		Debug.Log(currentHealth);
		if(currentHealth <= 0)
		{
//			Debug.Log("die");
			Death ();
		}
//		isTakingDamage = false;
//		Invoke("setTakingDamageFlag", timeWaitDamage);
	}

//	void setTakingDamageFlag () {
//		isTakingDamage = false;
//	}

	void Death ()
	{
		isDead = true;

		capsuleCollider.isTrigger = true;

		anim.SetTrigger ("Dead");

		enemyAudio.clip = deathClip;
		enemyAudio.Play ();
	}


	public void StartSinking ()
	{
		GetComponent <UnityEngine.AI.NavMeshAgent> ().enabled = false;
		GetComponent <Rigidbody> ().isKinematic = true;
		isSinking = true;
		ScoreManager.score += scoreValue;
		Destroy (gameObject, 2f);
	}
}
