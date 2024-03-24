#pragma once
/* ------------------ */

//0x2d00 bytes (sizeof)
struct _MI_PARTITION
{
    struct _MI_PARTITION_CORE Core;                                         //0x0
    struct _MI_PARTITION_MODWRITES Modwriter;                               //0x1b8
    struct _MI_PARTITION_STORES Store;                                      //0x480
    struct _MI_PARTITION_SEGMENTS Segments;                                 //0x540
    struct _MI_PARTITION_PAGE_LISTS PageLists;                              //0x880
    struct _MI_PARTITION_COMMIT Commit;                                     //0x1840
    struct _MI_PARTITION_ZEROING Zeroing;                                   //0x1880
    struct _MI_PAGE_COMBINING_SUPPORT PageCombine;                          //0x1930
    VOID* WorkingSetControl;                                                //0x1ac0
    struct _MMWORKING_SET_EXPANSION_HEAD WorkingSetExpansionHead;           //0x1ac8
    ULONG SessionDetachTimeStamp;                                           //0x1ad8
    struct _MI_VISIBLE_PARTITION Vp;                                        //0x1b00
};
/* Used in */
// _MI_PAGE_COMBINING_SUPPORT
// _MI_PARTITION_STATE
// _MMCLONE_HEADER
// _MMMOD_WRITER_MDL_ENTRY
// _MMPAGE_FILE_EXPANSION
// _MMPAGING_FILE

