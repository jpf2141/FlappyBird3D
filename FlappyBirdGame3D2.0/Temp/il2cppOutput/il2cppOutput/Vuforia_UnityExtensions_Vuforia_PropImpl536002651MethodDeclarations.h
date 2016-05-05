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

// Vuforia.PropImpl
struct PropImpl_t536002651_0;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t618353697_0;
// UnityEngine.Mesh
struct Mesh_t_982089418_0;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_OrientedBoundingBo_567370820.h"

// System.Void Vuforia.PropImpl::.ctor(System.Int32,Vuforia.SmartTerrainTrackable)
extern "C"  void PropImpl__ctor_m1220119179_0 (PropImpl_t536002651_0 * __this, int32_t ___id, Object_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox3D Vuforia.PropImpl::get_BoundingBox()
extern "C"  OrientedBoundingBox3D_t_567370820_0  PropImpl_get_BoundingBox_m_2051845908_0 (PropImpl_t536002651_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropImpl::SetMesh(System.Int32,UnityEngine.Mesh)
extern "C"  void PropImpl_SetMesh_m1254043081_0 (PropImpl_t536002651_0 * __this, int32_t ___meshRev, Mesh_t_982089418_0 * ___mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropImpl::SetObb(Vuforia.OrientedBoundingBox3D)
extern "C"  void PropImpl_SetObb_m193801012_0 (PropImpl_t536002651_0 * __this, OrientedBoundingBox3D_t_567370820_0  ___obb3D, const MethodInfo* method) IL2CPP_METHOD_ATTR;
