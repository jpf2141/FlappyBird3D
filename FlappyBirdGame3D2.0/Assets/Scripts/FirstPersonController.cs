using UnityEngine;
using System.Collections;

public class FirstPersonController : MonoBehaviour {
	public GameObject flappybird;


	// Use this for initialization
	void Start () {
		gameObject.transform.position = flappybird.transform.position;
	}
	
	// Update is called once per frame
	void Update () {
	}
}
