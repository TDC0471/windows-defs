#pragma once
/* ------------------ */

//0x20 bytes (sizeof)
struct _ETW_PMC_SUPPORT
{
    enum _KPROFILE_SOURCE* Source;                                          //0x0
    volatile ULONG HookIdCount;                                             //0x8
    USHORT HookId[4];                                                       //0xc
    volatile ULONG CountersCount;                                           //0x14
    struct _HAL_PMC_COUNTERS* ProcessorCtrs[1];                             //0x18
};
/* Used in */
// _WMI_LOGGER_CONTEXT

