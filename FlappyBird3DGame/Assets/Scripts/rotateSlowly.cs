using UnityEngine;
using System.Collections;

public class rotate : MonoBehaviour {

	public Vector3 tempPosition;

	// Use this for initialization
	void Start () {
		tempPosition = transform.localPosition;
	}

	// Update is called once per frame
	void Update () {
		transform.Rotate (0.0f, 125*Time.deltaTime, 0.0f); 
	}
}
