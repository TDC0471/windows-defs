#pragma once
/* ------------------ */

//0x70 bytes (sizeof)
struct _DEVOBJ_EXTENSION
{
    SHORT Type;                                                             //0x0
    USHORT Size;                                                            //0x2
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x8
    ULONG PowerFlags;                                                       //0x10
    struct _DEVICE_OBJECT_POWER_EXTENSION* Dope;                            //0x18
    ULONG ExtensionFlags;                                                   //0x20
    VOID* DeviceNode;                                                       //0x28
    struct _DEVICE_OBJECT* AttachedTo;                                      //0x30
    LONG StartIoCount;                                                      //0x38
    LONG StartIoKey;                                                        //0x3c
    ULONG StartIoFlags;                                                     //0x40
    struct _VPB* Vpb;                                                       //0x48
    VOID* DependencyNode;                                                   //0x50
    VOID* InterruptContext;                                                 //0x58
    LONG InterruptCount;                                                    //0x60
    VOID* VerifierContext;                                                  //0x68
};
/* Used in */
// _DEVICE_OBJECT

