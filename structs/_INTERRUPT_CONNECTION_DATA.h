#pragma once
/* ------------------ */

//0x60 bytes (sizeof)
struct _INTERRUPT_CONNECTION_DATA
{
    ULONG Count;                                                            //0x0
    struct _INTERRUPT_VECTOR_DATA Vectors[1];                               //0x8
};
/* Used in */
// _KINTERRUPT

