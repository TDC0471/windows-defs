#pragma once
/* ------------------ */

//0x4 bytes (sizeof)
enum _MI_VAD_ALLOCATION_CELL_TYPE
{
    MiVadBottomUp = 0,
    MiVadStackPebTeb = 1,
    MiVadReserved64 = 2,
    MiVadAllocationCellMaximum = 3
};
