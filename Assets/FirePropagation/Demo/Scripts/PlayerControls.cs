/* Copyright (c) 2016-2017 Lewis Ward
// Fire Propagation System
// author: Lewis Ward
// date  : 23/03/2017
*/
using UnityEngine;
using System.Collections;

public class PlayerControls : MonoBehaviour {
    [Tooltip("The Hit Points of the cell, the higher the HP to slower the cell is to heat up and ignite.")]
    public GameObject m_fireIgniter;
    private GameObject m_equipedIgniter;
    private Rigidbody m_rigidBody;
    private FireIgniter m_igniter;
    private Camera m_camera;
    [Tooltip("Higher the value the faster the player moves.")]
    public float m_movementSpeed = 5.0f;
    [Tooltip("Higher the value the faster the player rotates.")]
    public float m_rotationSpeed = 2.0f;
    [Tooltip("The height the camera will be above the ground.")]
    public float m_cameraHeightOffset = 2.0f;
    [Tooltip("How many seconds until the next FireIgniter is spawned.")]
    public float m_respawnDelay = 5.0f;
    private float m_timer;

    // Use this for initialization
    void Start () {
        // get the main camera
        m_camera = Camera.main;

        updateCameraTransform();
        createNewIgniter();

        // starts at the same time as the delay, resets when it reaches or is less then zero
        m_timer = m_respawnDelay;
    }
	
	// Update is called once per frame
	void Update () {

        // user has requested to qui the application
        if (Input.GetKey("escape"))
            Application.Quit();

        // get input
        float movement = Input.GetAxis("Vertical") * m_movementSpeed;
        float sideMovement = Input.GetAxis("Horizontal") * m_movementSpeed;
        float mouseX = Input.GetAxis("Mouse X") * m_rotationSpeed;
        float mouseY = Input.GetAxis("Mouse Y") * m_rotationSpeed;

        movement *= Time.deltaTime;
        sideMovement *= Time.deltaTime;

        transform.Translate(sideMovement, 0, movement);
        transform.Rotate(-mouseY, mouseX, 0);

        // lock the Z axis 
        transform.rotation = Quaternion.Euler(transform.rotation.eulerAngles.x, transform.rotation.eulerAngles.y, 0);

        // some time from the timer has been lost, i.e. Fire1 key pressed, continue taking time off of it
        if(m_timer < m_respawnDelay)
            m_timer -= Time.deltaTime;

        // drop a torch
        if (m_timer == m_respawnDelay)
        {
            if (Input.GetButtonDown("Fire1"))
            {
                if (m_fireIgniter != null)
                {
                    // turn back on
                    if (m_rigidBody != null)
                    {
                        m_rigidBody.useGravity = true;
                        m_rigidBody.detectCollisions = true;
                    }

                    if (m_igniter != null)
                        m_igniter.enabled = true;

                    // remove some time from the timer                
                    m_timer -= Time.deltaTime;
                }
            }
        }

        // respawns the igniter for the player after m_respawnDelay seconds  
        if (m_timer <= 0.0f)
        {
            m_timer = m_respawnDelay;
            createNewIgniter();
        }

        updateCameraTransform();
    }

    // update the main cameras' position and rotation
    void updateCameraTransform()
    {
        Vector3 position = transform.position;
        position.y = Terrain.activeTerrain.SampleHeight(transform.position) + m_cameraHeightOffset;
        m_camera.transform.position = position;
        m_camera.transform.rotation = transform.rotation;
        transform.position = position;
    }

    // create a new igniter
    void createNewIgniter()
    {
        // get the players position
        Quaternion cameraRotation = m_camera.transform.rotation;
        Vector3 position = new Vector3(transform.position.x, transform.position.y, transform.position.z);
        position.y -= 0.75f;

        // offset the igniter 
        Vector3 localPosition = new Vector3(0.35f, 0.0f, 1.5f);
        localPosition = cameraRotation * localPosition; // rotate around the played based on their rotation
        localPosition += position;

        // create new GameObject
        m_equipedIgniter = (GameObject)Instantiate(m_fireIgniter, localPosition, cameraRotation, transform);
        m_equipedIgniter.transform.Rotate(Vector3.up * 15.0f);
        m_equipedIgniter.transform.Rotate(Vector3.right * 24.0f);

        // get Rigidbody and turn off gravity
        m_rigidBody = m_equipedIgniter.GetComponent<Rigidbody>();

        if (m_rigidBody != null)
        {
            m_rigidBody.useGravity = false;
            m_rigidBody.detectCollisions = false;
        }
        else
            Debug.LogWarning("No Rigidbody found as a component on fireIgniter, you sure you don't need one?");

        // get FireIgniter and disable
        m_igniter = m_equipedIgniter.GetComponent<FireIgniter>();

        if (m_igniter != null)
            m_igniter.enabled = false;
        else
            Debug.LogWarning("No FireIgniter found as a component on GameObject used to start the fire.");
    }

    // wait for a number of seconds then create a new igniter
    IEnumerator respawnIgniter()
    {
        yield return new WaitForSeconds(m_respawnDelay);
        createNewIgniter();
    }
}
