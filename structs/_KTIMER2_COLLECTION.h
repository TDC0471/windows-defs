#pragma once
/* ------------------ */

//0x18 bytes (sizeof)
struct _KTIMER2_COLLECTION
{
    struct _RTL_RB_TREE Tree;                                               //0x0
    ULONGLONG NextDueTime;                                                  //0x10
};
