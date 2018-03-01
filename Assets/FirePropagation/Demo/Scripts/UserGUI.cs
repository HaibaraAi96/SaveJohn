/* Copyright (c) 2016-2017 Lewis Ward
// Fire Propagation System
// author: Lewis Ward
// date  : 19/04/2017
*/
using UnityEngine;
using System.Collections;
using UnityEngine.UI;

[RequireComponent(typeof(Text))]
public class UserGUI : MonoBehaviour {
    [Tooltip("GameObject to display transform rotation information.")]
    public GameObject m_gameObject = null;
    [Tooltip("Text to print along with rotation information.")]
    public string m_display = "Text";
    private const string m_displayText = "{0} ";
    [Tooltip("Update the text every frame or only at the start?")]
    public bool m_updateText = false;
    private Quaternion m_rotation;
    private Text m_Text; // text GameObject

    // Use this for initialization
    private void Start()
    {
        m_Text = GetComponent<Text>();

        if (m_gameObject != null)
        {
            WindZone windzone = m_gameObject.GetComponent<WindZone>();

            if (windzone != null)
                m_rotation = windzone.transform.rotation;
        }
    }
	
	// Update is called once per frame
	private void Update () {

        // update rotation
        if(m_updateText == true)
        {
            Transform trs = m_gameObject.GetComponent<Transform>();
            if (trs != null)
                m_rotation = trs.rotation;
        }

        // convert into a vector
        Vector3 direction = new Vector3(0.0f, 0.0f, 1.0f);
        Vector3 vectorDirection = m_rotation * direction;

        //set the text
        m_Text.text = string.Format(m_displayText + m_display, vectorDirection.normalized);
        m_Text.color = Color.white;
    }
}
