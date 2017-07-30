using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class dimlightscript : MonoBehaviour {
	public float lightIntensity;
	// Use this for initialization
	void Start () {
		lightIntensity = GetComponent<Light> ().intensity;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
