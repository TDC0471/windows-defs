#pragma once
/* ------------------ */

//0x20 bytes (sizeof)
struct _CM_KEY_HASH
{
    struct _CM_PATH_HASH ConvKey;                                           //0x0
    struct _CM_KEY_HASH* NextHash;                                          //0x8
    struct _HHIVE* KeyHive;                                                 //0x10
    ULONG KeyCell;                                                          //0x18
};
/* Used in */
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_HASH
// _CM_KEY_HASH_TABLE_ENTRY
// _CM_NAME_CONTROL_BLOCK

