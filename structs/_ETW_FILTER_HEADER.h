#pragma once
/* ------------------ */

//0x68 bytes (sizeof)
struct _ETW_FILTER_HEADER
{
    LONG FilterFlags;                                                       //0x0
    struct _ETW_FILTER_PID* PidFilter;                                      //0x8
    struct _ETW_FILTER_STRING_TOKEN* ExeFilter;                             //0x10
    struct _ETW_FILTER_STRING_TOKEN* PkgIdFilter;                           //0x18
    struct _ETW_FILTER_STRING_TOKEN* PkgAppIdFilter;                        //0x20
    struct _ETW_FILTER_STRING_TOKEN* ContainerFilter;                       //0x28
    struct _ETW_PERFECT_HASH_FUNCTION* StackWalkIdFilter;                   //0x30
    struct _ETW_FILTER_EVENT_NAME_DATA* StackWalkNameFilter;                //0x38
    struct _EVENT_FILTER_LEVEL_KW* StackWalkLevelKwFilter;                  //0x40
    struct _ETW_PERFECT_HASH_FUNCTION* EventIdFilter;                       //0x48
    struct _ETW_PAYLOAD_FILTER* PayloadFilter;                              //0x50
    struct _EVENT_FILTER_HEADER* ProviderSideFilter;                        //0x58
    struct _ETW_FILTER_EVENT_NAME_DATA* EventNameFilter;                    //0x60
};
/* Used in */
// _ETW_GUID_ENTRY

