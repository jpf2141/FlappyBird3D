struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 87 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//6. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//7. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//8. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//9. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//10. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//11. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//12. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//13. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//14. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//15. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//16. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//17. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//18. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//19. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//20. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//21. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//22. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//23. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//24. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//25. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//26. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//27. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//28. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//29. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//30. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//31. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//32. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//33. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//34. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//35. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//36. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//37. NavMeshAgent
	void RegisterClass_NavMeshAgent();
	RegisterClass_NavMeshAgent();

	//38. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//39. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//40. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//41. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//42. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//43. WebCamTexture
	void RegisterClass_WebCamTexture();
	RegisterClass_WebCamTexture();

	//44. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//45. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//46. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//47. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//48. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//49. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//50. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//51. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//52. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//53. AudioMixerGroup
	void RegisterClass_AudioMixerGroup();
	RegisterClass_AudioMixerGroup();

	//54. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//55. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//56. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//57. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//58. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//59. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//60. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//61. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//62. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//63. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//64. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//65. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//66. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//67. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//68. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//69. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//70. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//71. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//72. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//73. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//74. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//75. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//76. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//77. NavMeshAreas
	void RegisterClass_NavMeshAreas();
	RegisterClass_NavMeshAreas();

	//78. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//79. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//80. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//81. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//82. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//83. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//84. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//85. AudioMixerSnapshot
	void RegisterClass_AudioMixerSnapshot();
	RegisterClass_AudioMixerSnapshot();

	//86. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
