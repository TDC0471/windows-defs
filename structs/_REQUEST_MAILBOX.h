#pragma once
/* ------------------ */

//0x40 bytes (sizeof)
struct _REQUEST_MAILBOX
{
    struct _REQUEST_MAILBOX* Next;                                          //0x0
    ULONGLONG RequestSummary;                                               //0x8
    struct _KREQUEST_PACKET RequestPacket;                                  //0x10
    volatile LONG* NodeTargetCountAddr;                                     //0x30
    volatile LONG NodeTargetCount;                                          //0x38
};
/* Used in */
// _KPRCB
// _REQUEST_MAILBOX

