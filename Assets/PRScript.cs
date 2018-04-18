using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class PRScript : MonoBehaviour {

	public static bool IsPaused = false;
	public GameObject PauseMenuUI;
	public GameObject ResumeMenuUI;
	public GameObject SGMenuUI;

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

	public void StartGame () {
		Time.timeScale = 1f;
		AudioListener.volume = 1F;
		PauseMenuUI.SetActive (true);
		SGMenuUI.SetActive (false);
		IsPaused = false;
	}

	public void LoadMenu () {
		Debug.Log ("loading menu...");
	}

	public void QuitGame () {
		Debug.Log ("quit game...");
	}
}
