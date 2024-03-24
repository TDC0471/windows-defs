#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
union _SLIST_HEADER
{
    struct
    {
        ULONGLONG Alignment;                                                //0x0
        ULONGLONG Region;                                                   //0x8
    };
    struct
    {
        ULONGLONG Depth:16;                                                 //0x0
        ULONGLONG Sequence:48;                                              //0x0
        ULONGLONG Reserved:4;                                               //0x8
        ULONGLONG NextEntry:60;                                             //0x8
    } HeaderX64;                                                            //0x0
};
/* Used in */
// _CACHED_KSTACK_LIST
// _ETW_STACK_TRACE_BLOCK
// _GENERAL_LOOKASIDE
// _GENERAL_LOOKASIDE_POOL
// _HEAP_VS_DELAY_FREE_CONTEXT
// _KPRCB
// _MI_ALIGNED_SLIST
// _MI_PAGING_IO_STATE
// _MI_PARTITION_PAGE_LISTS
// _MI_PARTITION_SEGMENTS
// _MI_PARTITION_STORES
// _MI_STANDBY_STATE
// _MI_SYSTEM_PTE_STATE
// _MMPAGING_FILE
// _PEB
// _PF_KERNEL_GLOBALS
// _RTL_LOOKASIDE
// _VF_TARGET_VERIFIED_DRIVER_DATA

