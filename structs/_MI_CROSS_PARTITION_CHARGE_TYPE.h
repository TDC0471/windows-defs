#pragma once
/* ------------------ */

//0x4 bytes (sizeof)
enum _MI_CROSS_PARTITION_CHARGE_TYPE
{
    MiCrossPartitionSectionResAvailCharge = 0,
    MiCrossPartitionSectionCommitCharge = 1,
    MiCrossPartitionPageCombineResAvailCharge = 2,
    MiCrossPartitionPageCombineCommitCharge = 3,
    MiCrossPartitionLargePageResAvailCharge = 4,
    MiCrossPartitionLargePageCommitCharge = 5,
    MiCrossPartitionPageCloneResAvailCharge = 6,
    MiCrossPartitionMaximumCharge = 7
};
