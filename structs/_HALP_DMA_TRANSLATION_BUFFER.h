#pragma once
/* ------------------ */

//0x18 bytes (sizeof)
struct _HALP_DMA_TRANSLATION_BUFFER
{
    struct _HALP_DMA_TRANSLATION_BUFFER* Next;                              //0x0
    ULONG EntryCount;                                                       //0x8
    struct _HALP_DMA_TRANSLATION_ENTRY* Entries;                            //0x10
};
/* Used in */
// _HALP_DMA_ADAPTER_OBJECT
// _HALP_DMA_TRANSLATION_BUFFER
// _HALP_DMA_TRANSLATION_BUFFER_POSITION

