#pragma once
/* ------------------ */

//0x58 bytes (sizeof)
struct _IOP_FILE_OBJECT_EXTENSION
{
    ULONG FoExtFlags;                                                       //0x0
    VOID* FoExtPerTypeExtension[9];                                         //0x8
    enum _IOP_PRIORITY_HINT FoIoPriorityHint;                               //0x50
};
