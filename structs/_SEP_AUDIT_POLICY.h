#pragma once
/* ------------------ */

//0x1f bytes (sizeof)
struct _SEP_AUDIT_POLICY
{
    struct _TOKEN_AUDIT_POLICY AdtTokenPolicy;                              //0x0
    UCHAR PolicySetStatus;                                                  //0x1e
};
/* Used in */
// _TOKEN

