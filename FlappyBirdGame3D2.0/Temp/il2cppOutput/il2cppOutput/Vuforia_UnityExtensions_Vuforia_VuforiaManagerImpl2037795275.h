#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType_103494864.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_200813597.h"
#include "Vuforia_UnityExtensions_Vuforia_RectangleData207582337.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1014981767.h"

// Vuforia.VuforiaManagerImpl/SurfaceData
#pragma pack(push, tp, 1)
struct  SurfaceData_t2037795275_0 
{
	// System.IntPtr Vuforia.VuforiaManagerImpl/SurfaceData::meshBoundaryArray
	IntPtr_t ___meshBoundaryArray_0;
	// Vuforia.VuforiaManagerImpl/MeshData Vuforia.VuforiaManagerImpl/SurfaceData::meshData
	MeshData_t_200813597_0  ___meshData_1;
	// Vuforia.VuforiaManagerImpl/MeshData Vuforia.VuforiaManagerImpl/SurfaceData::navMeshData
	MeshData_t_200813597_0  ___navMeshData_2;
	// Vuforia.RectangleData Vuforia.VuforiaManagerImpl/SurfaceData::boundingBox
	RectangleData_t207582337_0  ___boundingBox_3;
	// Vuforia.VuforiaManagerImpl/PoseData Vuforia.VuforiaManagerImpl/SurfaceData::localPose
	PoseData_t1014981767_0  ___localPose_4;
	// System.Int32 Vuforia.VuforiaManagerImpl/SurfaceData::id
	int32_t ___id_5;
	// System.Int32 Vuforia.VuforiaManagerImpl/SurfaceData::parentID
	int32_t ___parentID_6;
	// System.Int32 Vuforia.VuforiaManagerImpl/SurfaceData::numBoundaryIndices
	int32_t ___numBoundaryIndices_7;
	// System.Int32 Vuforia.VuforiaManagerImpl/SurfaceData::revision
	int32_t ___revision_8;
};
#pragma pack(pop, tp)
