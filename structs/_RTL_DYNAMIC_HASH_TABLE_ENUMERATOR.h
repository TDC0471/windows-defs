#pragma once
/* ------------------ */

//0x28 bytes (sizeof)
struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR
{
    union
    {
        struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;                     //0x0
        struct _LIST_ENTRY* CurEntry;                                       //0x0
    };
    struct _LIST_ENTRY* ChainHead;                                          //0x18
    ULONG BucketIndex;                                                      //0x20
};
