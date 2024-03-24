#pragma once
/* ------------------ */

//0x24 bytes (sizeof)
struct _CM_FULL_RESOURCE_DESCRIPTOR
{
    enum _INTERFACE_TYPE InterfaceType;                                     //0x0
    ULONG BusNumber;                                                        //0x4
    struct _CM_PARTIAL_RESOURCE_LIST PartialResourceList;                   //0x8
};
/* Used in */
// _CM_RESOURCE_LIST

