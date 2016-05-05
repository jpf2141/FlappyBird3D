#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1872284309_0;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1253062672_0;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t_1557060746_0;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t_927142044_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"

// Vuforia.DistortionRenderingBehaviour
struct  DistortionRenderingBehaviour_t1001845574_0  : public MonoBehaviour_t_92453903_0
{
	// System.Boolean Vuforia.DistortionRenderingBehaviour::mSingleTexture
	bool ___mSingleTexture_2;
	// System.Int32 Vuforia.DistortionRenderingBehaviour::mRenderLayer
	int32_t ___mRenderLayer_3;
	// System.Int32[] Vuforia.DistortionRenderingBehaviour::mOriginalCullingMasks
	Int32U5BU5D_t1872284309_0* ___mOriginalCullingMasks_4;
	// UnityEngine.Camera[] Vuforia.DistortionRenderingBehaviour::mStereoCameras
	CameraU5BU5D_t1253062672_0* ___mStereoCameras_5;
	// UnityEngine.GameObject[] Vuforia.DistortionRenderingBehaviour::mMeshes
	GameObjectU5BU5D_t_1557060746_0* ___mMeshes_6;
	// UnityEngine.RenderTexture[] Vuforia.DistortionRenderingBehaviour::mTextures
	RenderTextureU5BU5D_t_927142044_0* ___mTextures_7;
	// System.Boolean Vuforia.DistortionRenderingBehaviour::mStarted
	bool ___mStarted_8;
	// System.Boolean Vuforia.DistortionRenderingBehaviour::mVideoBackgroundChanged
	bool ___mVideoBackgroundChanged_9;
	// UnityEngine.Rect Vuforia.DistortionRenderingBehaviour::mOriginalLeftViewport
	Rect_t_981940947_0  ___mOriginalLeftViewport_10;
	// UnityEngine.Rect Vuforia.DistortionRenderingBehaviour::mOriginalRightViewport
	Rect_t_981940947_0  ___mOriginalRightViewport_11;
	// UnityEngine.Rect Vuforia.DistortionRenderingBehaviour::mDualTextureLeftViewport
	Rect_t_981940947_0  ___mDualTextureLeftViewport_12;
	// UnityEngine.Rect Vuforia.DistortionRenderingBehaviour::mDualTextureRightViewport
	Rect_t_981940947_0  ___mDualTextureRightViewport_13;
};
