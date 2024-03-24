#pragma once
/* ------------------ */

//0x20 bytes (sizeof)
struct _LPCP_PORT_QUEUE
{
    struct _LPCP_NONPAGED_PORT_QUEUE* NonPagedPortQueue;                    //0x0
    struct _KSEMAPHORE* Semaphore;                                          //0x8
    struct _LIST_ENTRY ReceiveHead;                                         //0x10
};
/* Used in */
// _LPCP_PORT_OBJECT

