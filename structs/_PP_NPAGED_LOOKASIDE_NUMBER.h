#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PP_NPAGED_LOOKASIDE_NUMBER
{
    LookasideSmallIrpList = 0,
    LookasideMediumIrpList = 1,
    LookasideLargeIrpList = 2,
    LookasideMdlList = 3,
    LookasideCreateInfoList = 4,
    LookasideNameBufferList = 5,
    LookasideTwilightList = 6,
    LookasideCompletionList = 7,
    LookasideScratchBufferList = 8,
    LookasideMaximumList = 9
};
