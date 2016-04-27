using UnityEngine;
using System.Collections;

public class FlappyBirdController : MonoBehaviour {
	public float up_force;
	public float down_force;
	public GameObject flappybird;

	public int score = 0;
	public string user;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		fly ();
	}

	private void fly() { 
		if (Input.GetMouseButtonDown (0)) {
			flyup ();
		} else { 
			falldown ();
		}
	}

	private void flyup() { 
		Rigidbody rigidbody = getRigidbody ();
		rigidbody.velocity = Vector3.zero;  // Prevent flappy bird from zooming upwards
		rigidbody.AddForce (new Vector3(0.0F, up_force, 0.0F));
	}

	private void falldown() { 
		Rigidbody rigidbody = getRigidbody ();
		rigidbody.AddForce (new Vector3 (0.0F, -down_force, 0.0F));
	}

	private Rigidbody getRigidbody() { 
		return flappybird.GetComponent<Rigidbody> ();
	}


	//call this when the player loses (i.e. collides w/ something, crashes, etc)
	void scoreManager() {
		int highScore = getHighScore (GameControl.control.name);
		if (this.score >= highScore) {
			GameControl.control.scores [GameControl.control.name] = this.score;
			GameControl.control.Save ();
		}	//else do nothing, no high score set
		GameControl.control.LoadLevel ("MainMenu");	//return to menu screen
	}

	int getHighScore(string userName) {
		if(userName.Equals("")) {
			userName = "Default Player";
			Debug.Log("No User Name Entered");
		}

		if (!GameControl.control.scores.ContainsKey(userName)) {	//no user of that name in the dictionary,
			GameControl.control.scores.Add(userName, 0); 			//create new entry in the dictionary
			return GameControl.control.scores[userName];			//will return 0
		} else {
			return  GameControl.control.scores [userName];			//will return user's high score
		}
	}

	void OnTriggerEnter(Collider other)
	{
		if (other.gameObject.CompareTag ("coin")) {
			other.gameObject.SetActive (false);
		}
		if (other.gameObject.CompareTag ("treasure")) {
			other.gameObject.SetActive (false);
		}
	}


}
