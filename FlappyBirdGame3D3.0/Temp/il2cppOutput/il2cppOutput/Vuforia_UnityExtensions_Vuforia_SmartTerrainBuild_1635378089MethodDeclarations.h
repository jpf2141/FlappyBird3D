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

// Vuforia.SmartTerrainBuilderImpl
struct SmartTerrainBuilderImpl_t_1635378089_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour>
struct IEnumerable_1_t1786321232_0;
// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t_169931425_0;
// Vuforia.Reconstruction
struct Reconstruction_t_2063068996_0;
// Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[]
struct SmartTerrainRevisionDataU5BU5D_t_1987014081_0;
// Vuforia.VuforiaManagerImpl/SurfaceData[]
struct SurfaceDataU5BU5D_t_183824787_0;
// Vuforia.VuforiaManagerImpl/PropData[]
struct PropDataU5BU5D_t2103807867_0;

#include "codegen/il2cpp-codegen.h"

// System.Boolean Vuforia.SmartTerrainBuilderImpl::Init()
extern "C"  bool SmartTerrainBuilderImpl_Init_m_410940119_0 (SmartTerrainBuilderImpl_t_1635378089_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::Deinit()
extern "C"  bool SmartTerrainBuilderImpl_Deinit_m698289898_0 (SmartTerrainBuilderImpl_t_1635378089_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour> Vuforia.SmartTerrainBuilderImpl::GetReconstructions()
extern "C"  Object_t* SmartTerrainBuilderImpl_GetReconstructions_m1036765421_0 (SmartTerrainBuilderImpl_t_1635378089_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::AddReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C"  bool SmartTerrainBuilderImpl_AddReconstruction_m1210136121_0 (SmartTerrainBuilderImpl_t_1635378089_0 * __this, ReconstructionAbstractBehaviour_t_169931425_0 * ___reconstructionBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::RemoveReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C"  bool SmartTerrainBuilderImpl_RemoveReconstruction_m2112013766_0 (SmartTerrainBuilderImpl_t_1635378089_0 * __this, ReconstructionAbstractBehaviour_t_169931425_0 * ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::DestroyReconstruction(Vuforia.Reconstruction)
extern "C"  bool SmartTerrainBuilderImpl_DestroyReconstruction_m1879288855_0 (SmartTerrainBuilderImpl_t_1635378089_0 * __this, Object_t * ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::UpdateSmartTerrainData(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C"  void SmartTerrainBuilderImpl_UpdateSmartTerrainData_m_1233295603_0 (SmartTerrainBuilderImpl_t_1635378089_0 * __this, SmartTerrainRevisionDataU5BU5D_t_1987014081_0* ___smartTerrainRevisions, SurfaceDataU5BU5D_t_183824787_0* ___updatedSurfaces, PropDataU5BU5D_t2103807867_0* ___updatedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::.ctor()
extern "C"  void SmartTerrainBuilderImpl__ctor_m_345522279_0 (SmartTerrainBuilderImpl_t_1635378089_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
