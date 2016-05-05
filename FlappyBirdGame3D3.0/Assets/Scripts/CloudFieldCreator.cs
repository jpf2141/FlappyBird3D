using UnityEngine;
using System.Collections;

public class CloudFieldCreator : MonoBehaviour {
	public float start; 
	public float middle; 
	public float end; 

	public float y_limit_low; 
	public float y_limit_high; 

	public float z_limit_low; 
	public float z_limit_high; 

	public GameObject track;

	private static float speedMultiplier = 1;
	public float difficulty = .0001f; 


	private bool hasDuplicated = false; 

	// Use this for initialization
	void Start () {
	}

	// Update is called once per frame
	void Update () {
		if (gameObject.transform.position.x < middle * (1.0F / transform.localScale.x) && !hasDuplicated) {
			createNewClouds ();
			hasDuplicated = true;
		} else if (gameObject.transform.position.x < end * (1.0F / transform.localScale.x)) { 
			Destroy (gameObject);
		}

		gameObject.transform.position += gameObject.transform.right * -1.5f * Time.deltaTime * speedMultiplier;
	}

	private void createNewClouds() { 
		GameObject clone = (GameObject) Instantiate (gameObject, 
			new Vector3(start * (1.0F / transform.localScale.x), 
				Random.Range(y_limit_low, y_limit_high) * (1.0F / transform.localScale.y), 
				Random.Range(z_limit_low, z_limit_high) * (1.0F / transform.localScale.z)), 
			transform.rotation);	
		clone.transform.parent = track.transform; 
		clone.transform.localScale = gameObject.transform.localScale;
		clone.tag = "Cloud"; 
		clone.name = "Cloud";
	}


	public static void setSpeed (float difficulty) { 
		speedMultiplier += difficulty;
	}
}
