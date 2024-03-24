#pragma once
/* ------------------ */

#include <_RTL_BALANCED_LINKS.h>

//0x28 bytes (sizeof)
struct _KTMOBJECT_NAMESPACE_LINK
{
    struct _RTL_BALANCED_LINKS Links;                                       //0x0
    UCHAR Expired;                                                          //0x20
};
/* Used in */
// _KENLISTMENT
// _KRESOURCEMANAGER
// _KTM
// _KTRANSACTION

