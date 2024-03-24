#pragma once
/* ------------------ */

//0x70 bytes (sizeof)
struct _MMCLONE_DESCRIPTOR
{
    union
    {
        struct _RTL_BALANCED_NODE CloneNode;                                //0x0
        struct _MMCLONE_DESCRIPTOR* Next;                                   //0x0
    };
    struct _MMCLONE_BLOCK* StartingCloneBlock;                              //0x18
    struct _MMCLONE_BLOCK* EndingCloneBlock;                                //0x20
    ULONGLONG NumberOfPtes;                                                 //0x28
    volatile ULONGLONG NumberOfReferences;                                  //0x30
    struct _MMCLONE_HEADER* CloneHeader;                                    //0x38
    ULONGLONG NonPagedPoolQuotaCharge;                                      //0x40
    struct _SLIST_ENTRY DeleteList;                                         //0x50
    ULONGLONG NestingLevel;                                                 //0x60
};
/* Used in */
// _MMCLONE_DESCRIPTOR

