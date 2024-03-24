#pragma once
/* ------------------ */

//0x18 bytes (sizeof)
struct _PPM_SELECTION_MENU_ENTRY
{
    UCHAR StrictDependency;                                                 //0x0
    UCHAR InitiatingState;                                                  //0x1
    UCHAR DependentState;                                                   //0x2
    ULONG StateIndex;                                                       //0x4
    ULONG Dependencies;                                                     //0x8
    struct _PPM_SELECTION_DEPENDENCY* DependencyList;                       //0x10
};
/* Used in */
// _PPM_SELECTION_MENU

