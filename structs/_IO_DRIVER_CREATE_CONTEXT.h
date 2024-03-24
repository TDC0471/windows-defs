#pragma once
/* ------------------ */

//0x28 bytes (sizeof)
struct _IO_DRIVER_CREATE_CONTEXT
{
    SHORT Size;                                                             //0x0
    struct _ECP_LIST* ExtraCreateParameter;                                 //0x8
    VOID* DeviceObjectHint;                                                 //0x10
    struct _TXN_PARAMETER_BLOCK* TxnParameters;                             //0x18
    struct _EJOB* SiloContext;                                              //0x20
};
/* Used in */
// _OPEN_PACKET

