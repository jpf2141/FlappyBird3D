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
	//Total: 86 classes
	//0. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//1. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//6. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//7. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//8. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//9. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//10. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//11. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//12. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//13. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//14. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//15. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//16. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//17. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//18. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//19. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//20. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//21. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//22. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//23. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//24. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//25. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//26. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//27. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//28. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//29. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//30. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//31. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//32. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//33. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//34. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//35. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//36. NavMeshAgent
	void RegisterClass_NavMeshAgent();
	RegisterClass_NavMeshAgent();

	//37. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//38. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//39. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//40. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//41. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//42. WebCamTexture
	void RegisterClass_WebCamTexture();
	RegisterClass_WebCamTexture();

	//43. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//44. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//45. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//46. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//47. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//48. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//49. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//50. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//51. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//52. AudioMixerGroup
	void RegisterClass_AudioMixerGroup();
	RegisterClass_AudioMixerGroup();

	//53. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//54. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//55. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//56. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//57. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//58. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//59. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//60. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//61. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//62. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//63. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//64. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//65. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//66. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//67. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//68. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//69. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//70. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//71. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//72. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//73. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//74. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//75. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//76. NavMeshAreas
	void RegisterClass_NavMeshAreas();
	RegisterClass_NavMeshAreas();

	//77. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//78. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//79. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//80. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//81. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//82. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//83. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//84. AudioMixerSnapshot
	void RegisterClass_AudioMixerSnapshot();
	RegisterClass_AudioMixerSnapshot();

	//85. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
