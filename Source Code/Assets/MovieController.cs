using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class MovieController : MonoBehaviour {
	VideoPlayer videoplayer;
	SceneController sceneController;
	public string Exit_Scene_Name;
	public string Enter_Scene_Name;
	// Use this for initialization
	void Start () {
		videoplayer = GetComponent<VideoPlayer> ();
		videoplayer.loopPointReached += EndReached;
		sceneController = GameObject.FindGameObjectWithTag("SceneController").GetComponent<SceneController>();
	}
	
	// Update is called once per frame
	void EndReached (VideoPlayer vp) {
		sceneController.Unload (Exit_Scene_Name);
		sceneController.Load (Enter_Scene_Name);
	}
}
