#pragma once
/* ------------------ */

//0x10 bytes (sizeof)
struct _ARBITER_ORDERING_LIST
{
    USHORT Count;                                                           //0x0
    USHORT Maximum;                                                         //0x2
    struct _ARBITER_ORDERING* Orderings;                                    //0x8
};
/* Used in */
// _ARBITER_INSTANCE

