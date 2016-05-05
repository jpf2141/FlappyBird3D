using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;
using UnityEngine.UI;
using ProgressBar.Utils;

public class FlappyBirdPilot : MonoBehaviour {

	public static int level;
	public static bool easy = true;
	public static bool fromGame = false;
	private float score;	
	private float health;
	public ProgressBar.ProgressBarBehaviour healthBar;
	public ProgressBar.ProgressBarBehaviour scoreBar;
	public Text levelText;

	public AudioClip coinSound;
	public AudioClip cloudSound;
	public AudioClip endGame;
	public AudioClip startGame;
	private AudioSource source;

	public GameObject joystick;
	public float y_force; 
	public float z_force;


	private float tilt;
	public float tiltNerfer = 100000; 
	public float birdSpeed = .028f;
	private float scaleMultiplier;
	private float distanceScore;
	public float difficulty; 

	public GameObject stadium;

	private float initial_x;
	private float initial_y; 
	private float initial_z;

	private bool initial_x_set = false; 
	private bool initial_y_set = false;
	private bool initial_z_set = false; 

	public float y_steering_sensitivity;
	public float z_steering_sensitivity;
	public float x_steering_sensitivity;

	// Use this for initialization
	void Start () {

		source = GetComponent<AudioSource> (); 
		lighten ();
		this.score = 0.0f;
		this.health = 100.0f;
		level = 1;
		fromGame = true;
		this.levelText.text = "Level " + level;
		source.PlayOneShot (startGame, 1);
		healthBar.Value = 100.0f;	//initalize health bar
		scoreBar.Value = 0.0f;		//initialize score bar
	}	
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKey (KeyCode.UpArrow)) {
			gameObject.transform.position += Vector3.up * .1F;
		} else if (Input.GetKey (KeyCode.DownArrow)) { 
			gameObject.transform.position += Vector3.down * .1F;
		} else if (Input.GetKey (KeyCode.RightArrow)) { 
			gameObject.transform.position += Vector3.back * .1F;
		} else if (Input.GetKey (KeyCode.LeftArrow)) { 
			gameObject.transform.position += Vector3.forward * .1F;
		}

		/*********** KEEP THE FLAPPY BIRD WITHIN THE STADIUM ****************/
		gameObject.transform.rotation = gameObject.transform.rotation;
		getRigidbody ().velocity = Vector3.zero;

		/*********** PILOT CONTROL WITH JOYSTICK ***************************/
		fly_y_axis (joystick.transform.position.y);
		fly_z_axis (joystick.transform.rotation.z);
		fly_x_axis (joystick.transform.rotation.x);


		setDifficulty ();
		generateDistanceScore ();
		scaleBird ();
		setSpeed (); 
	}
		
	void OnTriggerEnter(Collider other) { 
		if (other.gameObject.CompareTag ("Pipe")) {
			Debug.Log (other.gameObject.name);
			this.health -= 25;
			subHealth (25.0f); 
			source.PlayOneShot (cloudSound, 1);
		} else if (other.gameObject.CompareTag ("Cloud")) {
			Debug.Log (other.gameObject.name);
			this.health -= 10;
			subHealth (10.0f); 
			source.PlayOneShot (cloudSound, 1);
			Destroy(other.gameObject);
		} else if (other.gameObject.CompareTag ("Coin")) {
			Debug.Log (other.gameObject.name);
			Destroy (other.gameObject);
			this.score += 25;
			addScore (25.0f); 
			source.PlayOneShot (coinSound, 1);
			Destroy(other.gameObject);
		}
		this.checkHealth (); 
	}


	private void setDifficulty () { 
		if (FlappyBirdPilot.easy == true) { 
			difficulty = .0001f;
		} else {
			difficulty = .0005f;
		}
	}

	private void generateDistanceScore () { 
		distanceScore += (.1f * scaleMultiplier);
		if (distanceScore >= 1.0f) { 
			this.score += 1.0f;
			addScore (1.0f);
			distanceScore = 0.0f;
		}
	}


	private void subHealth(float hit) { 
		this.healthBar.DecrementValue(hit);
	}

	private void addScore(float increase) { 
		this.scoreBar.IncrementValue(increase);
	} 

	public void levelUp() { 
		
		this.scoreBar.Value = 0.0f;
		level += 1;
		this.levelText.text = "Level " + level;
	}

	public void checkHealth() { 
		if(this.health <= 0 || this.healthBar.Value <= 0) {
			source.PlayOneShot (endGame, 1); 
			SceneManager.LoadScene ("Menu");
			Debug.Log(this.healthBar.Value);
		}
	}

	public void setSpeed () { 
		CoinController.setSpeed (this.difficulty); 
		PipeController.setSpeed (this.difficulty); 
		CloudFieldCreator.setSpeed (this.difficulty); 
	}

	private void scaleBird() { 
		if (gameObject.transform.localScale.x >= 0.03f && gameObject.transform.localScale.x <= 0.05f) { 
			if (Input.GetKey (KeyCode.Q)) {
				tilt = 0.01f/tiltNerfer;
				gameObject.transform.localScale += new Vector3 (tilt, tilt, tilt);
			} else if (Input.GetKey (KeyCode.E)) {
				tilt = -0.01f/tiltNerfer;
				gameObject.transform.localScale += new Vector3 (tilt, tilt, tilt);
			} else {
//				tilt = Input.acceleration.x/tiltNerfer;	//iPhone scaling
//				gameObject.transform.localScale += new Vector3 (tilt, tilt, tilt);
			}
		} else if (gameObject.transform.localScale.x <= 0.03f) {
			gameObject.transform.localScale = new Vector3 (0.03f, 0.03f, 0.03f);
		} else if (gameObject.transform.localScale.x >= 0.05f) {
			gameObject.transform.localScale = new Vector3 (0.05f, 0.05f, 0.05f);
		}
		scaleMultiplier = gameObject.transform.localScale.x * 10;
	}
		
	private void fly_y_axis(float height) { 
		if (!initial_y_set) { 
			initial_y = height;
			Debug.Log (height);
			initial_y_set = true;
		} else { 
			if (height > initial_y + y_steering_sensitivity) { 
				gameObject.transform.position += Vector3.up * birdSpeed;
			} else if (height < initial_y - y_steering_sensitivity) {
				gameObject.transform.position += Vector3.down * birdSpeed;
			}
		}
	}

	private void fly_z_axis(float z) { 
		if (!initial_z_set) { 
			initial_z = z; 
			//Debug.Log (z);
			initial_z_set = true;
		} else { 
			if (z > initial_z + z_steering_sensitivity) { 
				gameObject.transform.position += Vector3.back * birdSpeed;
			} else if (z < initial_z - z_steering_sensitivity) { 
				gameObject.transform.position += Vector3.forward * birdSpeed;
			}
		}
	}

	private void fly_x_axis(float x) { 
		if (!initial_x_set) { 
			initial_x = x; 
			Debug.Log (x);
			initial_x_set = true; 
		} else {
			if (x > initial_x + x_steering_sensitivity) { 
				gameObject.transform.position += Vector3.left * .01F;
			} else if (x < initial_x - x_steering_sensitivity) { 
				gameObject.transform.position += Vector3.right * .01F;
			}
		}
	}
		
	private Rigidbody getRigidbody() { 
		return gameObject.GetComponent<Rigidbody> ();
	}

	public static GameObject lighten() {
		GameObject lightGameObject = new GameObject ("Backup Directional Light");

		Light light = lightGameObject.AddComponent<Light> ();
		light.color = Color.white;
		light.intensity = 1.27f;
		light.bounceIntensity = 0.82f;
		light.type = LightType.Directional;
		lightGameObject.transform.rotation = new Quaternion (50, 80, -2, 0);
		lightGameObject.transform.position = new Vector3 (0, 3, 0);
		return lightGameObject;
	}

}
