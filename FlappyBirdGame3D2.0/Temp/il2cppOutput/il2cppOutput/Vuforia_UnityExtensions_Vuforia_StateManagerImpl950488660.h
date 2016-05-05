#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour>
struct Dictionary_2_t_460499570_0;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t_1321712961_0;
// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>
struct List_1_t1474046192_0;
// Vuforia.WordManagerImpl
struct WordManagerImpl_t_1251189045_0;
// Vuforia.DeviceTrackingManager
struct DeviceTrackingManager_t_661017976_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "Vuforia_UnityExtensions_Vuforia_StateManager1242276372.h"

// Vuforia.StateManagerImpl
struct  StateManagerImpl_t950488660_0  : public StateManager_t1242276372_0
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mTrackableBehaviours
	Dictionary_2_t_460499570_0 * ___mTrackableBehaviours_0;
	// System.Collections.Generic.List`1<System.Int32> Vuforia.StateManagerImpl::mAutomaticallyCreatedBehaviours
	List_1_t_1321712961_0 * ___mAutomaticallyCreatedBehaviours_1;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mBehavioursMarkedForDeletion
	List_1_t1474046192_0 * ___mBehavioursMarkedForDeletion_2;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mActiveTrackableBehaviours
	List_1_t1474046192_0 * ___mActiveTrackableBehaviours_3;
	// Vuforia.WordManagerImpl Vuforia.StateManagerImpl::mWordManager
	WordManagerImpl_t_1251189045_0 * ___mWordManager_4;
	// Vuforia.DeviceTrackingManager Vuforia.StateManagerImpl::mDeviceTrackingManager
	DeviceTrackingManager_t_661017976_0 * ___mDeviceTrackingManager_5;
	// UnityEngine.GameObject Vuforia.StateManagerImpl::mCameraPositioningHelper
	GameObject_t_184308134_0 * ___mCameraPositioningHelper_6;
};
