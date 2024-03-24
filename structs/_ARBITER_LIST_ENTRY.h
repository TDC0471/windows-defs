#pragma once
/* ------------------ */

//0x60 bytes (sizeof)
struct _ARBITER_LIST_ENTRY
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONG AlternativeCount;                                                 //0x10
    struct _IO_RESOURCE_DESCRIPTOR* Alternatives;                           //0x18
    struct _DEVICE_OBJECT* PhysicalDeviceObject;                            //0x20
    enum _ARBITER_REQUEST_SOURCE RequestSource;                             //0x28
    ULONG Flags;                                                            //0x2c
    LONGLONG WorkSpace;                                                     //0x30
    enum _INTERFACE_TYPE InterfaceType;                                     //0x38
    ULONG SlotNumber;                                                       //0x3c
    ULONG BusNumber;                                                        //0x40
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* Assignment;                     //0x48
    struct _IO_RESOURCE_DESCRIPTOR* SelectedAlternative;                    //0x50
    enum _ARBITER_RESULT Result;                                            //0x58
};
/* Used in */
// _ARBITER_ALLOCATION_STATE

