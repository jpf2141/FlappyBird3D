using UnityEngine;
using System.Collections;

public class FlappyBirdPilot : MonoBehaviour {
	public GameObject joystick;
	public float y_force; 
	public float z_force;

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

		gameObject.transform.rotation = joystick.transform.rotation;
		fly (joystick.transform.root.eulerAngles);
	}

	void OnTriggerEnter(Collider other) { 
		Debug.Log ("Bumped into another collider!!");
	}

	private void fly (Vector3 direction) { 
		direction = new Vector3 (0, getDirection(direction.y), getDirection(direction.z));

		gameObject.transform.position += direction * .01F;
	}

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
