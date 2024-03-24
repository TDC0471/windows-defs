#pragma once
/* ------------------ */

//0x3e0 bytes (sizeof)
struct PO_MEMORY_IMAGE
{
    ULONG Signature;                                                        //0x0
    ULONG ImageType;                                                        //0x4
    ULONG CheckSum;                                                         //0x8
    ULONG LengthSelf;                                                       //0xc
    ULONGLONG PageSelf;                                                     //0x10
    ULONG PageSize;                                                         //0x18
    union _LARGE_INTEGER SystemTime;                                        //0x20
    ULONGLONG InterruptTime;                                                //0x28
    ULONGLONG FeatureFlags;                                                 //0x30
    UCHAR HiberFlags;                                                       //0x38
    UCHAR HiberSimulateFlags;                                               //0x39
    UCHAR spare[2];                                                         //0x3a
    ULONG NoHiberPtes;                                                      //0x3c
    ULONGLONG HiberVa;                                                      //0x40
    ULONG NoFreePages;                                                      //0x48
    ULONG FreeMapCheck;                                                     //0x4c
    ULONG WakeCheck;                                                        //0x50
    ULONGLONG NumPagesForLoader;                                            //0x58
    ULONGLONG FirstSecureRestorePage;                                       //0x60
    ULONGLONG FirstBootRestorePage;                                         //0x68
    ULONGLONG FirstKernelRestorePage;                                       //0x70
    ULONGLONG FirstChecksumRestorePage;                                     //0x78
    ULONGLONG NoChecksumEntries;                                            //0x80
    struct _PO_HIBER_PERF PerfInfo;                                         //0x88
    ULONG FirmwareRuntimeInformationPages;                                  //0x280
    ULONGLONG FirmwareRuntimeInformation[1];                                //0x288
    ULONG SpareUlong;                                                       //0x290
    ULONG NoBootLoaderLogPages;                                             //0x294
    ULONGLONG BootLoaderLogPages[24];                                       //0x298
    ULONG NotUsed;                                                          //0x358
    ULONG ResumeContextCheck;                                               //0x35c
    ULONG ResumeContextPages;                                               //0x360
    UCHAR Hiberboot;                                                        //0x364
    UCHAR SecureLaunched;                                                   //0x365
    UCHAR SecureBoot;                                                       //0x366
    ULONGLONG HvPageTableRoot;                                              //0x368
    ULONGLONG HvEntryPoint;                                                 //0x370
    ULONGLONG HvReservedTransitionAddress;                                  //0x378
    ULONGLONG HvReservedTransitionAddressSize;                              //0x380
    ULONGLONG BootFlags;                                                    //0x388
    ULONGLONG RestoreProcessorStateRoutine;                                 //0x390
    ULONGLONG HighestPhysicalPage;                                          //0x398
    ULONGLONG BitlockerKeyPfns[4];                                          //0x3a0
    ULONG HardwareSignature;                                                //0x3c0
    union _LARGE_INTEGER SMBiosTablePhysicalAddress;                        //0x3c8
    ULONG SMBiosTableLength;                                                //0x3d0
    UCHAR SMBiosMajorVersion;                                               //0x3d4
    UCHAR SMBiosMinorVersion;                                               //0x3d5
    UCHAR HiberResumeXhciHandoffSkip;                                       //0x3d6
    UCHAR InitializeUSBCore;                                                //0x3d7
    UCHAR ValidUSBCoreId;                                                   //0x3d8
    UCHAR USBCoreId;                                                        //0x3d9
    UCHAR SkipMemoryMapValidation;                                          //0x3da
};
/* Used in */
// _POP_HIBER_CONTEXT

