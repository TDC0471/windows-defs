#pragma once
/* ------------------ */

#include <_MI_PAGING_FILE_SPACE_BITMAPS.h>
#include <_RTL_BITMAP.h>
#include <_RTL_BITMAP.h>
#include <_RTL_BITMAP.h>

//0x28 bytes (sizeof)
struct _MI_PAGING_FILE_SPACE_BITMAPS
{
    union
    {
        ULONG RefCount;                                                     //0x0
        struct _MI_PAGING_FILE_SPACE_BITMAPS* Anchor;                       //0x0
    };
    struct _RTL_BITMAP AllocationBitmap;                                    //0x8
    union
    {
        struct _RTL_BITMAP ReservationBitmap;                               //0x18
        struct _RTL_BITMAP EvictedBitmap;                                   //0x18
    };
};
/* Used in */
// _MI_PAGING_FILE_SPACE_BITMAPS
// _MMPAGING_FILE

