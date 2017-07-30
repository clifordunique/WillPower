using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent (typeof (CollisionController))]
public class PlayerController : MonoBehaviour {

	public float gravity;
	private Vector2 velocity;
	private CollisionController controller;
	public float jumpspd;
	public float movespd;
	public float hallucination_multiplier;
	public bool hallucinating;
	float velocityXSmoothing;
	float accelerationTimeGrounded = .15f;
	float accelerationTimeAirborne = .15f;
	float sprintmultiplier = 1.5f;
	public float termvel;
	float platfallcounter;
	public float platfalltime;
	public float willpowercapacity;
	public float willpower;
	float willpowerdrain;
	public float walkdrain;
	public float rundrain;
	public float jumpdrain;
	public float normrestrate;
	public float restrate;
	bool resting;

	// Use this for initialization
	void Start () {
		controller = GetComponent<CollisionController> ();
		velocityXSmoothing = 0f;
		willpower = willpowercapacity;
		resting = false;
		restrate = normrestrate;
	}

	// Update is called once per frame
	void Update () {
		Vector2 input;
		if (resting) {
			input = Vector2.zero;
			willpower += restrate*Time.deltaTime;
			if (willpower > willpowercapacity) {
				resting = false;
				willpower = willpowercapacity;
			}
		} else {
			input = new Vector2 (Input.GetAxis ("Horizontal"), Input.GetAxis ("Vertical"));
		}
		willpowerdrain = walkdrain * Time.deltaTime;

		if (Input.GetKeyDown (KeyCode.Space) && (input.y < 0) && !resting) {
			controller.collisionMask = LayerMask.GetMask ("collisions", "hallucinations");
			platfallcounter = 0;
		} else {
			platfallcounter += Time.deltaTime;
			if (platfallcounter > platfalltime) {
				controller.collisionMask = LayerMask.GetMask ("collisions", "platforms", "hallucinations");
			}
		}
		if (velocity.y >= 0) {
			controller.collisionMask = LayerMask.GetMask ("collisions", "hallucinations");
		}

		if (controller.collisions.below || controller.collisions.above) {
			velocity.y = 0;
		}
		velocity.y -= gravity;
		float Speed;
		if (Input.GetAxisRaw ("Sprint") == 1) {
			Speed = movespd * sprintmultiplier;
			willpowerdrain = rundrain * Time.deltaTime;
		} else {
			Speed = movespd;
		}
		if (velocity.magnitude > termvel) {
			velocity = velocity.normalized * termvel;
		}
		//velocity.x = input.x * movespd;
		float targetVelocityX;
		//if (!talking) {
		targetVelocityX = input.x * Speed;
		if (hallucinating) {
			targetVelocityX *= hallucination_multiplier;
		}
		//} else {
		//	targetVelocityX = 0;
		//}
		velocity.x = Mathf.SmoothDamp (velocity.x, targetVelocityX, ref velocityXSmoothing, (controller.collisions.below) ? accelerationTimeGrounded : accelerationTimeAirborne);

		if (Input.GetKey (KeyCode.Space) && controller.collisions.below && !(input.y < 0)) {
			velocity.y += jumpspd;
			willpowerdrain += jumpdrain;
		}
		velocity = controller.Move (velocity);
		if (!resting){
			willpower -= willpowerdrain; //drain bits of willpower over time
		}
		if (willpower < 0 && !resting) {
			willpower -= 10;
			resting = true;
		}
		if (Input.GetKeyDown(KeyCode.Q) && !resting) {
			willpower -= 10;
			resting = true;
		}
		restrate = normrestrate;
		hallucinating = false;
	}
}
