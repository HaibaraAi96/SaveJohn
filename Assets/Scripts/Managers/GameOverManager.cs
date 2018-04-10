using UnityEngine;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class GameOverManager : MonoBehaviour
{
	public PlayerHealth playerHealth;       // Reference to the player's health.
	public float restartDelay = 5f;         // Time to wait before restarting the level
	public float initialAnimationPlayTime = 9f;
	public float nextLevelDelay = 5f;
	public int missionClearScore = 50;
	public int MAX_LEVEL = 1;
	//	ScoreManager scoreManage;

	Animator anim;                          // Reference to the animator component.
	float restartTimer;                     // Timer to count up to restarting the level
	float nextLevelTimer;
	float storyTimer;


	void Awake ()
	{
		// Set up the reference.
		anim = GetComponent <Animator> ();

	
	}


	void Update ()
	{
		if (Application.loadedLevel < MAX_LEVEL) {
			storyTimer += Time.unscaledDeltaTime;
			if(storyTimer < initialAnimationPlayTime){
				Time.timeScale = 0;
			}
			else if(storyTimer >= initialAnimationPlayTime){
				Time.timeScale = 1;
			}
			//Debug.Log ("asdasdsada"+Time.timeScale);
		}

		// If the player has run out of health...
		if(playerHealth.currentHealth <= 0)
		{
			// ... tell the animator the game is over.
			anim.SetTrigger ("GameOver");

			// .. increment a timer to count up to restarting.
			restartTimer += Time.deltaTime;

			// .. if it reaches the restart delay...
			if(restartTimer >= restartDelay)
			{
				// .. then reload the currently loaded level.
				Application.LoadLevel(Application.loadedLevel);
			}
		}
		//		Debug.Log ("app" + Application.loadedLevel);

		if (ScoreManager.score >= missionClearScore) {
			//			pauseEnabled = true;
			//anim.SetTrigger ("MissionClear");
			if(Application.loadedLevel < MAX_LEVEL){
				anim.SetTrigger("MissionClear");
			}
			else{
				anim.SetTrigger("GameFinish");
			}
			Debug.Log (Application.loadedLevel);
			//			Application.loade
			//			if (Application.loadedLevel == 1) {
			//				Time.timeScale = 0;
			//			}
			//			Debug.Log ("aaaa" + Application.loadedLevel);
			Invoke ("LevelSwitchPause", 1f);
			//			nextLevelTimer += Time.deltaTime;
			//			if(nextLevelTimer >= nextLevelDelay)
			//			{
			//				Application.LoadLevel(3);
			//			}

			//Debug.Log ("bb");



		}
	}

	public void LevelSwitchPause() {
		//Debug.Log ("pause");
		nextLevelTimer += Time.deltaTime;
		Time.timeScale = 1;
		if (nextLevelTimer >= nextLevelDelay && Application.loadedLevel < MAX_LEVEL) {
			Application.LoadLevel ("lv2");
		} 
		else if(Application.loadedLevel == MAX_LEVEL) {
			Time.timeScale = 0;
		}
	}

	private IEnumerator FadeAndSwitchScenes (string sceneName)
	{
		yield return SceneManager.UnloadSceneAsync (SceneManager.GetActiveScene ().buildIndex);
		yield return StartCoroutine (LoadSceneAndSetActive ("lv2"));
	}
	private IEnumerator LoadSceneAndSetActive (string sceneName)
	{
		yield return SceneManager.LoadSceneAsync (sceneName, LoadSceneMode.Additive);
		Scene newlyLoadedScene = SceneManager.GetSceneAt (SceneManager.sceneCount - 1);
		SceneManager.SetActiveScene (newlyLoadedScene);
	}
}
