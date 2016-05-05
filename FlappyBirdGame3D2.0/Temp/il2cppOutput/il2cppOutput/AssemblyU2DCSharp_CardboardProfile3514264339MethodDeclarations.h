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

// CardboardProfile
struct CardboardProfile_t3514264339;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// System.Double[]
struct DoubleU5BU5D_t1048280995;
// System.Double[,]
struct DoubleU5BU2CU5D_t1048280996;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CardboardProfile_ScreenSizes1613396838.h"
#include "AssemblyU2DCSharp_CardboardProfile_DeviceTypes114980771.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "AssemblyU2DCSharp_CardboardProfile_Distortion435440829.h"

// System.Void CardboardProfile::.ctor()
extern "C"  void CardboardProfile__ctor_m2692317416 (CardboardProfile_t3514264339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardProfile::.cctor()
extern "C"  void CardboardProfile__cctor_m1375365061 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile CardboardProfile::Clone()
extern "C"  CardboardProfile_t3514264339 * CardboardProfile_Clone_m3818106969 (CardboardProfile_t3514264339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardProfile::get_VerticalLensOffset()
extern "C"  float CardboardProfile_get_VerticalLensOffset_m3874858808 (CardboardProfile_t3514264339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile CardboardProfile::GetKnownProfile(CardboardProfile/ScreenSizes,CardboardProfile/DeviceTypes)
extern "C"  CardboardProfile_t3514264339 * CardboardProfile_GetKnownProfile_m2697412817 (Il2CppObject * __this /* static, unused */, int32_t ___screenSize, int32_t ___deviceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardProfile::GetLeftEyeVisibleTanAngles(System.Single[])
extern "C"  void CardboardProfile_GetLeftEyeVisibleTanAngles_m3891165834 (CardboardProfile_t3514264339 * __this, SingleU5BU5D_t1219431280* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardProfile::GetLeftEyeNoLensTanAngles(System.Single[])
extern "C"  void CardboardProfile_GetLeftEyeNoLensTanAngles_m3355921205 (CardboardProfile_t3514264339 * __this, SingleU5BU5D_t1219431280* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect CardboardProfile::GetLeftEyeVisibleScreenRect(System.Single[])
extern "C"  Rect_t1525428817  CardboardProfile_GetLeftEyeVisibleScreenRect_m4104603223 (CardboardProfile_t3514264339 * __this, SingleU5BU5D_t1219431280* ___undistortedFrustum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardProfile::GetMaxRadius(System.Single[])
extern "C"  float CardboardProfile_GetMaxRadius_m1330854785 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t1219431280* ___tanAngleRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] CardboardProfile::solveLinear(System.Double[,],System.Double[])
extern "C"  DoubleU5BU5D_t1048280995* CardboardProfile_solveLinear_m1504292423 (Il2CppObject * __this /* static, unused */, DoubleU5BU2CU5D_t1048280996* ___a, DoubleU5BU5D_t1048280995* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] CardboardProfile::solveLeastSquares(System.Double[,],System.Double[])
extern "C"  DoubleU5BU5D_t1048280995* CardboardProfile_solveLeastSquares_m597961519 (Il2CppObject * __this /* static, unused */, DoubleU5BU2CU5D_t1048280996* ___matA, DoubleU5BU5D_t1048280995* ___vecY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile/Distortion CardboardProfile::ApproximateInverse(System.Single[],System.Single,System.Int32)
extern "C"  Distortion_t435440829  CardboardProfile_ApproximateInverse_m68716155 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t1219431280* ___coef, float ___maxRadius, int32_t ___numSamples, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile/Distortion CardboardProfile::ApproximateInverse(CardboardProfile/Distortion,System.Single,System.Int32)
extern "C"  Distortion_t435440829  CardboardProfile_ApproximateInverse_m151061419 (Il2CppObject * __this /* static, unused */, Distortion_t435440829  ___distort, float ___maxRadius, int32_t ___numSamples, const MethodInfo* method) IL2CPP_METHOD_ATTR;
