#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KTHREAD.h>
#include <_KEVENT.h>

//0x30 bytes (sizeof)
struct _KWAIT_CHAIN_ENTRY
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _KTHREAD* Thread;                                                //0x10
    struct _KEVENT Event;                                                   //0x18
};
