#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum LSA_FOREST_TRUST_RECORD_TYPE
{
    ForestTrustTopLevelName = 0,
    ForestTrustTopLevelNameEx = 1,
    ForestTrustDomainInfo = 2,
    ForestTrustBinaryInfo = 3,
    ForestTrustScannerInfo = 4,
    ForestTrustRecordTypeLast = 4
};
