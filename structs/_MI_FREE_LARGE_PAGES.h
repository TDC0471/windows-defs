#pragma once
/* ------------------ */

//0x430 bytes (sizeof)
struct _MI_FREE_LARGE_PAGES
{
    ULONGLONG LargePageFreeCount[2];                                        //0x0
    ULONGLONG LargePageFreeCountHiLow[2][2];                                //0x10
    ULONGLONG LargePagesCount[2][2][4][4];                                  //0x30
    struct _MI_FREE_LARGE_PAGE_LIST* LargePageEntries[2][2][4][4];          //0x230
};
/* Used in */
// _MI_NODE_INFORMATION

