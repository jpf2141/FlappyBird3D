#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t618353697_0;
// UnityEngine.MeshFilter
struct MeshFilter_t_19924914_0;
// UnityEngine.MeshCollider
struct MeshCollider_t_1878661302_0;

#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour516166480.h"

// Vuforia.SmartTerrainTrackableBehaviour
struct  SmartTerrainTrackableBehaviour_t391412124_0  : public TrackableBehaviour_t516166480_0
{
	// Vuforia.SmartTerrainTrackable Vuforia.SmartTerrainTrackableBehaviour::mSmartTerrainTrackable
	Object_t * ___mSmartTerrainTrackable_10;
	// System.Boolean Vuforia.SmartTerrainTrackableBehaviour::mDisableAutomaticUpdates
	bool ___mDisableAutomaticUpdates_11;
	// UnityEngine.MeshFilter Vuforia.SmartTerrainTrackableBehaviour::mMeshFilterToUpdate
	MeshFilter_t_19924914_0 * ___mMeshFilterToUpdate_12;
	// UnityEngine.MeshCollider Vuforia.SmartTerrainTrackableBehaviour::mMeshColliderToUpdate
	MeshCollider_t_1878661302_0 * ___mMeshColliderToUpdate_13;
};
