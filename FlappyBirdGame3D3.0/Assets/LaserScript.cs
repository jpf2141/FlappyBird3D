using UnityEngine;
using System.Collections;

public class LaserScript : MonoBehaviour 
{
	LineRenderer line;

	void Start () 
	{
		line = gameObject.GetComponent<LineRenderer> ();
		line.enabled = false;
	}
	void Update () 
	{
		if(Input.GetButtonDown("Fire1"))
		{
			StopCoroutine("FireLaser");
	
		}
	}
	IEnumerator FireLaser()
	{
		line.enabled = true;

		while(Input.GetButton("Fire1"))
		{
			Ray ray = new Ray(transform.position, transform.forward);
			RaycastHit hit;

			line.SetPosition(0, ray.origin);

			if(Physics.Raycast(ray, out hit, 100))
			{
				line.SetPosition(1, hit.point);
				if(hit.rigidbody)
				{
					Debug.Log ("hit");
					//hit.rigidbody.AddForceAtPosition(transform.forward_ * 10, hit.point);
				}
			}
			else
				line.SetPosition(1, ray.GetPoint(100));

			yield return null;
		}

		line.enabled = false;
	}
}