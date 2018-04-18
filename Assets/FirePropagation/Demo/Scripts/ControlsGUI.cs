/* Copyright (c) 2016-2017 Lewis Ward
// Fire Propagation System
// author: Lewis Ward
// date  : 19/04/2017
*/
using UnityEngine;
using System.Collections;
using UnityEngine.UI;

[RequireComponent(typeof(Text))]
public class ControlsGUI : MonoBehaviour {
    public string m_inputAction = "Action";
    public string m_displayText = "Key";
    private Text m_Text;

    // Use this for initialization
    void Start () {
        m_Text = GetComponent<Text>();
    }
	
	// Update is called once per frame
	void Update () {

        //set the text
        m_Text.text = string.Format(m_inputAction + ": " + m_displayText);
        m_Text.color = Color.white;
    }
}
