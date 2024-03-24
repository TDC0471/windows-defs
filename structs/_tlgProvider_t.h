#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_EVENT_FILTER_DESCRIPTOR.h>

//0x38 bytes (sizeof)
struct _tlgProvider_t
{
    ULONG LevelPlus1;                                                       //0x0
    USHORT* ProviderMetadataPtr;                                            //0x8
    ULONGLONG KeywordAny;                                                   //0x10
    ULONGLONG KeywordAll;                                                   //0x18
    ULONGLONG RegHandle;                                                    //0x20
    VOID (*EnableCallback)(struct _GUID* arg1, ULONG arg2, UCHAR arg3, ULONGLONG arg4, ULONGLONG arg5, struct _EVENT_FILTER_DESCRIPTOR* arg6, VOID* arg7); //0x28
    VOID* CallbackContext;                                                  //0x30
};
/* Used in */
// _MI_SYSTEM_INFORMATION

