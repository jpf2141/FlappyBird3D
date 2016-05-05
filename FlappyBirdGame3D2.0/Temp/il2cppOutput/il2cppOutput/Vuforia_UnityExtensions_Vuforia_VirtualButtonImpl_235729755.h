#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Vuforia.ImageTarget
struct ImageTarget_t_576971884_0;
// Vuforia.DataSetImpl
struct DataSetImpl_t2035018592_0;

#include "Vuforia_UnityExtensions_Vuforia_VirtualButton_1353895707.h"
#include "Vuforia_UnityExtensions_Vuforia_RectangleData207582337.h"

// Vuforia.VirtualButtonImpl
struct  VirtualButtonImpl_t_235729755_0  : public VirtualButton_t_1353895707_0
{
	// System.String Vuforia.VirtualButtonImpl::mName
	String_t* ___mName_1;
	// System.Int32 Vuforia.VirtualButtonImpl::mID
	int32_t ___mID_2;
	// Vuforia.RectangleData Vuforia.VirtualButtonImpl::mArea
	RectangleData_t207582337_0  ___mArea_3;
	// System.Boolean Vuforia.VirtualButtonImpl::mIsEnabled
	bool ___mIsEnabled_4;
	// Vuforia.ImageTarget Vuforia.VirtualButtonImpl::mParentImageTarget
	Object_t * ___mParentImageTarget_5;
	// Vuforia.DataSetImpl Vuforia.VirtualButtonImpl::mParentDataSet
	DataSetImpl_t2035018592_0 * ___mParentDataSet_6;
};
