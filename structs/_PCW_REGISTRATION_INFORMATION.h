#pragma once
/* ------------------ */

//0x30 bytes (sizeof)
struct _PCW_REGISTRATION_INFORMATION
{
    ULONG Version;                                                          //0x0
    struct _UNICODE_STRING* Name;                                           //0x8
    ULONG CounterCount;                                                     //0x10
    struct _PCW_COUNTER_DESCRIPTOR* Counters;                               //0x18
    LONG (*Callback)(enum _PCW_CALLBACK_TYPE arg1, union _PCW_CALLBACK_INFORMATION* arg2, VOID* arg3); //0x20
    VOID* CallbackContext;                                                  //0x28
};
