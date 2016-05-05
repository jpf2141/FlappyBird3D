using UnityEngine;
using System.Collections;

public class GunController : MonoBehaviour {
	public GameObject flappybird;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		flappybird.transform.rotation = transform.rotation;
	}
}
