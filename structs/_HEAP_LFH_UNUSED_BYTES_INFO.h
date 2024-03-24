#pragma once
/* ------------------ */

//0x2 bytes (sizeof)
struct _HEAP_LFH_UNUSED_BYTES_INFO
{
    union
    {
        struct
        {
            USHORT UnusedBytes:14;                                          //0x0
            USHORT ExtraPresent:1;                                          //0x0
            USHORT OneByteUnused:1;                                         //0x0
        };
        UCHAR Bytes[2];                                                     //0x0
    };
};
