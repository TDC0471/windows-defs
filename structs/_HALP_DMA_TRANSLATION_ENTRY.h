#pragma once
/* ------------------ */

#include <_HALP_DMA_TRANSLATION_ENTRY.h>
#include <_HALP_DMA_TRANSLATION_ENTRY.h>

//0x48 bytes (sizeof)
struct _HALP_DMA_TRANSLATION_ENTRY
{
    ULONGLONG PhysicalAddress;                                              //0x0
    struct _HALP_DMA_TRANSLATION_ENTRY* Next;                               //0x8
    ULONG MappedLength;                                                     //0x10
    ULONGLONG LogicalAddress;                                               //0x18
    ULONGLONG LogicalMappedLength;                                          //0x20
    ULONGLONG NextLogicalAddress;                                           //0x28
    union
    {
        VOID* VirtualAddress;                                               //0x30
        struct
        {
            ULONGLONG BoundToMaster:1;                                      //0x30
            ULONGLONG BoundToScatterPool:1;                                 //0x30
            ULONGLONG OwnedByMaster:1;                                      //0x30
            ULONGLONG OwnedByScatterPool:1;                                 //0x30
            ULONGLONG TemporaryMapping:1;                                   //0x30
            ULONGLONG ZeroBuffer:1;                                         //0x30
            ULONGLONG Address:58;                                           //0x30
        } Flags;                                                            //0x30
    } u;                                                                    //0x30
    struct _HALP_DMA_TRANSLATION_ENTRY* NextMapping;                        //0x38
    UCHAR LogicalBounceBufferPremapped;                                     //0x40
};
/* Used in */
// _HALP_DMA_ADAPTER_OBJECT
// _HALP_DMA_TRANSLATION_BUFFER
// _HALP_DMA_TRANSLATION_ENTRY

