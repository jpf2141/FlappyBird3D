using UnityEngine;
using System.Collections;
using Vuforia;

public class VirtualButton : MonoBehaviour, IVirtualButtonEventHandler {

	public float up_force;
	public float down_force;

	void Start(){

		VirtualButtonBehaviour[] vbs = GetComponentsInChildren<VirtualButtonBehaviour>();
		for (int i = 0; i < vbs.Length; ++i) {
			vbs[i].RegisterEventHandler(this);
		}
	}

	public void OnButtonPressed(VirtualButtonAbstractBehaviour vb){
		Debug.Log ("OnButtonPressed " + vb.VirtualButtonName);
		GameObject ButtonCube = GameObject.FindWithTag ("ButtonCube");
		Renderer button = ButtonCube.GetComponent<Renderer> ();
		button.material.color = Color.red; //change button color to red on press
		flyup();
	}
		
	public void OnButtonReleased (VirtualButtonAbstractBehaviour vb)
	{
		Debug.Log ("OnButtonPressed " + vb.VirtualButtonName);
		GameObject ButtonCube = GameObject.FindWithTag ("ButtonCube");
		Renderer button = ButtonCube.GetComponent<Renderer> ();
		button.material.color = Color.green; //change button color back to green on release
		falldown ();
	}

	private void flyup() { 
		Rigidbody rigidbody = getRigidbody ();
		rigidbody.velocity = Vector3.zero; 
		rigidbody.AddForce  (new Vector3(0.0F, up_force, 0.0F));
	}

	private void falldown() { 
		Rigidbody rigidbody = getRigidbody ();
		rigidbody.AddForce (new Vector3 (0.0F, -down_force, 0.0F));
	}

	private Rigidbody getRigidbody() { 
		GameObject flappybird = GameObject.FindWithTag ("flappybird");
		return flappybird.GetComponent<Rigidbody> ();
	}
}
