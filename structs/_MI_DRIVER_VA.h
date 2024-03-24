#pragma once
/* ------------------ */

//0x28 bytes (sizeof)
struct _MI_DRIVER_VA
{
    struct _MI_DRIVER_VA* Next;                                             //0x0
    struct _MMPTE* PointerPte;                                              //0x8
    struct _RTL_BITMAP BitMap;                                              //0x10
    ULONG Hint;                                                             //0x20
    ULONG Flags;                                                            //0x24
};
/* Used in */
// _MI_DRIVER_VA
// _MI_SYSTEM_IMAGE_STATE

