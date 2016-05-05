#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.EyewearCalibrationProfileManager
struct EyewearCalibrationProfileManager_t_1508026570_0;
// Vuforia.EyewearUserCalibrator
struct EyewearUserCalibrator_t287316484_0;

#include "Vuforia_UnityExtensions_Vuforia_EyewearDevice_1667579282.h"

// Vuforia.DedicatedEyewearDevice
struct  DedicatedEyewearDevice_t_493974481_0  : public EyewearDevice_t_1667579282_0
{
	// Vuforia.EyewearCalibrationProfileManager Vuforia.DedicatedEyewearDevice::mProfileManager
	EyewearCalibrationProfileManager_t_1508026570_0 * ___mProfileManager_1;
	// Vuforia.EyewearUserCalibrator Vuforia.DedicatedEyewearDevice::mCalibrator
	EyewearUserCalibrator_t287316484_0 * ___mCalibrator_2;
};
