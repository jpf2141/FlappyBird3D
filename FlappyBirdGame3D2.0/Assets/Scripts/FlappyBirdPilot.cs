using UnityEngine;
using System.Collections;

public class FlappyBirdPilot : MonoBehaviour {
	public GameObject joystick;
	public float y_force; 
	public float z_force;

	private float prev_height;
	private float tilt;
	private float scaleMultiplier;


	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKey (KeyCode.UpArrow)) {
			gameObject.transform.position += Vector3.up * .1F;
		} else if (Input.GetKey (KeyCode.DownArrow)) { 
			gameObject.transform.position += Vector3.down * .1F;
		} else if (Input.GetKey (KeyCode.RightArrow)) { 
			gameObject.transform.position += Vector3.back * .1F;
		} else if (Input.GetKey (KeyCode.LeftArrow)) { 
			gameObject.transform.position += Vector3.forward * .1F;
		}

		fly (joystick.transform.root.eulerAngles);
		Debug.Log (joystick.transform.position.y);
		scaleBird ();
	}

	void OnTriggerEnter(Collider other) { 
		Debug.Log ("Bumped into another collider!!");
	}

	private void fly (Vector3 direction) { 
		Debug.Log (direction);
		direction = new Vector3 (0, getDirection(direction.y), getDirection(direction.z));

		gameObject.transform.position += direction * .01F;
	}

	private void scaleBird() { 
		if (gameObject.transform.localScale.x >= 0.01f && gameObject.transform.localScale.x <= 0.2f) { 
			if (Input.GetKey (KeyCode.Q)) {
				gameObject.transform.localScale += new Vector3 (0.01f, 0.01f, 0.01f);
			} else if (Input.GetKey (KeyCode.E)) {
				gameObject.transform.localScale += new Vector3 (-0.01f, -0.01f, -0.01f);
			} else {
				tilt = Input.acceleration.x;
				gameObject.transform.localScale += new Vector3 (tilt, tilt, tilt);
			}
		} else if (gameObject.transform.localScale.x <= 0.01f) {
			gameObject.transform.localScale = new Vector3 (0.02f, 0.02f, 0.02f);
		} else if (gameObject.transform.localScale.x >= 0.2f) {
			gameObject.transform.localScale = new Vector3 (0.19f, 0.19f, 0.19f);
		}
		scaleMultiplier = gameObject.transform.localScale.x * 10;
	}

	/*
	private void flyup(float height) { 
		if (prev_height == null) { 
			prev_height = height; 
		} else if (
	} */

	private float getDirection(float angle) {
		if (angle % 360 > 0) { 
			return -1.0F;
		} else if (angle % 360 == 0) { 
			return 0.0F; 
		}

		return 1.0F; 
	}


	private Rigidbody getRigidbody() { 
		return gameObject.GetComponent<Rigidbody> ();
	}
}
