#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t_2105059803_0;

#include "AssemblyU2DCSharp_BaseVRDevice1612809342.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"

// BaseCardboardDevice
struct  BaseCardboardDevice_t1657130464_0  : public BaseVRDevice_t1612809342_0
{
	// System.Single[] BaseCardboardDevice::headData
	SingleU5BU5D_t_2105059803_0* ___headData_26;
	// System.Single[] BaseCardboardDevice::viewData
	SingleU5BU5D_t_2105059803_0* ___viewData_27;
	// System.Single[] BaseCardboardDevice::profileData
	SingleU5BU5D_t_2105059803_0* ___profileData_28;
	// UnityEngine.Matrix4x4 BaseCardboardDevice::headView
	Matrix4x4_t1577636070_0  ___headView_29;
	// UnityEngine.Matrix4x4 BaseCardboardDevice::leftEyeView
	Matrix4x4_t1577636070_0  ___leftEyeView_30;
	// UnityEngine.Matrix4x4 BaseCardboardDevice::rightEyeView
	Matrix4x4_t1577636070_0  ___rightEyeView_31;
	// System.Boolean BaseCardboardDevice::debugDisableNativeProjections
	bool ___debugDisableNativeProjections_32;
	// System.Boolean BaseCardboardDevice::debugDisableNativeUILayer
	bool ___debugDisableNativeUILayer_33;
};
