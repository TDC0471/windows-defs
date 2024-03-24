#pragma once
/* ------------------ */

//0xa0 bytes (sizeof)
struct _TIMEZONE_CHANGE_EVENT
{
    struct _KDPC Dpc;                                                       //0x0
    struct _KTIMER Timer;                                                   //0x40
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x80
};
/* Used in */
// _EX_TIMEZONE_STATE

