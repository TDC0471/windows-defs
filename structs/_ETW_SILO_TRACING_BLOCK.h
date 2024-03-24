#pragma once
/* ------------------ */

//0x40 bytes (sizeof)
struct _ETW_SILO_TRACING_BLOCK
{
    struct _EX_FAST_REF* ProcessorBuffers;                                  //0x0
    ULONGLONG* EventsLoggedCount;                                           //0x8
    LONGLONG* QpcDelta;                                                     //0x10
};
/* Used in */
// _ETW_SILODRIVERSTATE

