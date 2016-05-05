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

// UnityEngine.Mesh
struct Mesh_t_982089418_0;
// Vuforia.MeshUtils
struct MeshUtils_t_1580790388_0;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_200813597.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// UnityEngine.Mesh Vuforia.MeshUtils::UpdateMesh(Vuforia.VuforiaManagerImpl/MeshData,UnityEngine.Mesh,System.Boolean,System.Boolean)
extern "C"  Mesh_t_982089418_0 * MeshUtils_UpdateMesh_m2007138526_0 (Object_t * __this /* static, unused */, MeshData_t_200813597_0  ___meshData, Mesh_t_982089418_0 * ___oldMesh, bool ___setNormalsUpwards, bool ___swapYZ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MeshUtils::CopyPositions(System.IntPtr,System.Int32,UnityEngine.Mesh,System.Boolean)
extern "C"  void MeshUtils_CopyPositions_m1590742581_0 (Object_t * __this /* static, unused */, IntPtr_t ___positionsArray, int32_t ___numVertexValues, Mesh_t_982089418_0 * ___mesh, bool ___swapYZ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MeshUtils::CopyNormals(System.IntPtr,System.Int32,UnityEngine.Mesh,System.Boolean)
extern "C"  void MeshUtils_CopyNormals_m_649789897_0 (Object_t * __this /* static, unused */, IntPtr_t ___normalsArray, int32_t ___numVertexValues, Mesh_t_982089418_0 * ___mesh, bool ___swapYZ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MeshUtils::CopyTexCoords(System.IntPtr,System.Int32,UnityEngine.Mesh)
extern "C"  void MeshUtils_CopyTexCoords_m55301485_0 (Object_t * __this /* static, unused */, IntPtr_t ___texCoordsArray, int32_t ___numTexCoordValues, Mesh_t_982089418_0 * ___mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MeshUtils::CopyTriangles(System.IntPtr,System.Int32,UnityEngine.Mesh)
extern "C"  void MeshUtils_CopyTriangles_m_1767428377_0 (Object_t * __this /* static, unused */, IntPtr_t ___triangleIdxArray, int32_t ___numTriangleIndices, Mesh_t_982089418_0 * ___mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MeshUtils::.ctor()
extern "C"  void MeshUtils__ctor_m_1341627196_0 (MeshUtils_t_1580790388_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
