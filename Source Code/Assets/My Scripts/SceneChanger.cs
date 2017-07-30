using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneChanger : MonoBehaviour {
	SceneController sceneController;
	public string Exit_Scene_Name;
	public string Enter_Scene_Name;
	public KeyCode key;
	// Use this for initialization
	void Start () {
		sceneController = GameObject.FindGameObjectWithTag("SceneController").GetComponent<SceneController>();
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown (key)) {
			sceneController.Unload (Exit_Scene_Name);
			sceneController.Load (Enter_Scene_Name);
		}
	}
}
