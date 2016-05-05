#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.Shader
struct Shader_t1278883054_0;
// UnityEngine.Camera
struct Camera_t814710830_0;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t_1261093167_0;

#include "mscorlib_System_Object_887538054.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// Vuforia.StencilHideExcessAreaClipping
struct  StencilHideExcessAreaClipping_t970709770_0  : public Object_t
{
	// UnityEngine.GameObject Vuforia.StencilHideExcessAreaClipping::mGameObject
	GameObject_t_184308134_0 * ___mGameObject_0;
	// UnityEngine.Shader Vuforia.StencilHideExcessAreaClipping::mMatteShader
	Shader_t1278883054_0 * ___mMatteShader_1;
	// UnityEngine.GameObject Vuforia.StencilHideExcessAreaClipping::mClippingPlane
	GameObject_t_184308134_0 * ___mClippingPlane_2;
	// UnityEngine.Camera Vuforia.StencilHideExcessAreaClipping::mCamera
	Camera_t814710830_0 * ___mCamera_3;
	// System.Single Vuforia.StencilHideExcessAreaClipping::mCameraNearPlane
	float ___mCameraNearPlane_4;
	// System.Single Vuforia.StencilHideExcessAreaClipping::mCameraFarPlane
	float ___mCameraFarPlane_5;
	// UnityEngine.Rect Vuforia.StencilHideExcessAreaClipping::mCameraPixelRect
	Rect_t_981940947_0  ___mCameraPixelRect_6;
	// System.Single Vuforia.StencilHideExcessAreaClipping::mCameraFieldOfView
	float ___mCameraFieldOfView_7;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.StencilHideExcessAreaClipping::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t_1261093167_0 * ___mVuforiaBehaviour_8;
	// System.Boolean Vuforia.StencilHideExcessAreaClipping::mPlanesActivated
	bool ___mPlanesActivated_9;
	// UnityEngine.GameObject Vuforia.StencilHideExcessAreaClipping::mBgPlane
	GameObject_t_184308134_0 * ___mBgPlane_10;
	// UnityEngine.Vector3 Vuforia.StencilHideExcessAreaClipping::mBgPlaneLocalPos
	Vector3_t_725341337_0  ___mBgPlaneLocalPos_11;
	// UnityEngine.Vector3 Vuforia.StencilHideExcessAreaClipping::mBgPlaneLocalScale
	Vector3_t_725341337_0  ___mBgPlaneLocalScale_12;
};
