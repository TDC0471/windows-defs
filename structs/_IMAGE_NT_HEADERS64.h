#pragma once
/* ------------------ */

#define IMAGE_NT_SIGNATURE 0x4550                                          //0x0
//0x108 bytes (sizeof)
struct _IMAGE_NT_HEADERS64
{
    ULONG Signature;                                                        //0x0
    struct _IMAGE_FILE_HEADER FileHeader;                                   //0x4
    struct _IMAGE_OPTIONAL_HEADER64 OptionalHeader;                         //0x18
};
