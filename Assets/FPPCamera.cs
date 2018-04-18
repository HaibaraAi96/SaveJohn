using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FPPCamera : MonoBehaviour {

	public GameObject player;       //Public variable to store a reference to the player game object


	private Vector3 offset;         //Private variable to store the offset distance between the player and camera
	private Vector3 cOffect;

	// Use this for initialization
	void Start () 
	{
		//Calculate and store the offset value by getting the distance between the player's position and camera's position.
		offset = transform.position - player.transform.position;
		cOffect = new Vector3(0,offset.y,0);
	}

	// LateUpdate is called after Update each frame
	void LateUpdate () 
	{
		// Set the position of the camera's transform to be the same as the player's, but offset by the calculated offset distance.
		transform.position = player.transform.position + cOffect;
		//Debug.Log (player.transform.position);
		transform.eulerAngles = new Vector3(0, player.transform.eulerAngles.y + offset.y,0);
	}
}
