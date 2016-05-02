using UnityEngine;
using System.Collections;

public class DestroyerScript : MonoBehaviour {

	void OnTriggerEnter3D(Collider3D other)
	{
		if(other.tag == "Player")
		{
			Debug.Break();
		}
		if (other.gameObject.transform.parent)
		{
			Destroy (other.gameObject.transform.parent.gameObject);
		}
		else 
		{
			Destroy (other.gameObject);
		}
}
