#pragma once
/* ------------------ */

//0x8 bytes (sizeof)
struct wil_details_FeatureReportingCache
{
    union wil_details_ReportedState reported;                               //0x0
    union wil_details_RecordedState recorded;                               //0x4
};
