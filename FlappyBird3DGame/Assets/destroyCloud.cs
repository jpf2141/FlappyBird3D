using UnityEngine;
using System.Collections;
using Vuforia;

public class destroyCloud : MonoBehaviour {

	void OnTriggerStay (Collider hover) 
	{
		print (hover.tag);

		if (hover.tag == "cloud") {
			Destroy (hover.gameObject);
		}
	}
}
