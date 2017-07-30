using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BlinkScript : MonoBehaviour {
	public float blinkspeed;
	public float blinkdist;
	Transform Blink1;
	Transform Blink2;
	Vector3 blink1_vel;
	Vector3 blink2_vel;
	bool blinking;
	float blinktime;
	float blinkcounter;
	public float maxblinktime;
	public float minblinktime;
	// Use this for initialization
	void Start () {
		Blink1 = transform.GetChild (0);
		Blink2 = transform.GetChild (1);
		blink1_vel = Vector3.zero;
		blink2_vel = Vector3.zero;
	}
	
	// Update is called once per frame
	void Update () {
		if (!blinking){
			blinkcounter += Time.deltaTime;
			if (blinkcounter > blinktime) {
				blinkcounter = 0;
				Blink ();
			}
		}
		Blink1.transform.position += blink1_vel * Time.deltaTime;
		Blink2.transform.position += blink2_vel * Time.deltaTime;
		if (Blink1.transform.localPosition.y > blinkdist || Blink1.transform.localPosition.y < -blinkdist ) {
			blink1_vel = Vector3.zero;
			blinking = false;
		}
		if (Blink2.transform.localPosition.y > blinkdist || Blink2.transform.localPosition.y < -blinkdist ) {
			blink2_vel = Vector3.zero;
			blinking = false;
		}
	}

	public void Blink(){
		if (Blink1.transform.position.y > Blink2.transform.position.y) {
			blink1_vel = new Vector3 (0, -blinkspeed, 0);
			blink2_vel = new Vector3 (0, blinkspeed, 0);
		} else {
			blink1_vel = new Vector3 (0, blinkspeed, 0);
			blink2_vel = new Vector3 (0, -blinkspeed, 0);
		}
		blinktime = Random.Range (minblinktime, maxblinktime);
	}
}
