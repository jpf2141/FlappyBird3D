using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MainMenuController : MonoBehaviour {

	public Text levelText;


	// Use this for initialization
	void Start () {

		//DontDestroyOnLoad ();
		if (FlappyBirdPilot.fromGame == true) { 
			Debug.Log (FlappyBirdPilot.level);
			this.levelText.text = "You made it to Level " + FlappyBirdPilot.level + "!!!";
		}

	
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.touchCount > 0 || Input.GetMouseButtonDown (0)) { 
			SceneManager.LoadScene ("Game");
		}
	}
}
