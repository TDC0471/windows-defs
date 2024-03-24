#pragma once
/* ------------------ */

//0x28 bytes (sizeof)
struct _MMPFNLIST
{
    ULONGLONG Total;                                                        //0x0
    enum _MMLISTS ListName;                                                 //0x8
    ULONGLONG Flink;                                                        //0x10
    ULONGLONG Blink;                                                        //0x18
    ULONGLONG Lock;                                                         //0x20
};
/* Used in */
// _MI_PARTITION_PAGE_LISTS
// _MI_SECTION_STATE
// _MI_SLAB_ALLOCATOR_CONTEXT
// _MI_VISIBLE_PARTITION

