#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct LIST_ENTRY64
{
    ULONGLONG Flink;                                                        //0x0
    ULONGLONG Blink;                                                        //0x8
};
/* Used in */
// _ACTIVATION_CONTEXT_STACK64
// _PEB64
// _TEB64

