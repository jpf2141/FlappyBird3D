using UnityEngine;
using System.Collections;

public class FirstPersonController : MonoBehaviour {

	public GameObject flappybird;
	public float delay = 1.0F;

	// Use this for initialization
	void Start () {
	
		gameObject.transform.position = flappybird.transform.position;
	}
	
	// Update is called once per frame
	void Update () {
		scanForTargets ();
	}

	private void scanForTargets () { 
		Ray ray = new Ray (gameObject.transform.position, gameObject.transform.forward);

		RaycastHit hit;

		if (Physics.Raycast (ray, out hit, 200)) {
			if (hit.collider.gameObject != null) { 
				if (checkTarget(hit.collider.gameObject)) {
					selectTarget(hit.collider.gameObject); 
					Destroy(hit.collider.gameObject, 0.5f);
				}
			}
		}
	}

	private void selectTarget(GameObject target) { 
		Material selectedMaterial = Resources.Load("SelectionMaterial", typeof(Material)) as Material;
		Renderer[] renderers = target.gameObject.GetComponentsInChildren<Renderer> ();

		for (int i = 0; i < renderers.Length; i++) { 
			renderers [i].material = selectedMaterial;
		}

		target.gameObject.GetComponentsInChildren<Renderer> ();
	}

	private bool checkTarget(GameObject target) { 
		if (target.gameObject.CompareTag ("Cloud")) {
			return true;
		}

		return false;
	}
}
