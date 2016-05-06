Team Name: Prestige Worldwide 
Team Number: 

Names and UNIs: 
	Kyle Jackson - kdj2109
	Josh From - jpf2141 
	Cassie Wes - ciw2109
	Chris Chang - cyc2136

Date of Submission: May 5th, 2016

Development Platform: Unity 5.3.1f 

Mobile Platforms, OS Versions, and device names: iOS; 9.3 iOS; iPhone 6 

Project Title: Flappy Bird Game 3D 3.0 

Project Directory Overview: 
	Assets 
		_Scenes - contains Game.unity scene and Menu.unity scene 
		Materials - contains all meterails used 
		Scripts - contains all our C# scrips 
		Vuforia - version 5.5 
		Cardboard - version 7.0 
		Plugins 
		Prefabs 
		Progress bar - for the health and score bars
		Resources - selectedMaterial for selection 
		Standard assets 
		Streaming assets 
		UI and Item Sound Effects - audio for the game
		Editor - contains QCAR


Location of video: https://www.youtube.com/watch?v=_6W9Id0UBkU&feature=youtu.be

Instructions for using the app: 
	System usage: To use the game, build the application onto an Android or iOS device from the Unity Game Engine.  The user will need 3 image targets, which are the stones, leaves, and vortex images.  The stones image target is used for the playing field, while the leaves and vortex images are used for the joystick and gun aimer, respectively.  Along with the image targets, Google Cardboard is needed to allow for two free hands.  To control the Flappy Bird, tilt the joystick in the respective direction and adjust its distance from the camera to move the bird up and down.  To select and destroy clouds, adjust the rotation of the Flappy Bird using the gun aimer that is rendered on the vortex rectangular image target.  The user may find it beneficial to refer to the first person way finding camera with crosshairs to help with this process.  The objective of the game is to gather as many coins as possible to gain points and level up, while also dodging both clouds and pipes.  The user has the option to select an easy or hard difficulty by tilting his or her head at the menu screen.

Missing features: We implemented scaling via tilting the iPhone.  However, the Flappy Bird became jittery during game play.  As such, we removed this feature.

Bugs in your code and Unity: The Joystick can become inverted during some iterations of game play.  Simply rotate the image target 180 degrees if interveted play is not suitable for the user.  During gameplay, if the user loses the main stones image target, the game objects located within the stadium will become unbound and often appear in undesired places.  The game must be restarted via closing the app on the mobile device.  Lastly, the flappy bird can magically translate out of the box colliders surrounding the stadium game object.  The must also be restarted if this happens, as the flappy bird will remain alive for as long as the application is running. 

Asset sources: 
	Flappy Bird: https://3dwarehouse.sketcup.com/model.html?id=7a65f8802fa5fad07a780ed54bbe4fec
	Cloud: http://3dwarehouse.sketchup.com/model.html?id=f11b4d4832089744d485372bb746f3c7
	Pipe: https://3dwarehouse.sketchup.com/model.html?id=7a65f8802fa5fad06a780ed54bbe4fec
	Stadium: https://3dwarehouse.sketchup.com/model.html?id=3e74e162ee2988b240bc7441f55481e4
	Vuforia 5.5
	Google Cardboard 7.0