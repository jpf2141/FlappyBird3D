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

// System.Single[]
struct SingleU5BU5D_t_2105059803_0;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CardboardProfile_Distortion_2110503554.h"

// System.Single[] CardboardProfile/Distortion::get_Coef()
extern "C"  SingleU5BU5D_t_2105059803_0* Distortion_get_Coef_m2005341214_0 (Distortion_t_2110503554_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardProfile/Distortion::set_Coef(System.Single[])
extern "C"  void Distortion_set_Coef_m628067597_0 (Distortion_t_2110503554_0 * __this, SingleU5BU5D_t_2105059803_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardProfile/Distortion::distort(System.Single)
extern "C"  float Distortion_distort_m586609828_0 (Distortion_t_2110503554_0 * __this, float ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardProfile/Distortion::distortInv(System.Single)
extern "C"  float Distortion_distortInv_m_1979439681_0 (Distortion_t_2110503554_0 * __this, float ___radius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Distortion_t_2110503554_0_marshal(const Distortion_t_2110503554_0& unmarshaled, Distortion_t_2110503554_0_marshaled& marshaled);
extern "C" void Distortion_t_2110503554_0_marshal_back(const Distortion_t_2110503554_0_marshaled& marshaled, Distortion_t_2110503554_0& unmarshaled);
extern "C" void Distortion_t_2110503554_0_marshal_cleanup(Distortion_t_2110503554_0_marshaled& marshaled);
