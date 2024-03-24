#pragma once
/* ------------------ */

//0x58 bytes (sizeof)
struct _KAPC
{
    UCHAR Type;                                                             //0x0
    UCHAR SpareByte0;                                                       //0x1
    UCHAR Size;                                                             //0x2
    UCHAR SpareByte1;                                                       //0x3
    ULONG SpareLong0;                                                       //0x4
    struct _KTHREAD* Thread;                                                //0x8
    struct _LIST_ENTRY ApcListEntry;                                        //0x10
    VOID* Reserved[3];                                                      //0x20
    VOID* NormalContext;                                                    //0x38
    VOID* SystemArgument1;                                                  //0x40
    VOID* SystemArgument2;                                                  //0x48
    CHAR ApcStateIndex;                                                     //0x50
    CHAR ApcMode;                                                           //0x51
    UCHAR Inserted;                                                         //0x52
};
/* Used in */
// _ETIMER
// _ETW_APC_ENTRY
// _IRP
// _KAPC
// _KTHREAD
// _MMMOD_WRITER_MDL_ENTRY

