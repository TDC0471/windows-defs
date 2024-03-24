#pragma once
/* ------------------ */

//0x10 bytes (sizeof)
struct _PCW_COUNTER_INFORMATION
{
    ULONGLONG CounterMask;                                                  //0x0
    struct _UNICODE_STRING* InstanceMask;                                   //0x8
};
/* Used in */
// _PCW_CALLBACK_INFORMATION

