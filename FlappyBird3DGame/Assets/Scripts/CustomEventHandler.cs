using UnityEngine;
using System.Collections;
using Vuforia;

public class CustomEventHandler : MonoBehaviour, ITrackableEventHandler {
	private TrackableBehaviour trackableBehaviour; 
	private bool isRendered = false; 
	private GameObject pipe;

	// Use this for initialization
	void Start () {
		pipe = GameObject.Find ("Bottom Pipe");

		Debug.Log (pipe.ToString ());

		trackableBehaviour = GetComponent<TrackableBehaviour> (); 

		if (trackableBehaviour) { 
			trackableBehaviour.RegisterTrackableEventHandler (this);
		}

		OnTracking (false);
	}

	// Update is called once per frame
	void Update () {
		if (isRendered && pipe.transform.position.x < 1.4) { 
			pipe.transform.position += pipe.transform.forward * -1.0f * Time.deltaTime; 
		}
	}

	public void OnTrackableStateChanged(TrackableBehaviour.Status prevStatus, 
		TrackableBehaviour.Status nextStatus) {
		if (nextStatus == TrackableBehaviour.Status.DETECTED ||
			nextStatus == TrackableBehaviour.Status.TRACKED) { 
			OnTracking (true);
		} else { 
			OnTracking (false);
		}
	}

	private void OnTracking(bool found) {
		Renderer[] rendererComponents = GetComponentsInChildren<Renderer> ();

		foreach (Renderer component in rendererComponents) { 
			component.enabled = found;
		}

		if (found) { 
			Debug.Log ("Trackable: " + trackableBehaviour.TrackableName + " found."); 
		} else { 
			Debug.Log ("Trackable: " + trackableBehaviour.TrackableName + " lost."); 
		}

		isRendered = found;
	}
}

