#pragma once
/* ------------------ */

//0x30 bytes (sizeof)
struct _MAPPED_FILE_SEGMENT
{
    struct _CONTROL_AREA* ControlArea;                                      //0x0
    ULONG TotalNumberOfPtes;                                                //0x8
    struct _SEGMENT_FLAGS SegmentFlags;                                     //0xc
    ULONGLONG NumberOfCommittedPages;                                       //0x10
    ULONGLONG SizeOfSegment;                                                //0x18
    union
    {
        struct _MMEXTEND_INFO* ExtendInfo;                                  //0x20
        VOID* BasedAddress;                                                 //0x20
    };
    struct _EX_PUSH_LOCK SegmentLock;                                       //0x28
};
