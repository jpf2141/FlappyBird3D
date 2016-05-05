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
// UnityEngine.UI.Text
struct Text_t_204341102_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// UnityStandardAssets.Utility.FPSCounter
struct  FPSCounter_t_31308683_0  : public MonoBehaviour_t_92453903_0
{
	// System.Int32 UnityStandardAssets.Utility.FPSCounter::m_FpsAccumulator
	int32_t ___m_FpsAccumulator_4;
	// System.Single UnityStandardAssets.Utility.FPSCounter::m_FpsNextPeriod
	float ___m_FpsNextPeriod_5;
	// System.Int32 UnityStandardAssets.Utility.FPSCounter::m_CurrentFps
	int32_t ___m_CurrentFps_6;
	// UnityEngine.UI.Text UnityStandardAssets.Utility.FPSCounter::m_Text
	Text_t_204341102_0 * ___m_Text_7;
};
