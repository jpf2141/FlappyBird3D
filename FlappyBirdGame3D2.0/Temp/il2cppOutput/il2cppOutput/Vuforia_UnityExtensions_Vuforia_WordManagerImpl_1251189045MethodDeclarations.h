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

// Vuforia.WordManagerImpl
struct WordManagerImpl_t_1251189045_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t_1946509586_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t904956235_0;
// Vuforia.Word
struct Word_t_1803922622_0;
// Vuforia.WordAbstractBehaviour
struct WordAbstractBehaviour_t_111843431_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour>
struct IEnumerable_1_t960092054_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t728963554_0;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t953134047_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordData>
struct IEnumerable_1_t_463106865_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>
struct IEnumerable_1_t_1116866958_0;
// Vuforia.WordResult
struct WordResult_t_1421996545_0;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_WordPrefabCreation_565184600.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetActiveWordResults()
extern "C"  Object_t* WordManagerImpl_GetActiveWordResults_m1652744246_0 (WordManagerImpl_t_1251189045_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetNewWords()
extern "C"  Object_t* WordManagerImpl_GetNewWords_m_1393966917_0 (WordManagerImpl_t_1251189045_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word> Vuforia.WordManagerImpl::GetLostWords()
extern "C"  Object_t* WordManagerImpl_GetLostWords_m424851474_0 (WordManagerImpl_t_1251189045_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordManagerImpl::TryGetWordBehaviour(Vuforia.Word,Vuforia.WordAbstractBehaviour&)
extern "C"  bool WordManagerImpl_TryGetWordBehaviour_m_241780498_0 (WordManagerImpl_t_1251189045_0 * __this, Object_t * ___word, WordAbstractBehaviour_t_111843431_0 ** ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::GetTrackableBehaviours()
extern "C"  Object_t* WordManagerImpl_GetTrackableBehaviours_m1179222419_0 (WordManagerImpl_t_1251189045_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::DestroyWordBehaviour(Vuforia.WordAbstractBehaviour,System.Boolean)
extern "C"  void WordManagerImpl_DestroyWordBehaviour_m_1220386776_0 (WordManagerImpl_t_1251189045_0 * __this, WordAbstractBehaviour_t_111843431_0 * ___behaviour, bool ___destroyGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates(Vuforia.WordPrefabCreationMode,System.Int32)
extern "C"  void WordManagerImpl_InitializeWordBehaviourTemplates_m682333950_0 (WordManagerImpl_t_1251189045_0 * __this, int32_t ___wordPrefabCreationMode, int32_t ___maxInstances, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates()
extern "C"  void WordManagerImpl_InitializeWordBehaviourTemplates_m1764045013_0 (WordManagerImpl_t_1251189045_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::RemoveDestroyedTrackables()
extern "C"  void WordManagerImpl_RemoveDestroyedTrackables_m598107078_0 (WordManagerImpl_t_1251189045_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/WordData[],Vuforia.VuforiaManagerImpl/WordResultData[])
extern "C"  void WordManagerImpl_UpdateWords_m600704857_0 (WordManagerImpl_t_1251189045_0 * __this, Transform_t1584899523_0 * ___arCameraTransform, WordDataU5BU5D_t728963554_0* ___newWordData, WordResultDataU5BU5D_t953134047_0* ___wordResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::SetWordBehavioursToNotFound()
extern "C"  void WordManagerImpl_SetWordBehavioursToNotFound_m1281789423_0 (WordManagerImpl_t_1251189045_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::CleanupWordBehaviours()
extern "C"  void WordManagerImpl_CleanupWordBehaviours_m241774215_0 (WordManagerImpl_t_1251189045_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordData>,System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>)
extern "C"  void WordManagerImpl_UpdateWords_m942394850_0 (WordManagerImpl_t_1251189045_0 * __this, Object_t* ___newWordData, Object_t* ___wordResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordResultPoses(UnityEngine.Transform,System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>)
extern "C"  void WordManagerImpl_UpdateWordResultPoses_m_185541290_0 (WordManagerImpl_t_1251189045_0 * __this, Transform_t1584899523_0 * ___arCameraTransform, Object_t* ___wordResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::AssociateWordResultsWithBehaviours()
extern "C"  void WordManagerImpl_AssociateWordResultsWithBehaviours_m_20949783_0 (WordManagerImpl_t_1251189045_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UnregisterLostWords()
extern "C"  void WordManagerImpl_UnregisterLostWords_m1173057804_0 (WordManagerImpl_t_1251189045_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordBehaviourPoses()
extern "C"  void WordManagerImpl_UpdateWordBehaviourPoses_m_1687239529_0 (WordManagerImpl_t_1251189045_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult)
extern "C"  WordAbstractBehaviour_t_111843431_0 * WordManagerImpl_AssociateWordBehaviour_m596166131_0 (WordManagerImpl_t_1251189045_0 * __this, WordResult_t_1421996545_0 * ___wordResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult,Vuforia.WordAbstractBehaviour)
extern "C"  WordAbstractBehaviour_t_111843431_0 * WordManagerImpl_AssociateWordBehaviour_m_1300149158_0 (WordManagerImpl_t_1251189045_0 * __this, WordResult_t_1421996545_0 * ___wordResult, WordAbstractBehaviour_t_111843431_0 * ___wordBehaviourTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::InstantiateWordBehaviour(Vuforia.WordAbstractBehaviour)
extern "C"  WordAbstractBehaviour_t_111843431_0 * WordManagerImpl_InstantiateWordBehaviour_m_2025207309_0 (Object_t * __this /* static, unused */, WordAbstractBehaviour_t_111843431_0 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::CreateWordBehaviour()
extern "C"  WordAbstractBehaviour_t_111843431_0 * WordManagerImpl_CreateWordBehaviour_m_1136788856_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::.ctor()
extern "C"  void WordManagerImpl__ctor_m_1507861339_0 (WordManagerImpl_t_1251189045_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
