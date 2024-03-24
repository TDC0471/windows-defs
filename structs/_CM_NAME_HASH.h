#pragma once
/* ------------------ */

//0x18 bytes (sizeof)
struct _CM_NAME_HASH
{
    struct _CM_COMPONENT_HASH ConvKey;                                      //0x0
    struct _CM_NAME_HASH* NextHash;                                         //0x8
    USHORT NameLength;                                                      //0x10
    WCHAR Name[1];                                                          //0x12
};
/* Used in */
// _CM_NAME_CONTROL_BLOCK
// _CM_NAME_HASH

