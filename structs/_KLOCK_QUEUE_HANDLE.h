#pragma once
/* ------------------ */

//0x18 bytes (sizeof)
struct _KLOCK_QUEUE_HANDLE
{
    struct _KSPIN_LOCK_QUEUE LockQueue;                                     //0x0
    UCHAR OldIrql;                                                          //0x10
};
/* Used in */
// _KPRCB

