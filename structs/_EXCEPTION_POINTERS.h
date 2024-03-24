#pragma once
/* ------------------ */

//0x10 bytes (sizeof)
struct _EXCEPTION_POINTERS
{
    struct _EXCEPTION_RECORD* ExceptionRecord;                              //0x0
    struct _CONTEXT* ContextRecord;                                         //0x8
};
