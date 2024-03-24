#pragma once
/* ------------------ */

//0x18 bytes (sizeof)
struct wil_details_RecordUsageResult
{
    LONG queueBackground;                                                   //0x0
    ULONG countImmediate;                                                   //0x4
    enum wil_details_ServiceReportingKind kindImmediate;                    //0x8
    ULONG payloadId;                                                        //0xc
    LONG ignoredUse;                                                        //0x10
    LONG isVariantConfiguration;                                            //0x14
};
