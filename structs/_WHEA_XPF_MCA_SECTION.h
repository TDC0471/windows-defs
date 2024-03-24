#pragma once
/* ------------------ */

//0x110 bytes (sizeof)
struct _WHEA_XPF_MCA_SECTION
{
    ULONG VersionNumber;                                                    //0x0
    enum _WHEA_CPU_VENDOR CpuVendor;                                        //0x4
    union _LARGE_INTEGER Timestamp;                                         //0x8
    ULONG ProcessorNumber;                                                  //0x10
    union _MCG_STATUS GlobalStatus;                                         //0x14
    ULONGLONG InstructionPointer;                                           //0x1c
    ULONG BankNumber;                                                       //0x24
    union _MCI_STATUS Status;                                               //0x28
    ULONGLONG Address;                                                      //0x30
    ULONGLONG Misc;                                                         //0x38
    ULONG ExtendedRegisterCount;                                            //0x40
    ULONG ApicId;                                                           //0x44
    union
    {
        ULONGLONG ExtendedRegisters[24];                                    //0x48
        struct _WHEA_AMD_EXTENDED_REGISTERS AMDExtendedRegisters;           //0x48
    };
    union _MCG_CAP GlobalCapability;                                        //0x108
};
