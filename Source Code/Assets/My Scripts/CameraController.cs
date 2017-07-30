using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

	GameObject playcont;
	float zpos;
	// Use this for initialization
	void Start () {
		playcont = GameObject.FindGameObjectWithTag ("Player");
		zpos = transform.position.z;
	}
	
	// Update is called once per frame
	void Update () {
		Vector3 newpos = playcont.transform.position;
		newpos.z = zpos;
		transform.position = newpos;
	}
}
