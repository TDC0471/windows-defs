#pragma once
/* ------------------ */

//0x30 bytes (sizeof)
struct _OBJECT_FOOTER
{
    struct _HANDLE_REVOCATION_INFO HandleRevocationInfo;                    //0x0
    struct _OB_EXTENDED_USER_INFO ExtendedUserInfo;                         //0x20
};
/* Used in */
// _OBJECT_HEADER_EXTENDED_INFO

