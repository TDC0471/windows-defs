#pragma once
/* ------------------ */

//0x10 bytes (sizeof)
struct _OBJECT_HEADER_HANDLE_INFO
{
    union
    {
        struct _OBJECT_HANDLE_COUNT_DATABASE* HandleCountDataBase;          //0x0
        struct _OBJECT_HANDLE_COUNT_ENTRY SingleEntry;                      //0x0
    };
};
