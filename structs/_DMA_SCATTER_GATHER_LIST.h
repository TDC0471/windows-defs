#pragma once
/* ------------------ */

//0x10 bytes (sizeof)
struct _DMA_SCATTER_GATHER_LIST
{
    ULONG NumberOfElements;                                                 //0x0
    ULONGLONG Reserved;                                                     //0x8
    struct _SCATTER_GATHER_ELEMENT Elements[0];                             //0x10
};
/* Used in */
// _DMA_FUNCTION_TABLE

