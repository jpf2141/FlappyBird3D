#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Vuforia.DataSetImpl>
struct List_1_t_1517875940_0;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t635787868_0;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t432668007_0;
// Vuforia.TargetFinder
struct TargetFinder_t_689276593_0;

#include "Vuforia_UnityExtensions_Vuforia_ObjectTracker_1602147903.h"

// Vuforia.ObjectTrackerImpl
struct  ObjectTrackerImpl_t_997771391_0  : public ObjectTracker_t_1602147903_0
{
	// System.Collections.Generic.List`1<Vuforia.DataSetImpl> Vuforia.ObjectTrackerImpl::mActiveDataSets
	List_1_t_1517875940_0 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::mDataSets
	List_1_t635787868_0 * ___mDataSets_2;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTrackerImpl::mImageTargetBuilder
	ImageTargetBuilder_t432668007_0 * ___mImageTargetBuilder_3;
	// Vuforia.TargetFinder Vuforia.ObjectTrackerImpl::mTargetFinder
	TargetFinder_t_689276593_0 * ___mTargetFinder_4;
};
