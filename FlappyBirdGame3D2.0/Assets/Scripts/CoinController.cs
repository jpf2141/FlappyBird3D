using UnityEngine;
using System.Collections;

public class CoinController : MonoBehaviour {

	public float start; 
	public float middle; 
	public float end; 

	public float maxHeight;
	public float minHeight; 

	private float speedMultiplier = 1; 
	public float difficulty = .0001f; 

	public GameObject track;

	private bool hasDuplicated = false; 


	// Use this for initialization
	void Start () {
	
	}
	
	void Update () {
		
		if (gameObject.transform.position.x < middle * (1.0F / transform.localScale.x) && !hasDuplicated) {
			createNewCoin ();
			hasDuplicated = true;
		} else if (gameObject.transform.position.x < end * (1.0F / transform.localScale.x)) { 
			Destroy (gameObject);
		}
		gameObject.transform.position += gameObject.transform.right * -1.5f * Time.deltaTime * speedMultiplier;
		setSpeed (); 
	}

	private void createNewCoin() { 
		GameObject clone = (GameObject) Instantiate (gameObject, 
			new Vector3(start * (1.0F / transform.localScale.x), 
				Random.Range(minHeight, maxHeight) * (1.0F/ transform.localScale.y), 
				gameObject.transform.position.z), 
			transform.rotation);
		clone.transform.parent = track.transform; 
		clone.transform.localScale = gameObject.transform.localScale;
	}

	public void setSpeed () { 
		speedMultiplier += difficulty;
	}
		


}
