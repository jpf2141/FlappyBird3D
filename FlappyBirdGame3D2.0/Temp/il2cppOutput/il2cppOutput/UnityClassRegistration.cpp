struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

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
	//Total: 77 classes
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

	//25. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//26. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//27. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//28. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//29. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//30. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//31. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//32. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//33. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//34. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//35. WebCamTexture
	void RegisterClass_WebCamTexture();
	RegisterClass_WebCamTexture();

	//36. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//37. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//38. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//39. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//40. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//41. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//42. AudioMixerGroup
	void RegisterClass_AudioMixerGroup();
	RegisterClass_AudioMixerGroup();

	//43. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//44. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//45. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//46. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//47. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//48. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//49. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//50. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//51. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//52. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//53. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//54. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//55. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//56. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//57. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//58. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//59. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//60. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//61. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//62. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//63. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//64. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//65. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//66. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//67. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//68. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//69. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//70. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//71. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//72. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//73. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//74. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//75. AudioMixerSnapshot
	void RegisterClass_AudioMixerSnapshot();
	RegisterClass_AudioMixerSnapshot();

	//76. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
