using UnityEngine;
using System.Collections;

public class PipeController : MonoBehaviour {
	public float start; 
	public float middle; 
	public float end; 

	public GameObject track;

	private bool hasDuplicated = false; 

	// Use this for initialization
	void Start () {
	}

	// Update is called once per frame
	void Update () {
		if (gameObject.transform.position.x < middle * (1.0F / transform.localScale.x) && !hasDuplicated) {
			createNewPipes ();
			hasDuplicated = true;
		} else if (gameObject.transform.position.x < end * (1.0F / transform.localScale.x)) { 
			Destroy (gameObject);
		}

		gameObject.transform.position += gameObject.transform.right * -1.5f * Time.deltaTime;
	}

	private void createNewPipes() { 
		GameObject clone = (GameObject) Instantiate (gameObject, 
			new Vector3(start * (1.0F / transform.localScale.x), 
				Random.Range(-1F, 0.5F) * (1.0F/ transform.localScale.y), 
				gameObject.transform.position.z), 
			transform.rotation);
		clone.transform.parent = track.transform; 
		clone.transform.localScale = gameObject.transform.localScale;
	}
}

