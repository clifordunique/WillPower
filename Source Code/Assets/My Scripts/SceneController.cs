using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneController : MonoBehaviour {

	public static SceneController Instance{ get; set;}
	public bool startscenegeneration;
	public string FirstScene;
	//GameObject LoadScreen;
	//private GameObject player;
	// Use this for initialization
	private void Awake(){
		//LoadScreen = GameObject.FindGameObjectWithTag ("LoadScreen");
		Instance = this;
		if (startscenegeneration){
			Load (FirstScene);
		}
		//LoadScreen.SetActive (false);
	}
	//void Start(){
	//	player = GameObject.FindGameObjectWithTag ("Player");
	//}
	public void Load(string scenename){
		if (!SceneManager.GetSceneByName (scenename).isLoaded) {
			SceneManager.LoadScene (scenename, LoadSceneMode.Additive);
		}
		//LoadWait ();
		//LoadScreen.SetActive (false);
	}
	public void Unload(string scenename){
		//LoadScreen.SetActive (true);
		//LoadWait ();
		if (SceneManager.GetSceneByName (scenename).isLoaded) {
			SceneManager.UnloadSceneAsync (scenename);
		}
	}
	/*IEnumerator LoadWait(){
		yield return new WaitForSeconds (1);
	}*/
}
