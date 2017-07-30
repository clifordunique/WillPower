using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class flickerlightscript : MonoBehaviour {
	public bool flickering;
	public float offchance;
	public float onchance;
	bool lightOn;
	Light[] mylights;
	// Use this for initialization
	void Start () {
		lightOn = true;
		mylights = GetComponentsInChildren<Light> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (lightOn && offchance > Random.value) {
			lightOn = false;
			foreach (Light light in mylights) {
				light.enabled = false;
			}
		}
		if (!lightOn && onchance > Random.value) {
			lightOn = true;
			foreach (Light light in mylights) {
				light.enabled = true;
			}
		}
	}
}
