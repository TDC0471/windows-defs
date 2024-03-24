#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KALPC_REGION.h>
#include <_ALPC_PORT.h>
#include <_EPROCESS.h>
#include <_LIST_ENTRY.h>

//0x60 bytes (sizeof)
struct _KALPC_VIEW
{
    struct _LIST_ENTRY ViewListEntry;                                       //0x0
    struct _KALPC_REGION* Region;                                           //0x10
    struct _ALPC_PORT* OwnerPort;                                           //0x18
    struct _EPROCESS* OwnerProcess;                                         //0x20
    VOID* Address;                                                          //0x28
    ULONGLONG Size;                                                         //0x30
    VOID* SecureViewHandle;                                                 //0x38
    VOID* WriteAccessHandle;                                                //0x40
    union
    {
        struct
        {
            ULONG WriteAccess:1;                                            //0x48
            ULONG AutoRelease:1;                                            //0x48
            ULONG ForceUnlink:1;                                            //0x48
            ULONG SystemSpace:1;                                            //0x48
        } s1;                                                               //0x48
    } u1;                                                                   //0x48
    ULONG NumberOfOwnerMessages;                                            //0x4c
    struct _LIST_ENTRY ProcessViewListEntry;                                //0x50
};
/* Used in */
// _KALPC_MESSAGE_ATTRIBUTES
// _KALPC_REGION

