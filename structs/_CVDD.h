#pragma once
/* ------------------ */

//0x1c bytes (sizeof)
union _CVDD
{
    ULONG Signature;                                                        //0x0
    struct _NB10 NB10;                                                      //0x0
    struct _RSDS RsDs;                                                      //0x0
};
/* Used in */
// _ETW_DEBUGID_TRACKING_ENTRY

