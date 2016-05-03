using UnityEngine;
using System.Collections;
using Vuforia;

public class collide : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerStay(Collider hover){
	
		//GameObject Cloud = GameObject.FindWithTag ("cloud");
		print (hover.tag);

		if (hover.tag == "cloud") {
			
			Destroy (hover.gameObject);
		}
	}

	void OnTriggerExit(Collider hover){

		Debug.Log ("nothing selected.");
	}
}
