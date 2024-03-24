#pragma once
/* ------------------ */

//0x68 bytes (sizeof)
struct _CM_KEY_BODY
{
    ULONG Type;                                                             //0x0
    struct _CM_KEY_CONTROL_BLOCK* KeyControlBlock;                          //0x8
    struct _CM_NOTIFY_BLOCK* NotifyBlock;                                   //0x10
    VOID* ProcessID;                                                        //0x18
    struct _LIST_ENTRY KeyBodyList;                                         //0x20
    ULONG Flags:16;                                                         //0x30
    ULONG HandleTags:16;                                                    //0x30
    union _CM_TRANS_PTR Trans;                                              //0x38
    struct _GUID* KtmUow;                                                   //0x40
    struct _LIST_ENTRY ContextListHead;                                     //0x48
    VOID* EnumerationResumeContext;                                         //0x58
    ULONG RestrictedAccessMask;                                             //0x60
};
/* Used in */
// _CM_KEY_CONTROL_BLOCK
// _CM_NOTIFY_BLOCK

