#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_LIST_ENTRY.h>
#include <_RTL_BITMAP.h>
#include <_RTL_BITMAP.h>
#include <_MI_PARTITION.h>
#include <_MI_PARTITION.h>
#include <_RTL_BITMAP_EX.h>
#include <_MI_HUGE_PFN.h>

//0xc0 bytes (sizeof)
struct _MI_PARTITION_STATE
{
    ULONGLONG PartitionLock;                                                //0x0
    struct _EX_PUSH_LOCK PartitionIdLock;                                   //0x8
    ULONGLONG InitialPartitionIdBits;                                       //0x10
    struct _LIST_ENTRY PartitionList;                                       //0x18
    struct _RTL_BITMAP* PartitionIdBitmap;                                  //0x28
    struct _RTL_BITMAP InitialPartitionIdBitmap;                            //0x30
    struct _MI_PARTITION* TempPartitionPointers[1];                         //0x40
    struct _MI_PARTITION** Partition;                                       //0x48
    ULONGLONG TotalPagesInChildPartitions;                                  //0x50
    ULONG CrossPartitionDenials;                                            //0x58
    UCHAR MultiplePartitionsExist;                                          //0x5c
    struct _RTL_BITMAP_EX HugeIoPfnBitMap;                                  //0x60
    struct _MI_HUGE_PFN* HugePfnDatabase;                                   //0x70
    ULONGLONG HugeRangesLock;                                               //0x80
};
/* Used in */
// _MI_SYSTEM_INFORMATION

