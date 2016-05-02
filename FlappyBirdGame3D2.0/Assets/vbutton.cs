using UnityEngine;
using System.Collections;
using Vuforia;

public class vbutton : MonoBehaviour, IVirtualButtonEventHandler {

	LineRenderer line;
	bool fire;

	void Start(){

		GameObject sphere = GameObject.FindWithTag ("sphere");
		line = sphere.GetComponent<LineRenderer> ();
		line.enabled = false;

		VirtualButtonBehaviour[] vbs = GetComponentsInChildren<VirtualButtonBehaviour> ();
		for (int i = 0; i < vbs.Length; ++i) {
			vbs [i].RegisterEventHandler (this);
		}
	}

	public void OnButtonPressed(VirtualButtonAbstractBehaviour vb){
		Debug.Log ("OnButtonPressed " + vb.VirtualButtonName);
		GameObject ButtonCube = GameObject.FindWithTag ("ButtonCube");
		Renderer button = ButtonCube.GetComponent<Renderer> ();
		button.material.color = Color.red; //change button color to red on press

		fire = true;
		StartCoroutine("FireLaser");
	}

	public void OnButtonReleased (VirtualButtonAbstractBehaviour vb)
	{
		Debug.Log ("OnButtonReleased " + vb.VirtualButtonName);
		GameObject ButtonCube = GameObject.FindWithTag ("ButtonCube");
		Renderer button = ButtonCube.GetComponent<Renderer> ();
		button.material.color = Color.green; //change button color back to green on release

		fire = false;
		line.enabled = false;
		Debug.Log ("stop");

	}

	IEnumerator FireLaser(){
		
		line.enabled = true;
	
		while(fire){
			
			Ray ray = new Ray(transform.position, transform.forward);
			line.SetPosition (0, ray.origin);
			line.SetPosition (1, ray.GetPoint (100));
			RaycastHit hit;

			if(Physics.Raycast(ray, out hit, 100))
			{

				if(hit.collider.tag == "cloud")
				{
					Debug.Log ("hit cloud!!!!!!");
				}
			}
			else
				
				line.SetPosition(1, ray.origin);

			yield return null;
		}

		line.enabled = false;	
	}
}