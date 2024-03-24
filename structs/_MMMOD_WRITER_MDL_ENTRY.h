#pragma once
/* ------------------ */

//0x108 bytes (sizeof)
struct _MMMOD_WRITER_MDL_ENTRY
{
    struct _LIST_ENTRY Links;                                               //0x0
    union
    {
        struct _IO_STATUS_BLOCK IoStatus;                                   //0x10
    } u;                                                                    //0x10
    struct _IRP* Irp;                                                       //0x20
    struct _MODWRITER_FLAGS u1;                                             //0x28
    ULONG StoreWriteRefCount;                                               //0x2c
    struct _KAPC StoreWriteCompletionApc;                                   //0x30
    ULONG ByteCount;                                                        //0x88
    ULONG ChargedPages;                                                     //0x8c
    struct _MMPAGING_FILE* PagingFile;                                      //0x90
    struct _FILE_OBJECT* File;                                              //0x98
    struct _CONTROL_AREA* ControlArea;                                      //0xa0
    struct _ERESOURCE* FileResource;                                        //0xa8
    union _LARGE_INTEGER WriteOffset;                                       //0xb0
    union _LARGE_INTEGER IssueTime;                                         //0xb8
    struct _MI_PARTITION* Partition;                                        //0xc0
    struct _MDL* PointerMdl;                                                //0xc8
    struct _MDL Mdl;                                                        //0xd0
    ULONGLONG Page[1];                                                      //0x100
};
/* Used in */
// _MMPAGING_FILE

