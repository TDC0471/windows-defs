#pragma once
/* ------------------ */

//0x38 bytes (sizeof)
struct _THERMAL_COOLING_INTERFACE
{
    USHORT Size;                                                            //0x0
    USHORT Version;                                                         //0x2
    VOID* Context;                                                          //0x8
    VOID (*InterfaceReference)(VOID* arg1);                                 //0x10
    VOID (*InterfaceDereference)(VOID* arg1);                               //0x18
    ULONG Flags;                                                            //0x20
    VOID (*ActiveCooling)(VOID* arg1, UCHAR arg2);                          //0x28
    VOID (*PassiveCooling)(VOID* arg1, ULONG arg2);                         //0x30
};
/* Used in */
// _POP_COOLING_EXTENSION

