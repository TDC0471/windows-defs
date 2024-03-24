#pragma once
/* ------------------ */

//0x8 bytes (sizeof)
struct _KTRANSACTION_HISTORY
{
    enum  RecordType;                                                     //0x0
    ULONG Payload;                                                          //0x4
};
/* Used in */
// _KTRANSACTION

