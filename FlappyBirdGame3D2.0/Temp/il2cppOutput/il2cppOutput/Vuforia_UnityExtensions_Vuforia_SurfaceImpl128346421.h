#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh
struct Mesh_t_982089418_0;
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;

#include "Vuforia_UnityExtensions_Vuforia_SmartTerrainTracka_519753247.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"

// Vuforia.SurfaceImpl
struct  SurfaceImpl_t128346421_0  : public SmartTerrainTrackableImpl_t_519753247_0
{
	// UnityEngine.Mesh Vuforia.SurfaceImpl::mNavMesh
	Mesh_t_982089418_0 * ___mNavMesh_7;
	// System.Int32[] Vuforia.SurfaceImpl::mMeshBoundaries
	Int32U5BU5D_t1872284309_0* ___mMeshBoundaries_8;
	// UnityEngine.Rect Vuforia.SurfaceImpl::mBoundingBox
	Rect_t_981940947_0  ___mBoundingBox_9;
	// System.Single Vuforia.SurfaceImpl::mSurfaceArea
	float ___mSurfaceArea_10;
	// System.Boolean Vuforia.SurfaceImpl::mAreaNeedsUpdate
	bool ___mAreaNeedsUpdate_11;
};
