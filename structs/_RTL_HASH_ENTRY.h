#pragma once
/* ------------------ */

//0x10 bytes (sizeof)
struct _RTL_HASH_ENTRY
{
    struct _SINGLE_LIST_ENTRY BucketLink;                                   //0x0
    ULONGLONG Key;                                                          //0x8
};
/* Used in */
// _RTL_HASH_TABLE_ITERATOR

