#pragma once
/* ------------------ */

//0x90 bytes (sizeof)
struct _MSUBSECTION
{
    struct _SUBSECTION Core;                                                //0x0
    struct _RTL_BALANCED_NODE SubsectionNode;                               //0x38
    struct _LIST_ENTRY DereferenceList;                                     //0x50
    ULONGLONG NumberOfMappedViews;                                          //0x60
    ULONG NumberOfPfnReferences;                                            //0x68
    ULONG LargeViews;                                                       //0x6c
    struct _MI_PROTOTYPE_PTES_NODE ProtosNode;                              //0x70
};
/* Used in */
// _MI_SECTION_STATE

