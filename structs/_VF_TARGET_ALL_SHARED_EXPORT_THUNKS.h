#pragma once
/* ------------------ */

#include <_VERIFIER_SHARED_EXPORT_THUNK.h>
#include <_VERIFIER_SHARED_EXPORT_THUNK.h>
#include <_VERIFIER_SHARED_EXPORT_THUNK.h>
#include <_VERIFIER_SHARED_EXPORT_THUNK.h>

//0x20 bytes (sizeof)
struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS
{
    struct _VERIFIER_SHARED_EXPORT_THUNK* SharedExportThunks;               //0x0
    struct _VERIFIER_SHARED_EXPORT_THUNK* PoolSharedExportThunks;           //0x8
    struct _VERIFIER_SHARED_EXPORT_THUNK* OrderDependentSharedExportThunks; //0x10
    struct _VERIFIER_SHARED_EXPORT_THUNK* XdvSharedExportThunks;            //0x18
};
/* Used in */
// _VF_TARGET_DRIVER

