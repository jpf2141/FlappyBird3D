using UnityEngine;
using System.Collections;
using Vuforia;

public class VirtualButton : MonoBehaviour, IVirtualButtonEventHandler {


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
	}

	public void OnButtonReleased (VirtualButtonAbstractBehaviour vb)
	{
		Debug.Log ("OnButtonPressed " + vb.VirtualButtonName);
		GameObject ButtonCube = GameObject.FindWithTag ("ButtonCube");
		Renderer button = ButtonCube.GetComponent<Renderer> ();
		button.material.color = Color.green; //change button color back to green on release
	}
}