using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class MainMenuController : MonoBehaviour {

	// Use this for initialization
	void Start () {

		//DontDestroyOnLoad ();
		if (FlappyBirdPilot.fromGame == true) { 
			Debug.Log (FlappyBirdPilot.level);
		}

	
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.touchCount > 0 || Input.GetMouseButtonDown (0)) { 
			SceneManager.LoadScene ("Game");
		}
	}
}
