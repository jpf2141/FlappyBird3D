#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_t135338868_0;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t_1861068484_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1951692476.h"

// UnityStandardAssets.CrossPlatformInput.TiltInput
struct  TiltInput_t_123365834_0  : public MonoBehaviour_t_92453903_0
{
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping UnityStandardAssets.CrossPlatformInput.TiltInput::mapping
	AxisMapping_t135338868_0 * ___mapping_2;
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions UnityStandardAssets.CrossPlatformInput.TiltInput::tiltAroundAxis
	int32_t ___tiltAroundAxis_3;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::fullTiltAngle
	float ___fullTiltAngle_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::centreAngleOffset
	float ___centreAngleOffset_5;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TiltInput::m_SteerAxis
	VirtualAxis_t_1861068484_0 * ___m_SteerAxis_6;
};
