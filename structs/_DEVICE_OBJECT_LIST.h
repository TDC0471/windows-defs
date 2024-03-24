#pragma once
/* ------------------ */

//0x28 bytes (sizeof)
struct _DEVICE_OBJECT_LIST
{
    ULONG Count;                                                            //0x0
    ULONG MaxCount;                                                         //0x4
    ULONG TagCount;                                                         //0x8
    enum _PNP_DEVICE_DELETE_TYPE OperationCode;                             //0xc
    struct _DEVICE_OBJECT_LIST_ENTRY Devices[1];                            //0x10
};
/* Used in */
// _RELATION_LIST

