#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _BLOB_ID
{
    BLOB_TYPE_UNKNOWN = 0,
    BLOB_TYPE_CONNECTION_INFO = 1,
    BLOB_TYPE_MESSAGE = 2,
    BLOB_TYPE_SECURITY_CONTEXT = 3,
    BLOB_TYPE_SECTION = 4,
    BLOB_TYPE_REGION = 5,
    BLOB_TYPE_VIEW = 6,
    BLOB_TYPE_RESERVE = 7,
    BLOB_TYPE_DIRECT_TRANSFER = 8,
    BLOB_TYPE_HANDLE_DATA = 9,
    BLOB_TYPE_MAX_ID = 10
};
/* Used in */
// _BLOB_TYPE

