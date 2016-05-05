#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t814710830_0;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t_1261093167_0;
// UnityEngine.Mesh
struct Mesh_t_982089418_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid164376304.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// Vuforia.BackgroundPlaneAbstractBehaviour
struct  BackgroundPlaneAbstractBehaviour_t253889221_0  : public MonoBehaviour_t_92453903_0
{
	// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.BackgroundPlaneAbstractBehaviour::mTextureInfo
	VideoTextureInfo_t164376304_0  ___mTextureInfo_2;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::mViewWidth
	int32_t ___mViewWidth_3;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::mViewHeight
	int32_t ___mViewHeight_4;
	// System.Boolean Vuforia.BackgroundPlaneAbstractBehaviour::mVideoBgConfigChanged
	bool ___mVideoBgConfigChanged_5;
	// UnityEngine.Camera Vuforia.BackgroundPlaneAbstractBehaviour::mCamera
	Camera_t814710830_0 * ___mCamera_6;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.BackgroundPlaneAbstractBehaviour::mQBehaviour
	VuforiaAbstractBehaviour_t_1261093167_0 * ___mQBehaviour_7;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::defaultNumDivisions
	int32_t ___defaultNumDivisions_9;
	// UnityEngine.Mesh Vuforia.BackgroundPlaneAbstractBehaviour::mMesh
	Mesh_t_982089418_0 * ___mMesh_10;
	// System.Single Vuforia.BackgroundPlaneAbstractBehaviour::mStereoDepth
	float ___mStereoDepth_11;
	// UnityEngine.Vector3 Vuforia.BackgroundPlaneAbstractBehaviour::mBackgroundOffset
	Vector3_t_725341337_0  ___mBackgroundOffset_12;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.BackgroundPlaneAbstractBehaviour::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t_1261093167_0 * ___mVuforiaBehaviour_13;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::mNumDivisions
	int32_t ___mNumDivisions_14;
};
struct BackgroundPlaneAbstractBehaviour_t253889221_0_StaticFields{
	// System.Single Vuforia.BackgroundPlaneAbstractBehaviour::maxDisplacement
	float ___maxDisplacement_8;
};
