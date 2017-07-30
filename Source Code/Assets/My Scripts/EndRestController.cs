using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EndRestController : MonoBehaviour {
	PlayerController playerscript;
	public float restrate;
	public GameObject willpowertext;
	// Use this for initialization
	void Start () {
		playerscript = GameObject.FindGameObjectWithTag ("Player").GetComponent<PlayerController>();
	}

	// Update is called once per frame
	void Update () {
		if (playerscript.willpower < -100) {
			print (playerscript.willpower);
			GetComponent<EndSceneChanger> ().scenechange = true;
		}
	}
	void OnTriggerStay2D(Collider2D other){
		if (other.tag == "Player") {
			playerscript.restrate = restrate;
			willpowertext.SetActive (false);
		}
	}
}
