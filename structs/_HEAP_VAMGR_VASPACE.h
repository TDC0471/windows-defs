#pragma once
/* ------------------ */

//0x860 bytes (sizeof)
struct _HEAP_VAMGR_VASPACE
{
    enum _RTLP_HP_ADDRESS_SPACE_TYPE AddressSpaceType;                      //0x0
    ULONGLONG BaseAddress;                                                  //0x8
    union
    {
        struct _RTL_SPARSE_ARRAY VaRangeArray;                              //0x10
        UCHAR VaRangeArrayBuffer[2128];                                     //0x10
    };
};
/* Used in */
// _HEAP_VAMGR_ALLOCATOR
// _HEAP_VAMGR_CTX

