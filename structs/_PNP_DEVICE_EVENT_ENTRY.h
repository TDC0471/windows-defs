#pragma once
/* ------------------ */

//0xc0 bytes (sizeof)
struct _PNP_DEVICE_EVENT_ENTRY
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONG Argument;                                                         //0x10
    LONG ArgumentStatus;                                                    //0x14
    struct _KEVENT* CallerEvent;                                            //0x18
    VOID (*Callback)(VOID* arg1);                                           //0x20
    VOID* Context;                                                          //0x28
    enum _PNP_VETO_TYPE* VetoType;                                          //0x30
    struct _UNICODE_STRING* VetoName;                                       //0x38
    ULONG RefCount;                                                         //0x40
    ULONG Lock;                                                             //0x44
    UCHAR Cancel;                                                           //0x48
    struct _PNP_DEVICE_EVENT_ENTRY* Parent;                                 //0x50
    struct _GUID ActivityId;                                                //0x58
    struct _PNP_WATCHDOG* Watchdog;                                         //0x68
    struct _PLUGPLAY_EVENT_BLOCK Data;                                      //0x70
};
/* Used in */
// _PENDING_RELATIONS_LIST_ENTRY
// _PNP_DEVICE_EVENT_ENTRY

