/*using UnityEngine;
using System.Collections;

public class ray : vbutton {
	LineRenderer line;

	public vbutton vb;

	void Start () {
		line = gameObject.GetComponent<LineRenderer> ();
		line.enabled = false;	
	}

	void Update(){
		Debug.Log (vb.getFire ());

		if(vb.getFire()) {
			Debug.Log ("fire is true");
			StartCoroutine ("FireLaser");
		} else  {
			StopCoroutine ("FireLaser");
		}
	}
		
	IEnumerator FireLaser ()
	{
		while (vb.getFire()) {
			line.enabled = true;
			Ray ray = new Ray (transform.position, transform.forward);
			line.SetPosition (0, transform.position);
			RaycastHit hit;

		
			if (Physics.Raycast (ray, out hit, 100)) {
				line.SetPosition (1, hit.point);

				if (hit.collider.name == "Cloud") {
					Debug.Log ("CLOOUUUUUUUDDDDDDD");
				}
			} else
				line.enabled = false;

			yield return null;		
		}

		line.enabled = false;
	}
}
*/
	