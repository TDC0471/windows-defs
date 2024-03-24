#pragma once
/* ------------------ */

//0x58 bytes (sizeof)
struct _TOKEN_ACCESS_INFORMATION
{
    struct _SID_AND_ATTRIBUTES_HASH* SidHash;                               //0x0
    struct _SID_AND_ATTRIBUTES_HASH* RestrictedSidHash;                     //0x8
    struct _TOKEN_PRIVILEGES* Privileges;                                   //0x10
    struct _LUID AuthenticationId;                                          //0x18
    enum _TOKEN_TYPE TokenType;                                             //0x20
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;                  //0x24
    struct _TOKEN_MANDATORY_POLICY MandatoryPolicy;                         //0x28
    ULONG Flags;                                                            //0x2c
    ULONG AppContainerNumber;                                               //0x30
    VOID* PackageSid;                                                       //0x38
    struct _SID_AND_ATTRIBUTES_HASH* CapabilitiesHash;                      //0x40
    VOID* TrustLevelSid;                                                    //0x48
    VOID* SecurityAttributes;                                               //0x50
};
/* Used in */
// _WMI_LOGGER_CONTEXT

