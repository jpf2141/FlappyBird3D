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

// Vuforia.SurfaceImpl
struct SurfaceImpl_t128346421_0;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t618353697_0;
// UnityEngine.Mesh
struct Mesh_t_982089418_0;
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"

// System.Void Vuforia.SurfaceImpl::.ctor(System.Int32,Vuforia.SmartTerrainTrackable)
extern "C"  void SurfaceImpl__ctor_m_869321237_0 (SurfaceImpl_t128346421_0 * __this, int32_t ___id, Object_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetID(System.Int32)
extern "C"  void SurfaceImpl_SetID_m652978983_0 (SurfaceImpl_t128346421_0 * __this, int32_t ___trackableID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetMesh(System.Int32,UnityEngine.Mesh,UnityEngine.Mesh,System.Int32[])
extern "C"  void SurfaceImpl_SetMesh_m_310008580_0 (SurfaceImpl_t128346421_0 * __this, int32_t ___meshRev, Mesh_t_982089418_0 * ___mesh, Mesh_t_982089418_0 * ___navMesh, Int32U5BU5D_t1872284309_0* ___meshBoundaries, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetBoundingBox(UnityEngine.Rect)
extern "C"  void SurfaceImpl_SetBoundingBox_m_1124979661_0 (SurfaceImpl_t128346421_0 * __this, Rect_t_981940947_0  ___boundingBox, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.SurfaceImpl::GetNavMesh()
extern "C"  Mesh_t_982089418_0 * SurfaceImpl_GetNavMesh_m1818929516_0 (SurfaceImpl_t128346421_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Vuforia.SurfaceImpl::GetMeshBoundaries()
extern "C"  Int32U5BU5D_t1872284309_0* SurfaceImpl_GetMeshBoundaries_m_924864946_0 (SurfaceImpl_t128346421_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.SurfaceImpl::get_BoundingBox()
extern "C"  Rect_t_981940947_0  SurfaceImpl_get_BoundingBox_m449936631_0 (SurfaceImpl_t128346421_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.SurfaceImpl::GetArea()
extern "C"  float SurfaceImpl_GetArea_m2063500008_0 (SurfaceImpl_t128346421_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
