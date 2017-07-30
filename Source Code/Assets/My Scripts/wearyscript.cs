using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class wearyscript : MonoBehaviour {
	private PlayerController playscript;
	Image myimage;
	public float maxalpha;
	// Use this for initialization
	void Start () {
		myimage = GetComponent<Image> ();
		playscript = GameObject.FindGameObjectWithTag ("Player").GetComponent<PlayerController> ();
	}
	
	// Update is called once per frame
	void Update () {
		Color alphacol = new Color (myimage.color.r,
			                 myimage.color.g,
			                 myimage.color.b,
			                 (1 - (playscript.willpower / playscript.willpowercapacity)) * maxalpha);
		myimage.color = alphacol;
	}
}
