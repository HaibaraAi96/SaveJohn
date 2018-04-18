using UnityEngine;

public class FPPMovement : MonoBehaviour
{
	public float speed = 6f;            // The speed that the player will move at.
	public VirtualJoystick moveJoystick;
	public VirtualJoystick turnJoystick;
	public GameObject player;
	public Transform camTransform;
	//private var finalpos;

	Vector3 movement;                   // The vector to store the direction of the player's movement.
	Animator anim;                      // Reference to the animator component.
	Rigidbody playerRigidbody;          // Reference to the player's rigidbody.
	int floorMask;                      // A layer mask so that a ray can be cast just at gameobjects on the floor layer.
	float camRayLength = 100f;          // The length of the ray from the camera into the scene.
	//GameObject player;
	Quaternion fpos;


	void Awake ()
	{
		// Create a layer mask for the floor layer.
		floorMask = LayerMask.GetMask ("Floor");
		player = GameObject.FindGameObjectWithTag ("Player");

		// Set up references.
		anim = GetComponent <Animator> ();
		playerRigidbody = GetComponent <Rigidbody> ();
	}


	void FixedUpdate ()
	{
		Vector3 dir = Vector3.zero;

		dir.x = Input.GetAxis ("Horizontal");
		dir.z = Input.GetAxis ("Vertical");

		if (dir.magnitude > 1)
			dir.Normalize ();

		if (moveJoystick.InputDirection != Vector3.zero) {
			dir = moveJoystick.InputDirection;
		}

		// Store the input axes.
		/*float h = Input.GetAxisRaw ("Horizontal");
		float v = Input.GetAxisRaw ("Vertical");*/

		// Move the player around the scene.
		//Move (h, v);
		Move(dir.x,dir.z);

		//Debug.Log (turnJoystick.IsDown);
		if (turnJoystick.IsDown) {
			newTurning ();
		} else {
			fpos = transform.rotation;
			Debug.Log (fpos);
		}

		// Turn the player to face the mouse cursor.
		//Turning ();

		// Animate the player.
		Animating (dir.x, dir.z);
	}

	void Move (float h, float v)
	{
		// Set the movement vector based on the axis input.
		movement = (transform.right * h) + (transform.forward * v);
		movement.y = 0;

		// Normalise the movement vector and make it proportional to the speed per second.
		movement = movement.normalized * speed * Time.deltaTime;
		newTurning();
		// Move the player to it's current position plus the movement.
		playerRigidbody.MovePosition (transform.position + movement);
	}

	void newTurning ()
	{
		Vector3 dir = Vector3.zero;
		Vector3 inputv = Vector3.zero;

		if (dir.magnitude > 1)
			dir.Normalize ();

		if (turnJoystick.InputDirection != Vector3.zero) {
			dir = turnJoystick.InputDirection;
			dir.Normalize ();
			Quaternion newRotation = Quaternion.LookRotation (dir);
			playerRigidbody.MoveRotation (newRotation * fpos);
		}
	}

	void Turning ()
	{
		// Create a ray from the mouse cursor on screen in the direction of the camera.
		Ray camRay = Camera.main.ScreenPointToRay (Input.mousePosition);

		// Create a RaycastHit variable to store information about what was hit by the ray.
		RaycastHit floorHit;

		// Perform the raycast and if it hits something on the floor layer...
		if(Physics.Raycast (camRay, out floorHit, camRayLength, floorMask))
		{
			// Create a vector from the player to the point on the floor the raycast from the mouse hit.
			Vector3 playerToMouse = floorHit.point - transform.position;

			// Ensure the vector is entirely along the floor plane.
			playerToMouse.y = 0f;

			// Create a quaternion (rotation) based on looking down the vector from the player to the mouse.
			Quaternion newRotation = Quaternion.LookRotation (playerToMouse);

			// Set the player's rotation to this new rotation.
			playerRigidbody.MoveRotation (newRotation);
		}
	}

	void Animating (float h, float v)
	{
		// Create a boolean that is true if either of the input axes is non-zero.
		bool walking = h != 0f || v != 0f;

		// Tell the animator whether or not the player is walking.
		anim.SetBool ("IsWalking", walking);
	}
}
