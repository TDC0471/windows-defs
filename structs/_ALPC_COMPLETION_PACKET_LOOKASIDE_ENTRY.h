#pragma once
/* ------------------ */

//0x18 bytes (sizeof)
struct _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY
{
    struct _SINGLE_LIST_ENTRY ListEntry;                                    //0x0
    struct _IO_MINI_COMPLETION_PACKET_USER* Packet;                         //0x8
    struct _ALPC_COMPLETION_PACKET_LOOKASIDE* Lookaside;                    //0x10
};
/* Used in */
// _ALPC_COMPLETION_PACKET_LOOKASIDE

