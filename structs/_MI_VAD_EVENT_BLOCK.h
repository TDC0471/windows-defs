#pragma once
/* ------------------ */

//0x48 bytes (sizeof)
struct _MI_VAD_EVENT_BLOCK
{
    struct _MI_VAD_EVENT_BLOCK* Next;                                       //0x0
    union
    {
        struct _KGATE Gate;                                                 //0x8
        struct _MMADDRESS_LIST SecureInfo;                                  //0x8
        struct _RTL_BITMAP_EX BitMap;                                       //0x8
        struct _MMINPAGE_SUPPORT* InPageSupport;                            //0x8
        struct _MI_LARGEPAGE_VAD_INFO LargePage;                            //0x8
        struct _MI_PHYSICAL_VIEW AweView;                                   //0x8
        struct _ETHREAD* CreatingThread;                                    //0x8
        struct _MI_SUB64K_FREE_RANGES PebTeb;                               //0x8
        struct _MMVAD_SHORT* PlaceholderVad;                                //0x8
    };
    ULONG WaitReason;                                                       //0x40
};
/* Used in */
// _MI_VAD_EVENT_BLOCK
// _MMVAD_SHORT

