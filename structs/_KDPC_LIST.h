#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_SINGLE_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _KDPC_LIST
{
    struct _SINGLE_LIST_ENTRY ListHead;                                     //0x0
    struct _SINGLE_LIST_ENTRY* LastEntry;                                   //0x8
};
/* Used in */
// _KDPC_DATA

