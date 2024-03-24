#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_PO_NOTIFY_ORDER_LEVEL.h>

//0x180 bytes (sizeof)
struct _PO_DEVICE_NOTIFY_ORDER
{
    UCHAR Locked;                                                           //0x0
    struct _DEVICE_OBJECT** WarmEjectPdoPointer;                            //0x8
    struct _PO_NOTIFY_ORDER_LEVEL OrderLevel[5];                            //0x10
    ULONG Flags;                                                            //0x178
};
/* Used in */
// _POP_DEVICE_SYS_STATE

