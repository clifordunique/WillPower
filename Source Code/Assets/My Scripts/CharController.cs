using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent (typeof (CollisionController))]
public class CharController : MonoBehaviour {

	public float gravity;
	private Vector2 velocity;
	private CollisionController controller;
	public float jumpspd;
	public float movespd;
	public float keepdist;
	float velocityXSmoothing;
	float accelerationTimeGrounded = .15f;
	float accelerationTimeAirborne = .15f;
	float sprintmultiplier = 1.5f;
	public float termvel;
	float platfallcounter;
	public float platfalltime;
	public float jumpangle;
	float lightamount;
	public float nolightdist;
	public float gradientdist;
	//public float willpowercapacity;
	//public float willpower;
	//float willpowerdrain;
	//public float walkdrain;
	//public float rundrain;
	//public float jumpdrain;
	//public float restrate;
	//bool resting;
	GameObject player;
	private CharacterSceneChanger charscenechange;

	// Use this for initialization
	void Start () {
		controller = GetComponent<CollisionController> ();
		velocityXSmoothing = 0f;
		//willpower = willpowercapacity;
		//resting = false;
		player = GameObject.FindGameObjectWithTag ("Player");
		jumpangle = jumpangle * Mathf.Deg2Rad;
		charscenechange = GetComponent<CharacterSceneChanger> ();
	}

	// Update is called once per frame
	void Update () {
		//print (willpower);
		bool jump = false;
		Vector2 input;
		/*if (resting) {
			input = Vector2.zero;
			willpower += restrate*Time.deltaTime;
			if (willpower > willpowercapacity) {
				resting = false;
				willpower = willpowercapacity;
			}
		} else {
			input = new Vector2 (Input.GetAxis ("Horizontal"), Input.GetAxis ("Vertical"));
		}*/
		Vector2 playdist = player.transform.position - transform.position;
		lightamount = Mathf.Min (1f, Mathf.Max (0f, (playdist.magnitude-nolightdist) / gradientdist));
		foreach (GameObject light in GameObject.FindGameObjectsWithTag("DimLights")){
			light.GetComponent<Light>().intensity = lightamount*light.GetComponent<dimlightscript>().lightIntensity;
		}
		input = new Vector2(Mathf.Sign(playdist.x), Mathf.Sign(playdist.y));
		//willpowerdrain = walkdrain * Time.deltaTime;
		if (Mathf.Tan (playdist.y / playdist.x) > jumpangle) {
			jump = true;
		}

		if (jump && (input.y < 0)) {
			controller.collisionMask = LayerMask.GetMask ("collisions");
			platfallcounter = 0;
		} else {
			platfallcounter += Time.deltaTime;
			if (platfallcounter > platfalltime) {
				controller.collisionMask = LayerMask.GetMask ("collisions", "platforms");
			}
		}
		if (velocity.y > 0) {
			controller.collisionMask = LayerMask.GetMask ("collisions");
		}

		if (controller.collisions.below || controller.collisions.above) {
			velocity.y = 0;
		}
		velocity.y -= gravity;
		float Speed;
		/*if (Input.GetAxisRaw ("Sprint") == 1) {
			Speed = movespd * sprintmultiplier;
			//willpowerdrain = rundrain * Time.deltaTime;
		} else {*/
		Speed = movespd + playdist.x/keepdist;
		//}
		if (velocity.magnitude > termvel) {
			velocity = velocity.normalized * termvel;
		}
		//velocity.x = input.x * movespd;
		float targetVelocityX;
		//if (!talking) {
		targetVelocityX = input.x * Speed;
		//} else {
		//	targetVelocityX = 0;
		//}
		velocity.x = Mathf.SmoothDamp (velocity.x, targetVelocityX, ref velocityXSmoothing, (controller.collisions.below) ? accelerationTimeGrounded : accelerationTimeAirborne);
		//print (targetVelocityX);//print ("VelocitySmoothing: " + velocityXSmoothing.ToString ());
		if (jump && controller.collisions.below && !(input.y < 0)) {
			velocity.y += jumpspd;
			//willpowerdrain += jumpdrain;
		}
		velocity = controller.Move (velocity);
		/*if (!resting){
			willpower -= willpowerdrain; //drain bits of willpower over time
		}
		if (willpower < 0) {
			willpower = 0;
			resting = true;
		}*/
	}
	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "Player") {
			print("GameOver");
			charscenechange.lose = true;
		}
	}
}
