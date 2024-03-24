#pragma once
/* ------------------ */

//0x28 bytes (sizeof)
struct _VACB
{
    VOID* BaseAddress;                                                      //0x0
    struct _SHARED_CACHE_MAP* SharedCacheMap;                               //0x8
    union
    {
        union _LARGE_INTEGER FileOffset;                                    //0x10
        USHORT ActiveCount;                                                 //0x10
        struct _LIST_ENTRY Links;                                           //0x10
    } Overlay;                                                              //0x10
    struct _VACB_ARRAY_HEADER* ArrayHead;                                   //0x20
};
/* Used in */
// _SHARED_CACHE_MAP

