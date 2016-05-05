using UnityEngine;
using System.Collections;

public class CrossHairs : MonoBehaviour {
	LineRenderer line;

	void start() { 
		line = gameObject.GetComponent<LineRenderer> ();
		line.enabled = false;
		StartCoroutine ("FireLaser");
	}

	IEnumerator FireLaser ()
	{
		line.enabled = true;
			
		Ray ray = new Ray (transform.position, transform.forward);

		line.SetPosition (0, ray.origin);

		RaycastHit hit;

		if (Physics.Raycast (ray, out hit, 100)) {
			line.SetPosition (1, hit.point);

			if (hit.collider.name == "Cloud") {
				Debug.Log ("CLOOUUUUUUUDDDDDDD");
			}
		}

		line.enabled = false;

		yield return null;	
	}
}
