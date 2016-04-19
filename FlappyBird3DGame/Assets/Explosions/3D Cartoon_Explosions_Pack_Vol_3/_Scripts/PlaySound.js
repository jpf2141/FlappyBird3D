var sound : AudioClip;
 
 function Start(){
     GetComponent.<AudioSource>().clip = sound;
 }
     
function Update(){
	if (Input.GetButtonUp("Fire1")){
		if (!GetComponent.<AudioSource>().isPlaying){
			GetComponent.<AudioSource>().PlayOneShot(sound);
			
		}else{
			GetComponent.<AudioSource>().Stop();
		}
	}
}
