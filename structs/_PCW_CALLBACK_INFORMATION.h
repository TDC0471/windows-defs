#pragma once
/* ------------------ */

//0x28 bytes (sizeof)
union _PCW_CALLBACK_INFORMATION
{
    struct _PCW_COUNTER_INFORMATION AddCounter;                             //0x0
    struct _PCW_COUNTER_INFORMATION RemoveCounter;                          //0x0
    struct _PCW_MASK_INFORMATION EnumerateInstances;                        //0x0
    struct _PCW_MASK_INFORMATION CollectData;                               //0x0
};
/* Used in */
// _PCW_REGISTRATION_INFORMATION

