using UnityEngine;
using System.Collections;

public class FlappyBirdPilot : MonoBehaviour {
	public GameObject joystick;
	public float y_force; 
	public float z_force;


	private float tilt;
	private float scaleMultiplier;

	public GameObject stadium;

	private float initial_x;
	private float initial_y; 
	private float initial_z;

	private bool initial_x_set = false; 
	private bool initial_y_set = false;
	private bool initial_z_set = false; 

	public float y_steering_sensitivity;
	public float z_steering_sensitivity;
	public float x_steering_sensitivity;

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

		/*********** KEEP THE FLAPPY BIRD WITHIN THE STADIUM ****************/
		gameObject.transform.rotation = gameObject.transform.rotation;
		getRigidbody ().velocity = Vector3.zero;

		/*********** PILOT CONTROL WITH JOYSTICK ***************************/
		fly_y_axis (joystick.transform.position.y);
		fly_z_axis (joystick.transform.rotation.z);
		fly_x_axis (joystick.transform.rotation.x);

		scaleBird ();
	}
		
	void OnTriggerEnter(Collider other) { 
		Debug.Log ("Bumped into another collider:");
		Debug.Log (other.gameObject.name);
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
		
	private void fly_y_axis(float height) { 
		if (!initial_y_set) { 
			initial_y = height;
			Debug.Log (height);
			initial_y_set = true;
		} else { 
			if (height > initial_y + y_steering_sensitivity) { 
				gameObject.transform.position += Vector3.up * .05F;
			} else if (height < initial_y - y_steering_sensitivity) {
				gameObject.transform.position += Vector3.down * .05F;
			}
		}

	}

	private void fly_z_axis(float z) { 
		if (!initial_z_set) { 
			initial_z = z; 
			Debug.Log (z);
			initial_z_set = true;
		} else { 
			if (z > initial_z + z_steering_sensitivity) { 
				gameObject.transform.position += Vector3.back * .05F;
			} else if (z < initial_z - z_steering_sensitivity) { 
				gameObject.transform.position += Vector3.forward * .05F;
			}
		}
	}

	private void fly_x_axis(float x) { 
		if (!initial_x_set) { 
			initial_x = x; 
			Debug.Log (x);
			initial_x_set = true; 
		} else {
			if (x > initial_x + x_steering_sensitivity) { 
				gameObject.transform.position += Vector3.left * .05F;
			} else if (x < initial_x - x_steering_sensitivity) { 
				gameObject.transform.position += Vector3.right * .05F;
			}
		}
	}
		
	private Rigidbody getRigidbody() { 
		return gameObject.GetComponent<Rigidbody> ();
	}
}
