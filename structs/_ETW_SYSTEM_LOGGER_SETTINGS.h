#pragma once
/* ------------------ */

//0x174 bytes (sizeof)
struct _ETW_SYSTEM_LOGGER_SETTINGS
{
    struct _ETW_SYSTEM_LOGGER EtwpSystemLogger[8];                          //0x0
    volatile ULONG EtwpActiveSystemLoggers;                                 //0x10
    struct _PERFINFO_GROUPMASK SiloGlobalGroupMask;                         //0x14
    struct _PERFINFO_GROUPMASK EtwpGroupMasks[10];                          //0x34
};
/* Used in */
// _ETW_SILODRIVERSTATE

