#pragma once
/* ------------------ */

//0x2e0 bytes (sizeof)
struct _OBP_SILODRIVERSTATE
{
    struct _DEVICE_MAP* SystemDeviceMap;                                    //0x0
    struct _OBP_SYSTEM_DOS_DEVICE_STATE SystemDosDeviceState;               //0x8
    struct _EX_PUSH_LOCK DeviceMapLock;                                     //0x78
    struct _OBJECT_NAMESPACE_LOOKUPTABLE PrivateNamespaceLookupTable;       //0x80
};
/* Used in */
// _ESERVERSILO_GLOBALS

