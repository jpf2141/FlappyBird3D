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

// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t2880150149;
// Vuforia.ImageTarget
struct ImageTarget_t2294340546;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t1377534133;
// Vuforia.VirtualButtonAbstractBehaviour
struct VirtualButtonAbstractBehaviour_t2124633940;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButtonAbstractBehaviour>
struct IEnumerable_1_t701821000;
// Vuforia.VirtualButton
struct VirtualButton_t3523578643;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageTargetType942778652.h"
#include "Vuforia_UnityExtensions_Vuforia_VirtualButtonAbstr2124633940.h"
#include "Vuforia_UnityExtensions_Vuforia_VirtualButton3523578643.h"

// Vuforia.ImageTarget Vuforia.ImageTargetAbstractBehaviour::get_ImageTarget()
extern "C"  Il2CppObject * ImageTargetAbstractBehaviour_get_ImageTarget_m2654862365 (ImageTargetAbstractBehaviour_t2880150149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::.ctor()
extern "C"  void ImageTargetAbstractBehaviour__ctor_m1309561199 (ImageTargetAbstractBehaviour_t2880150149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::CorrectScaleImpl()
extern "C"  bool ImageTargetAbstractBehaviour_CorrectScaleImpl_m809649511 (ImageTargetAbstractBehaviour_t2880150149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void ImageTargetAbstractBehaviour_InternalUnregisterTrackable_m1728995545 (ImageTargetAbstractBehaviour_t2880150149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void ImageTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m3151572808 (ImageTargetAbstractBehaviour_t2880150149 * __this, Vector3_t3525329789 * ___boundsMin, Vector3_t3525329789 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C"  void ImageTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m808361101 (ImageTargetAbstractBehaviour_t2880150149 * __this, Il2CppObject * ___reconstructionFromTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButtonAbstractBehaviour Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButton(System.String,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  VirtualButtonAbstractBehaviour_t2124633940 * ImageTargetAbstractBehaviour_CreateVirtualButton_m3558280461 (ImageTargetAbstractBehaviour_t2880150149 * __this, String_t* ___vbName, Vector2_t3525329788  ___position, Vector2_t3525329788  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButtonAbstractBehaviour Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButton(System.String,UnityEngine.Vector2,UnityEngine.GameObject)
extern "C"  VirtualButtonAbstractBehaviour_t2124633940 * ImageTargetAbstractBehaviour_CreateVirtualButton_m2609065285 (Il2CppObject * __this /* static, unused */, String_t* ___vbName, Vector2_t3525329788  ___localScale, GameObject_t4012695102 * ___immediateParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButtonAbstractBehaviour> Vuforia.ImageTargetAbstractBehaviour::GetVirtualButtonBehaviours()
extern "C"  Il2CppObject* ImageTargetAbstractBehaviour_GetVirtualButtonBehaviours_m693541762 (ImageTargetAbstractBehaviour_t2880150149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::DestroyVirtualButton(System.String)
extern "C"  void ImageTargetAbstractBehaviour_DestroyVirtualButton_m286976138 (ImageTargetAbstractBehaviour_t2880150149 * __this, String_t* ___vbName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.ImageTargetAbstractBehaviour::GetSize()
extern "C"  Vector2_t3525329788  ImageTargetAbstractBehaviour_GetSize_m2098307209 (ImageTargetAbstractBehaviour_t2880150149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::SetWidth(System.Single)
extern "C"  void ImageTargetAbstractBehaviour_SetWidth_m1349040338 (ImageTargetAbstractBehaviour_t2880150149 * __this, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::SetHeight(System.Single)
extern "C"  void ImageTargetAbstractBehaviour_SetHeight_m1316593397 (ImageTargetAbstractBehaviour_t2880150149 * __this, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.get_AspectRatio()
extern "C"  float ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_get_AspectRatio_m3528282808 (ImageTargetAbstractBehaviour_t2880150149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.get_ImageTargetType()
extern "C"  int32_t ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_get_ImageTargetType_m1346768350 (ImageTargetAbstractBehaviour_t2880150149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.SetAspectRatio(System.Single)
extern "C"  bool ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_SetAspectRatio_m3472364160 (ImageTargetAbstractBehaviour_t2880150149 * __this, float ___aspectRatio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.SetImageTargetType(Vuforia.ImageTargetType)
extern "C"  bool ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_SetImageTargetType_m1393656666 (ImageTargetAbstractBehaviour_t2880150149 * __this, int32_t ___imageTargetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.InitializeImageTarget(Vuforia.ImageTarget)
extern "C"  void ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_InitializeImageTarget_m1308943068 (ImageTargetAbstractBehaviour_t2880150149 * __this, Il2CppObject * ___imageTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.AssociateExistingVirtualButtonBehaviour(Vuforia.VirtualButtonAbstractBehaviour)
extern "C"  void ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_AssociateExistingVirtualButtonBehaviour_m3281483353 (ImageTargetAbstractBehaviour_t2880150149 * __this, VirtualButtonAbstractBehaviour_t2124633940 * ___virtualButtonBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.CreateMissingVirtualButtonBehaviours()
extern "C"  void ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_CreateMissingVirtualButtonBehaviours_m4265215089 (ImageTargetAbstractBehaviour_t2880150149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.TryGetVirtualButtonBehaviourByID(System.Int32,Vuforia.VirtualButtonAbstractBehaviour&)
extern "C"  bool ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_TryGetVirtualButtonBehaviourByID_m3574308744 (ImageTargetAbstractBehaviour_t2880150149 * __this, int32_t ___id, VirtualButtonAbstractBehaviour_t2124633940 ** ___virtualButtonBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButtonFromNative(Vuforia.VirtualButton)
extern "C"  void ImageTargetAbstractBehaviour_CreateVirtualButtonFromNative_m2530723122 (ImageTargetAbstractBehaviour_t2880150149 * __this, VirtualButton_t3523578643 * ___virtualButton, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::CreateNewVirtualButtonFromBehaviour(Vuforia.VirtualButtonAbstractBehaviour)
extern "C"  bool ImageTargetAbstractBehaviour_CreateNewVirtualButtonFromBehaviour_m3586487179 (ImageTargetAbstractBehaviour_t2880150149 * __this, VirtualButtonAbstractBehaviour_t2124633940 * ___newVBB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C"  bool ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m3820384295 (ImageTargetAbstractBehaviour_t2880150149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C"  void ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m3707470300 (ImageTargetAbstractBehaviour_t2880150149 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C"  Transform_t284553113 * ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m906652134 (ImageTargetAbstractBehaviour_t2880150149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C"  GameObject_t4012695102 * ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m74459726 (ImageTargetAbstractBehaviour_t2880150149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
