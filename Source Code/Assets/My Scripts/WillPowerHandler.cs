using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WillPowerHandler : MonoBehaviour {
	private Text willpowtext;
	private PlayerController playcont;
	// Use this for initialization
	void Start () {
		willpowtext = GetComponent<Text> ();
		playcont = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerController>();
	}
	
	// Update is called once per frame
	void Update () {
		willpowtext.text = "WillPower: " + Mathf.Round(playcont.willpower);
	}
}
