#pragma once
/* ------------------ */

//0x4 bytes (sizeof)
enum _WHEA_ERROR_SOURCE_STATE
{
    WheaErrSrcStateStopped = 1,
    WheaErrSrcStateStarted = 2,
    WheaErrSrcStateRemoved = 3,
    WheaErrSrcStateRemovePending = 4
};
/* Used in */
// _WHEA_ERROR_SOURCE_DESCRIPTOR

