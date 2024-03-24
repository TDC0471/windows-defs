#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum FEATURE_ENABLED_STATE
{
    FEATURE_ENABLED_STATE_DEFAULT = 0,
    FEATURE_ENABLED_STATE_DISABLED = 1,
    FEATURE_ENABLED_STATE_ENABLED = 2,
    FEATURE_ENABLED_STATE_HAS_NOTIFICATION = 128,
    FEATURE_ENABLED_STATE_HAS_VARIANT_CONFIGURATION = 64
};
