#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KCONTINUE_TYPE
{
    KCONTINUE_UNWIND = 0,
    KCONTINUE_RESUME = 1,
    KCONTINUE_LONGJUMP = 2,
    KCONTINUE_SET = 3,
    KCONTINUE_LAST = 4
};
