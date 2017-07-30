using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RestController : MonoBehaviour {
	PlayerController playerscript;
	public float restrate;
	// Use this for initialization
	void Start () {
		playerscript = GameObject.FindGameObjectWithTag ("Player").GetComponent<PlayerController>();
	}
	
	// Update is called once per frame
	void Update () {
		//print (playerscript.restrate);
	}
	void OnTriggerStay2D(Collider2D other){
		if (other.tag == "Player") {
			playerscript.restrate = restrate;
		}
	}
}
