using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HallucinationController : MonoBehaviour {
	PlayerController playcont;
	// Use this for initialization
	void Start () {
		playcont = GameObject.FindGameObjectWithTag ("Player").GetComponent<PlayerController> ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerStay2D(Collider2D other){
		if (other.tag == "Player") {
			playcont.hallucinating = true;
		}
	}
}
