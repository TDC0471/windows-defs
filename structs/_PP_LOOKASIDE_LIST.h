#pragma once
/* ------------------ */

//0x10 bytes (sizeof)
struct _PP_LOOKASIDE_LIST
{
    struct _GENERAL_LOOKASIDE* P;                                           //0x0
    struct _GENERAL_LOOKASIDE* L;                                           //0x8
};
/* Used in */
// _KPRCB

