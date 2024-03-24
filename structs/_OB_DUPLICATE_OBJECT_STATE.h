#pragma once
/* ------------------ */

//0x28 bytes (sizeof)
struct _OB_DUPLICATE_OBJECT_STATE
{
    struct _EPROCESS* SourceProcess;                                        //0x0
    VOID* SourceHandle;                                                     //0x8
    VOID* Object;                                                           //0x10
    ULONG TargetAccess;                                                     //0x18
    struct _HANDLE_TABLE_ENTRY_INFO ObjectInfo;                             //0x1c
    ULONG HandleAttributes;                                                 //0x24
};
/* Used in */
// _KALPC_HANDLE_DATA

