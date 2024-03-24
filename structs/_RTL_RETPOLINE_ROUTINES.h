#pragma once
/* ------------------ */

//0x50 bytes (sizeof)
struct _RTL_RETPOLINE_ROUTINES
{
    ULONG UnwindDataOffset;                                                 //0x0
    ULONG SwitchtableJump[16];                                              //0x4
    ULONG CfgIndirectRax;                                                   //0x44
    ULONG NonCfgIndirectRax;                                                //0x48
    ULONG ImportR10;                                                        //0x4c
};
/* Used in */
// _MI_SECTION_STATE

