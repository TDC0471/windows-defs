#pragma once
/* ------------------ */

#include <_IRP.h>
#include <_IRP.h>

//0x10 bytes (sizeof)
struct _PO_IRP_QUEUE
{
    struct _IRP* CurrentIrp;                                                //0x0
    struct _IRP* PendingIrpList;                                            //0x8
};
/* Used in */
// _PO_IRP_MANAGER

