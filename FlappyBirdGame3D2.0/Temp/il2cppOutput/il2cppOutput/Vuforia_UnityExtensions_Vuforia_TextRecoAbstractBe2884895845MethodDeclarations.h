#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.TextRecoAbstractBehaviour
struct TextRecoAbstractBehaviour_t2884895845;
// Vuforia.ITextRecoEventHandler
struct ITextRecoEventHandler_t4066948379;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t1314894132;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t448781809;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Vuforia_UnityExtensions_Vuforia_WordFilterMode2162328859.h"
#include "Vuforia_UnityExtensions_Vuforia_WordPrefabCreation3189805734.h"

// System.Boolean Vuforia.TextRecoAbstractBehaviour::get_IsInitialized()
extern "C"  bool TextRecoAbstractBehaviour_get_IsInitialized_m1313525034 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Awake()
extern "C"  void TextRecoAbstractBehaviour_Awake_m300993500 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Start()
extern "C"  void TextRecoAbstractBehaviour_Start_m3305493369 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnEnable()
extern "C"  void TextRecoAbstractBehaviour_OnEnable_m686247533 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnDisable()
extern "C"  void TextRecoAbstractBehaviour_OnDisable_m239774304 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnDestroy()
extern "C"  void TextRecoAbstractBehaviour_OnDestroy_m2417306354 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::RegisterTextRecoEventHandler(Vuforia.ITextRecoEventHandler)
extern "C"  void TextRecoAbstractBehaviour_RegisterTextRecoEventHandler_m4083244175 (TextRecoAbstractBehaviour_t2884895845 * __this, Il2CppObject * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextRecoAbstractBehaviour::UnregisterTextRecoEventHandler(Vuforia.ITextRecoEventHandler)
extern "C"  bool TextRecoAbstractBehaviour_UnregisterTextRecoEventHandler_m1023863560 (TextRecoAbstractBehaviour_t2884895845 * __this, Il2CppObject * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::StartTextTracker()
extern "C"  void TextRecoAbstractBehaviour_StartTextTracker_m1337750004 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::StopTextTracker()
extern "C"  void TextRecoAbstractBehaviour_StopTextTracker_m1413406144 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::SetupWordList()
extern "C"  void TextRecoAbstractBehaviour_SetupWordList_m2133675196 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::NotifyEventHandlersOfChanges(System.Collections.Generic.IEnumerable`1<Vuforia.Word>,System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>)
extern "C"  void TextRecoAbstractBehaviour_NotifyEventHandlersOfChanges_m2239988646 (TextRecoAbstractBehaviour_t2884895845 * __this, Il2CppObject* ___lostWords, Il2CppObject* ___newWords, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_WordListFile()
extern "C"  String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_WordListFile_m2354232302 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_WordListFile(System.String)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_WordListFile_m2625848739 (TextRecoAbstractBehaviour_t2884895845 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_CustomWordListFile()
extern "C"  String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_CustomWordListFile_m3926535935 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_CustomWordListFile(System.String)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_CustomWordListFile_m752598770 (TextRecoAbstractBehaviour_t2884895845 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_AdditionalCustomWords()
extern "C"  String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_AdditionalCustomWords_m288836201 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_AdditionalCustomWords(System.String)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_AdditionalCustomWords_m1869779018 (TextRecoAbstractBehaviour_t2884895845 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordFilterMode Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_FilterMode()
extern "C"  int32_t TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_FilterMode_m471837996 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_FilterMode(Vuforia.WordFilterMode)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_FilterMode_m1277203557 (TextRecoAbstractBehaviour_t2884895845 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_FilterListFile()
extern "C"  String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_FilterListFile_m4160278684 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_FilterListFile(System.String)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_FilterListFile_m3835167733 (TextRecoAbstractBehaviour_t2884895845 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_AdditionalFilterWords()
extern "C"  String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_AdditionalFilterWords_m2867152002 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_AdditionalFilterWords(System.String)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_AdditionalFilterWords_m1551075025 (TextRecoAbstractBehaviour_t2884895845 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordPrefabCreationMode Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_WordPrefabCreationMode()
extern "C"  int32_t TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_WordPrefabCreationMode_m547944438 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_WordPrefabCreationMode(Vuforia.WordPrefabCreationMode)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_WordPrefabCreationMode_m4055844975 (TextRecoAbstractBehaviour_t2884895845 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_MaximumWordInstances()
extern "C"  int32_t TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_MaximumWordInstances_m2062396551 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_MaximumWordInstances(System.Int32)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_MaximumWordInstances_m2925956224 (TextRecoAbstractBehaviour_t2884895845 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnVuforiaInitialized()
extern "C"  void TextRecoAbstractBehaviour_OnVuforiaInitialized_m2242566364 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnVuforiaStarted()
extern "C"  void TextRecoAbstractBehaviour_OnVuforiaStarted_m1647892169 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnTrackablesUpdated()
extern "C"  void TextRecoAbstractBehaviour_OnTrackablesUpdated_m585877093 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnPause(System.Boolean)
extern "C"  void TextRecoAbstractBehaviour_OnPause_m2802221221 (TextRecoAbstractBehaviour_t2884895845 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::.ctor()
extern "C"  void TextRecoAbstractBehaviour__ctor_m63388281 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
