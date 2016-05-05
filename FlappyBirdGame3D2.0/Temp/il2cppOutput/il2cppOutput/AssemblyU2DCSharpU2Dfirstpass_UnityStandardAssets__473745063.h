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
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct AxisTouchButton_t_473745063_0;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t_1861068484_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct  AxisTouchButton_t_473745063_0  : public MonoBehaviour_t_92453903_0
{
	// System.String UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisName
	String_t* ___axisName_2;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisValue
	float ___axisValue_3;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::responseSpeed
	float ___responseSpeed_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::returnToCentreSpeed
	float ___returnToCentreSpeed_5;
	// UnityStandardAssets.CrossPlatformInput.AxisTouchButton UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_PairedWith
	AxisTouchButton_t_473745063_0 * ___m_PairedWith_6;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_Axis
	VirtualAxis_t_1861068484_0 * ___m_Axis_7;
};
