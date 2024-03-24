#pragma once
/* ------------------ */

//0x18 bytes (sizeof)
struct _DELAY_ACK_FO
{
    struct _LIST_ENTRY Links;                                               //0x0
    struct _FILE_OBJECT* OriginalFileObject;                                //0x10
};
