#pragma once
/* ------------------ */

//0x28 bytes (sizeof)
struct _RSDT_32
{
    struct _DESCRIPTION_HEADER Header;                                      //0x0
    ULONG Tables[1];                                                        //0x24
};
