using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class PRScript : MonoBehaviour {

	public static bool IsPaused = false;
	public GameObject PauseMenuUI;
	public GameObject ResumeMenuUI;
<<<<<<< HEAD
	public GameObject FPPMenuUI;
	public GameObject TPPMenuUI;
	public GameObject FPPCamera;
	public GameObject TPPCamera;
	public GameObject PlayerAvatar;
	public GameObject PlayerMenuUI;
=======
	public GameObject SGMenuUI;
>>>>>>> 207ad6f5145d6df9c59e8f4ab687efc6e272c0be

	// Use this for initialization
	void Start () {
		AudioListener.volume = 0.3F;
		Time.timeScale = 0f;
		//PauseMenuUI.SetActive (true);
	}

	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown (KeyCode.Escape)) {
			//if (Input.GetButtonDown ("PauseButton")) {
			if (IsPaused) {
				Resume();
			} else {
				Pause();
			}
		}
	}

	public void Resume () {
		PauseMenuUI.SetActive (true);
		ResumeMenuUI.SetActive (false);
		AudioListener.volume = 1F;
		Time.timeScale = 1f;
		IsPaused = false;
	}

	public void Pause () {
		PauseMenuUI.SetActive (false);
		ResumeMenuUI.SetActive (true);
		AudioListener.volume = 0.2F;
		Time.timeScale = 0;
		IsPaused = true;
	}

<<<<<<< HEAD
	/*public void StartGame () {
=======
	public void StartGame () {
>>>>>>> 207ad6f5145d6df9c59e8f4ab687efc6e272c0be
		Time.timeScale = 1f;
		AudioListener.volume = 1F;
		PauseMenuUI.SetActive (true);
		SGMenuUI.SetActive (false);
		IsPaused = false;
<<<<<<< HEAD
	}*/
=======
	}
>>>>>>> 207ad6f5145d6df9c59e8f4ab687efc6e272c0be

	public void LoadMenu () {
		Debug.Log ("loading menu...");
	}

	public void QuitGame () {
		Debug.Log ("quit game...");
	}
<<<<<<< HEAD

	public void TPP () {
		Time.timeScale = 1f;
		AudioListener.volume = 1F;
		PauseMenuUI.SetActive (true);

		TPPMenuUI.SetActive (false);
		FPPMenuUI.SetActive (false);

		TPPCamera.SetActive (true);
		FPPCamera.SetActive (false);

		PlayerAvatar.SetActive (true);

		PlayerMenuUI.GetComponent<FPPMovement> ().enabled = false;
		PlayerMenuUI.GetComponent<PlayerMovement> ().enabled = true;

		IsPaused = false;
	}

	public void FPP () {
		Time.timeScale = 1f;
		AudioListener.volume = 1F;
		PauseMenuUI.SetActive (true);

		TPPMenuUI.SetActive (false);
		FPPMenuUI.SetActive (false);

		TPPCamera.SetActive (false);
		FPPCamera.SetActive (true);

		PlayerAvatar.SetActive (false);

		PlayerMenuUI.GetComponent<FPPMovement> ().enabled = true;
		PlayerMenuUI.GetComponent<PlayerMovement> ().enabled = false;

		IsPaused = false;
	}
=======
>>>>>>> 207ad6f5145d6df9c59e8f4ab687efc6e272c0be
}
