#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KGATE.h>
#include <_KEVENT.h>

//0x28 bytes (sizeof)
struct _MMMOD_WRITER_LISTHEAD
{
    struct _LIST_ENTRY ListHead;                                            //0x0
    union
    {
        struct _KGATE Gate;                                                 //0x10
        struct _KEVENT Event;                                               //0x10
    };
};
/* Used in */
// _MI_PARTITION_MODWRITES

