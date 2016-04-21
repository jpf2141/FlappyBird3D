using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;


public class GameControl : MonoBehaviour {

	public static GameControl control;
	public string name;
	public int score;

	public Dictionary<string, int> scores = new Dictionary<string, int>();


	//loads inputted level
	public void LoadLevel(string level){
		Application.LoadLevel(level);
	}

	// Use this for initialization
	void Awake () {
		if (control == null) {
			DontDestroyOnLoad (gameObject);
			control = this;
		} else if (control != this) {
			Destroy (gameObject);
		}


		control.Load ();	//load our saved shit


	}

	public void Save() {
		BinaryFormatter bf = new BinaryFormatter ();
		FileStream file = File.Create (Application.persistentDataPath + "/playerInfo.dat");

		PlayerData data = new PlayerData ();
		try
		{
			data.scores = control.scores;
		}
		catch (ArgumentException)
		{
			Console.WriteLine("An element with Key = \"txt\" already exists.");
		}

		bf.Serialize (file, data);
		file.Close ();

	}

	public void Load() {
		if (File.Exists (Application.persistentDataPath + "/playerInfo.dat")) {
			BinaryFormatter bf = new BinaryFormatter();
			FileStream file = File.Open(Application.persistentDataPath + "/playerInfo.dat", FileMode.Open);
			PlayerData data = (PlayerData)bf.Deserialize(file); 
			file.Close();


			scores = data.scores;


			//control.Save ();

			Debug.Log ("poop");

		}
	}

	public void setName(string name){
		name = name;
		Debug.Log (name);
	}


}


[Serializable]
class PlayerData { 
	public Dictionary<string, int> scores = new Dictionary<string, int>();
}
