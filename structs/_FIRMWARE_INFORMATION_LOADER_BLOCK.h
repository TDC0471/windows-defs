#pragma once
/* ------------------ */

//0x40 bytes (sizeof)
struct _FIRMWARE_INFORMATION_LOADER_BLOCK
{
    ULONG FirmwareTypeUefi:1;                                               //0x0
    ULONG EfiRuntimeUseIum:1;                                               //0x0
    ULONG EfiRuntimePageProtectionSupported:1;                              //0x0
    ULONG Reserved:29;                                                      //0x0
    union
    {
        struct _EFI_FIRMWARE_INFORMATION EfiInformation;                    //0x8
        struct _PCAT_FIRMWARE_INFORMATION PcatInformation;                  //0x8
    } u;                                                                    //0x8
};
/* Used in */
// _LOADER_PARAMETER_BLOCK

