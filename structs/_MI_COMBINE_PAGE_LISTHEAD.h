#pragma once
/* ------------------ */

//0x10 bytes (sizeof)
struct _MI_COMBINE_PAGE_LISTHEAD
{
    struct _RTL_AVL_TREE Table;                                             //0x0
    volatile LONG Lock;                                                     //0x8
};
/* Used in */
// _MI_PAGE_COMBINING_SUPPORT

