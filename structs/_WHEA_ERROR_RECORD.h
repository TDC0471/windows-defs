#pragma once
/* ------------------ */

//0xc8 bytes (sizeof)
struct _WHEA_ERROR_RECORD
{
    struct _WHEA_ERROR_RECORD_HEADER Header;                                //0x0
    struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR SectionDescriptor[1];      //0x80
};
/* Used in */
// _WHEAP_ERROR_RECORD_WRAPPER

