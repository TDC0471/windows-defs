#pragma once
/* ------------------ */

//0x10 bytes (sizeof)
struct _MI_HUGE_SYSTEM_VIEW_HEAD
{
    struct _RTL_AVL_TREE ViewRoot;                                          //0x0
    ULONG ViewCount;                                                        //0x8
    volatile LONG Lock;                                                     //0xc
};
/* Used in */
// _MI_SESSION_STATE

