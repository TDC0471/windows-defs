#pragma once
/* ------------------ */

//0x28 bytes (sizeof)
struct _VF_SUSPECT_DRIVER_ENTRY
{
    struct _LIST_ENTRY Links;                                               //0x0
    ULONG Loads;                                                            //0x10
    ULONG Unloads;                                                          //0x14
    struct _UNICODE_STRING BaseName;                                        //0x18
};
/* Used in */
// _VF_TARGET_VERIFIED_DRIVER_DATA

