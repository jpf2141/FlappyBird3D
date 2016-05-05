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
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t_1861068484_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__148055502.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// UnityStandardAssets.CrossPlatformInput.Joystick
struct  Joystick_t1981656307_0  : public MonoBehaviour_t_92453903_0
{
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick::MovementRange
	int32_t ___MovementRange_2;
	// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption UnityStandardAssets.CrossPlatformInput.Joystick::axesToUse
	int32_t ___axesToUse_3;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::horizontalAxisName
	String_t* ___horizontalAxisName_4;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::verticalAxisName
	String_t* ___verticalAxisName_5;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.Joystick::m_StartPos
	Vector3_t_725341337_0  ___m_StartPos_6;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseX
	bool ___m_UseX_7;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseY
	bool ___m_UseY_8;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_HorizontalVirtualAxis
	VirtualAxis_t_1861068484_0 * ___m_HorizontalVirtualAxis_9;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_VerticalVirtualAxis
	VirtualAxis_t_1861068484_0 * ___m_VerticalVirtualAxis_10;
};
