#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ProgressBar.Utils.ProgressValue
struct ProgressValue_t329592119;

#include "codegen/il2cpp-codegen.h"

// System.Void ProgressBar.Utils.ProgressValue::.ctor(System.Single,System.Single)
extern "C"  void ProgressValue__ctor_m3142496420 (ProgressValue_t329592119 * __this, float ___value, float ___MaxValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProgressBar.Utils.ProgressValue::Set(System.Single)
extern "C"  void ProgressValue_Set_m692521151 (ProgressValue_t329592119 * __this, float ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProgressBar.Utils.ProgressValue::get_AsFloat()
extern "C"  float ProgressValue_get_AsFloat_m4073483383 (ProgressValue_t329592119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProgressBar.Utils.ProgressValue::get_AsInt()
extern "C"  int32_t ProgressValue_get_AsInt_m2535567884 (ProgressValue_t329592119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProgressBar.Utils.ProgressValue::get_Normalized()
extern "C"  float ProgressValue_get_Normalized_m3855071756 (ProgressValue_t329592119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProgressBar.Utils.ProgressValue::get_PercentAsFloat()
extern "C"  float ProgressValue_get_PercentAsFloat_m2405012186 (ProgressValue_t329592119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProgressBar.Utils.ProgressValue::get_PercentAsInt()
extern "C"  float ProgressValue_get_PercentAsInt_m4094716653 (ProgressValue_t329592119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
