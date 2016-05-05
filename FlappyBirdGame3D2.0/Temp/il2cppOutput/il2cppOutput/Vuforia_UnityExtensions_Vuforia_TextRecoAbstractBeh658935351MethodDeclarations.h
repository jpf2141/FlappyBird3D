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
struct TextRecoAbstractBehaviour_t658935351_0;
// Vuforia.ITextRecoEventHandler
struct ITextRecoEventHandler_t_502074643_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t904956235_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t_1946509586_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_WordFilterMode1730249245.h"
#include "Vuforia_UnityExtensions_Vuforia_WordPrefabCreation_565184600.h"

// System.Boolean Vuforia.TextRecoAbstractBehaviour::get_IsInitialized()
extern "C"  bool TextRecoAbstractBehaviour_get_IsInitialized_m1313525034_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Awake()
extern "C"  void TextRecoAbstractBehaviour_Awake_m300993500_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Start()
extern "C"  void TextRecoAbstractBehaviour_Start_m_989473927_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnEnable()
extern "C"  void TextRecoAbstractBehaviour_OnEnable_m686247533_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnDisable()
extern "C"  void TextRecoAbstractBehaviour_OnDisable_m239774304_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnDestroy()
extern "C"  void TextRecoAbstractBehaviour_OnDestroy_m_1877660942_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::RegisterTextRecoEventHandler(Vuforia.ITextRecoEventHandler)
extern "C"  void TextRecoAbstractBehaviour_RegisterTextRecoEventHandler_m_211723121_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextRecoAbstractBehaviour::UnregisterTextRecoEventHandler(Vuforia.ITextRecoEventHandler)
extern "C"  bool TextRecoAbstractBehaviour_UnregisterTextRecoEventHandler_m1023863560_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::StartTextTracker()
extern "C"  void TextRecoAbstractBehaviour_StartTextTracker_m1337750004_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::StopTextTracker()
extern "C"  void TextRecoAbstractBehaviour_StopTextTracker_m1413406144_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::SetupWordList()
extern "C"  void TextRecoAbstractBehaviour_SetupWordList_m2133675196_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::NotifyEventHandlersOfChanges(System.Collections.Generic.IEnumerable`1<Vuforia.Word>,System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>)
extern "C"  void TextRecoAbstractBehaviour_NotifyEventHandlersOfChanges_m_2054978650_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, Object_t* ___lostWords, Object_t* ___newWords, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_WordListFile()
extern "C"  String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_WordListFile_m_1940734994_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_WordListFile(System.String)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_WordListFile_m_1669118557_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_CustomWordListFile()
extern "C"  String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_CustomWordListFile_m_368431361_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_CustomWordListFile(System.String)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_CustomWordListFile_m752598770_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_AdditionalCustomWords()
extern "C"  String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_AdditionalCustomWords_m288836201_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_AdditionalCustomWords(System.String)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_AdditionalCustomWords_m1869779018_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordFilterMode Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_FilterMode()
extern "C"  int32_t TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_FilterMode_m471837996_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_FilterMode(Vuforia.WordFilterMode)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_FilterMode_m1277203557_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_FilterListFile()
extern "C"  String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_FilterListFile_m_134688612_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_FilterListFile(System.String)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_FilterListFile_m_459799563_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_AdditionalFilterWords()
extern "C"  String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_AdditionalFilterWords_m_1427815294_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_AdditionalFilterWords(System.String)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_AdditionalFilterWords_m1551075025_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordPrefabCreationMode Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_WordPrefabCreationMode()
extern "C"  int32_t TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_WordPrefabCreationMode_m547944438_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_WordPrefabCreationMode(Vuforia.WordPrefabCreationMode)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_WordPrefabCreationMode_m_239122321_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_MaximumWordInstances()
extern "C"  int32_t TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_MaximumWordInstances_m2062396551_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_MaximumWordInstances(System.Int32)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_MaximumWordInstances_m_1369011072_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnVuforiaInitialized()
extern "C"  void TextRecoAbstractBehaviour_OnVuforiaInitialized_m_2052400932_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnVuforiaStarted()
extern "C"  void TextRecoAbstractBehaviour_OnVuforiaStarted_m1647892169_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnTrackablesUpdated()
extern "C"  void TextRecoAbstractBehaviour_OnTrackablesUpdated_m585877093_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnPause(System.Boolean)
extern "C"  void TextRecoAbstractBehaviour_OnPause_m_1492746075_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::.ctor()
extern "C"  void TextRecoAbstractBehaviour__ctor_m63388281_0 (TextRecoAbstractBehaviour_t658935351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
