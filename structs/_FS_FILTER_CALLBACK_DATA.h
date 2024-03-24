#pragma once
/* ------------------ */

//0x40 bytes (sizeof)
struct _FS_FILTER_CALLBACK_DATA
{
    ULONG SizeOfFsFilterCallbackData;                                       //0x0
    UCHAR Operation;                                                        //0x4
    UCHAR Reserved;                                                         //0x5
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x8
    struct _FILE_OBJECT* FileObject;                                        //0x10
    union _FS_FILTER_PARAMETERS Parameters;                                 //0x18
};
/* Used in */
// _FS_FILTER_CALLBACKS

