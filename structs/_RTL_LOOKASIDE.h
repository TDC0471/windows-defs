#pragma once
/* ------------------ */

//0x40 bytes (sizeof)
struct _RTL_LOOKASIDE
{
    union _SLIST_HEADER ListHead;                                           //0x0
    USHORT Depth;                                                           //0x10
    USHORT MaximumDepth;                                                    //0x12
    ULONG TotalAllocates;                                                   //0x14
    ULONG AllocateMisses;                                                   //0x18
    ULONG TotalFrees;                                                       //0x1c
    ULONG FreeMisses;                                                       //0x20
    ULONG LastTotalAllocates;                                               //0x24
    ULONG LastAllocateMisses;                                               //0x28
    ULONG LastTotalFrees;                                                   //0x2c
};
/* Used in */
// _RTL_DYNAMIC_LOOKASIDE

