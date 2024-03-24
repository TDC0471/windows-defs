#pragma once
/* ------------------ */

//0x10 bytes (sizeof)
struct _LDR_SERVICE_TAG_RECORD
{
    struct _LDR_SERVICE_TAG_RECORD* Next;                                   //0x0
    ULONG ServiceTag;                                                       //0x8
};
/* Used in */
// _LDR_DDAG_NODE
// _LDR_SERVICE_TAG_RECORD

