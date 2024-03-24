#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IRP.h>
#include <_DEVICE_OBJECT.h>

//0x20 bytes (sizeof)
struct _TRIAGE_POP_IRP_DATA
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _IRP* Irp;                                                       //0x10
    struct _DEVICE_OBJECT* Pdo;                                             //0x18
};
/* Used in */
// _TRIAGE_POP_FX_DEVICE

