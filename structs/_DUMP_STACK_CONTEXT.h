#pragma once
/* ------------------ */

//0x178 bytes (sizeof)
struct _DUMP_STACK_CONTEXT
{
    struct _DUMP_INITIALIZATION_CONTEXT Init;                               //0x0
    union _LARGE_INTEGER PartitionOffset;                                   //0x108
    union
    {
        VOID* DumpPointers;                                                 //0x110
        VOID* StorageInfo;                                                  //0x110
    };
    UCHAR UseStorageInfo;                                                   //0x118
    ULONG PointersLength;                                                   //0x11c
    WCHAR* ModulePrefix;                                                    //0x120
    struct _LIST_ENTRY DriverList;                                          //0x128
    struct _STRING InitMsg;                                                 //0x138
    struct _STRING ProgMsg;                                                 //0x148
    struct _STRING DoneMsg;                                                 //0x158
    VOID* FileObject;                                                       //0x168
    enum _DEVICE_USAGE_NOTIFICATION_TYPE UsageType;                         //0x170
};
/* Used in */
// _POP_HIBER_CONTEXT

