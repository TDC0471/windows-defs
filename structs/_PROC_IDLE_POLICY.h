#pragma once
/* ------------------ */

//0x6 bytes (sizeof)
struct _PROC_IDLE_POLICY
{
    UCHAR PromotePercent;                                                   //0x0
    UCHAR DemotePercent;                                                    //0x1
    UCHAR PromotePercentBase;                                               //0x2
    UCHAR DemotePercentBase;                                                //0x3
    UCHAR AllowScaling;                                                     //0x4
    UCHAR ForceLightIdle;                                                   //0x5
};
/* Used in */
// _PROCESSOR_POWER_STATE

