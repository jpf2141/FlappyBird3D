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
// UnityEngine.Shader
struct Shader_t1278883054_0;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t_1261093167_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "Vuforia_UnityExtensions_Vuforia_HideExcessAreaAbst1001863760.h"

// Vuforia.VideoBackgroundManagerAbstractBehaviour
struct  VideoBackgroundManagerAbstractBehaviour_t1685190783_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.Texture2D Vuforia.VideoBackgroundManagerAbstractBehaviour::mTexture
	Texture2D_t_485082364_0 * ___mTexture_2;
	// System.Boolean Vuforia.VideoBackgroundManagerAbstractBehaviour::mVideoBgConfigChanged
	bool ___mVideoBgConfigChanged_3;
	// System.IntPtr Vuforia.VideoBackgroundManagerAbstractBehaviour::mNativeTexturePtr
	IntPtr_t ___mNativeTexturePtr_4;
	// Vuforia.HideExcessAreaAbstractBehaviour/CLIPPING_MODE Vuforia.VideoBackgroundManagerAbstractBehaviour::mClippingMode
	int32_t ___mClippingMode_5;
	// UnityEngine.Shader Vuforia.VideoBackgroundManagerAbstractBehaviour::mMatteShader
	Shader_t1278883054_0 * ___mMatteShader_6;
	// System.Boolean Vuforia.VideoBackgroundManagerAbstractBehaviour::mVideoBackgroundEnabled
	bool ___mVideoBackgroundEnabled_7;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.VideoBackgroundManagerAbstractBehaviour::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t_1261093167_0 * ___mVuforiaBehaviour_8;
};
