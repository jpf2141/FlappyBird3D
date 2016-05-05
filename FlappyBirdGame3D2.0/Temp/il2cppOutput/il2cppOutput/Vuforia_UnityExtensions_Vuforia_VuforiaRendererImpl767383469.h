#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t_485082364_0;

#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_70893587.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi1834030736.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_V_2015634094.h"

// Vuforia.VuforiaRendererImpl
struct  VuforiaRendererImpl_t767383469_0  : public VuforiaRenderer_t_70893587_0
{
	// Vuforia.VuforiaRenderer/VideoBGCfgData Vuforia.VuforiaRendererImpl::mVideoBGConfig
	VideoBGCfgData_t1834030736_0  ___mVideoBGConfig_1;
	// System.Boolean Vuforia.VuforiaRendererImpl::mVideoBGConfigSet
	bool ___mVideoBGConfigSet_2;
	// UnityEngine.Texture2D Vuforia.VuforiaRendererImpl::mVideoBackgroundTexture
	Texture2D_t_485082364_0 * ___mVideoBackgroundTexture_3;
	// System.Boolean Vuforia.VuforiaRendererImpl::mBackgroundTextureHasChanged
	bool ___mBackgroundTextureHasChanged_4;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaRendererImpl::mLastSetReflection
	int32_t ___mLastSetReflection_5;
};
