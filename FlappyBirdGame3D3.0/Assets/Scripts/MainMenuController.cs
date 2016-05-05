using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MainMenuController : MonoBehaviour {

	public AudioClip birdSound;
	private AudioSource source;
	public Text levelText;
	private float tilt;


	// Use this for initialization
	void Start () {
		source = GetComponent<AudioSource> (); 
		source.PlayOneShot (birdSound, 1); 
		this.tilt = 0;
		//DontDestroyOnLoad ();
		if (FlappyBirdPilot.fromGame == true) { 
			Debug.Log (FlappyBirdPilot.level);
			this.levelText.text = "You made it to Level " + FlappyBirdPilot.level + "!!!";
		}

	
	}
	
	// Update is called once per frame
	void Update () {

		this.tilt += Input.acceleration.x;	//iPhone scaling
		if (Input.touchCount > 0 || Input.GetMouseButtonDown (0)) { 
			SceneManager.LoadScene ("Game");
		} else if (tilt > 25.0f) {
			FlappyBirdPilot.easy = false;
			SceneManager.LoadScene ("Game");
		} else if (tilt < -25.0f) { 
			FlappyBirdPilot.easy = true;
			SceneManager.LoadScene ("Game");
		} else if (Input.GetKey (KeyCode.E)) { 
			FlappyBirdPilot.easy = true;
			SceneManager.LoadScene ("Game");
		} else if (Input.GetKey (KeyCode.H)) { 
			FlappyBirdPilot.easy = false;
			SceneManager.LoadScene ("Game");
		}
	}
}
