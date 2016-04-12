using UnityEngine;
using System.Collections;

public class FlappyBirdController : MonoBehaviour {
	public float up_force;
	public GameObject flappybird;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		fly ();
	}

	private void fly() { 
		if (Input.GetMouseButtonDown (0)) {
			flyup ();
		}
	}

	private void flyup() { 
		Rigidbody rigidbody = getRigidbody ();
		rigidbody.velocity = Vector3.zero;  // Prevent flappy bird from zooming upwards
		rigidbody.AddForce (new Vector3(0.0F, up_force, 0.0F));
	}

	private Rigidbody getRigidbody() { 
		return flappybird.GetComponent<Rigidbody> ();
	}
}
