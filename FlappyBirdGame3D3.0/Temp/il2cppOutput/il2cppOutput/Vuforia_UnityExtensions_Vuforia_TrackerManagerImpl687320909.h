#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ObjectTracker
struct ObjectTracker_t_1602147903_0;
// Vuforia.MarkerTracker
struct MarkerTracker_t1970157670_0;
// Vuforia.TextTracker
struct TextTracker_t_375770605_0;
// Vuforia.SmartTerrainTracker
struct SmartTerrainTracker_t617402676_0;
// Vuforia.DeviceTracker
struct DeviceTracker_t765548234_0;
// Vuforia.StateManager
struct StateManager_t1242276372_0;

#include "Vuforia_UnityExtensions_Vuforia_TrackerManager_870488179.h"

// Vuforia.TrackerManagerImpl
struct  TrackerManagerImpl_t687320909_0  : public TrackerManager_t_870488179_0
{
	// Vuforia.ObjectTracker Vuforia.TrackerManagerImpl::mObjectTracker
	ObjectTracker_t_1602147903_0 * ___mObjectTracker_1;
	// Vuforia.MarkerTracker Vuforia.TrackerManagerImpl::mMarkerTracker
	MarkerTracker_t1970157670_0 * ___mMarkerTracker_2;
	// Vuforia.TextTracker Vuforia.TrackerManagerImpl::mTextTracker
	TextTracker_t_375770605_0 * ___mTextTracker_3;
	// Vuforia.SmartTerrainTracker Vuforia.TrackerManagerImpl::mSmartTerrainTracker
	SmartTerrainTracker_t617402676_0 * ___mSmartTerrainTracker_4;
	// Vuforia.DeviceTracker Vuforia.TrackerManagerImpl::mDeviceTracker
	DeviceTracker_t765548234_0 * ___mDeviceTracker_5;
	// Vuforia.StateManager Vuforia.TrackerManagerImpl::mStateManager
	StateManager_t1242276372_0 * ___mStateManager_6;
};
