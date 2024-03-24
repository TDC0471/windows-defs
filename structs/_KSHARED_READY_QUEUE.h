#pragma once
/* ------------------ */

//0x270 bytes (sizeof)
struct _KSHARED_READY_QUEUE
{
    ULONGLONG Lock;                                                         //0x0
    ULONG ReadySummary;                                                     //0x8
    struct _LIST_ENTRY ReadyListHead[32];                                   //0x10
    CHAR RunningSummary[64];                                                //0x210
    UCHAR Span;                                                             //0x250
    UCHAR LowProcIndex;                                                     //0x251
    UCHAR QueueIndex;                                                       //0x252
    UCHAR ProcCount;                                                        //0x253
    UCHAR ScanOwner;                                                        //0x254
    UCHAR Spare[3];                                                         //0x255
    ULONGLONG Affinity;                                                     //0x258
    ULONG ReadyThreadCount;                                                 //0x260
    ULONGLONG ReadyQueueExpectedRunTime;                                    //0x268
};
/* Used in */
// _KPRCB

