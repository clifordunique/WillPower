using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterSceneChanger : MonoBehaviour {
	SceneController sceneController;
	public bool lose = false;
	public string Exit_Scene_Name;
	public string Enter_Scene_Name;
	// Use this for initialization
	void Start () {
		sceneController = GameObject.FindGameObjectWithTag("SceneController").GetComponent<SceneController>();
	}
	
	// Update is called once per frame
	void Update () {
		if (lose) {
			sceneController.Unload (Exit_Scene_Name);
			sceneController.Load (Enter_Scene_Name);
		}
	}
}
