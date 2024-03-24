#pragma once
/* ------------------ */

#include <_PPM_POLICY_SETTINGS_MASK.h>
#include <_KHETERO_CPU_POLICY.h>

//0xab0 bytes (sizeof)
struct _PPM_ENGINE_SETTINGS
{
    union _PPM_POLICY_SETTINGS_MASK ExplicitSetting[2];                     //0x0
    UCHAR ThrottlingPolicy;                                                 //0x10
    ULONG PerfTimeCheck;                                                    //0x14
    UCHAR PerfHistoryCount[2];                                              //0x18
    UCHAR PerfMinPolicy[2];                                                 //0x1a
    UCHAR PerfMaxPolicy[2];                                                 //0x1c
    UCHAR PerfDecreaseTime[2];                                              //0x1e
    UCHAR PerfIncreaseTime[2];                                              //0x20
    UCHAR PerfDecreasePolicy[2];                                            //0x22
    UCHAR PerfIncreasePolicy[2];                                            //0x24
    UCHAR PerfDecreaseThreshold[2];                                         //0x26
    UCHAR PerfIncreaseThreshold[2];                                         //0x28
    ULONG PerfFrequencyCap[2];                                              //0x2c
    ULONG PerfBoostPolicy;                                                  //0x34
    ULONG PerfBoostMode;                                                    //0x38
    ULONG PerfReductionTolerance;                                           //0x3c
    ULONG EnergyPerfPreference[2];                                          //0x40
    ULONG AutonomousActivityWindow;                                         //0x48
    UCHAR AutonomousPreference;                                             //0x4c
    UCHAR LatencyHintPerf[2];                                               //0x4d
    UCHAR LatencyHintUnpark[2];                                             //0x4f
    ULONG ResponsivenessDisableThreshold[2];                                //0x54
    ULONG ResponsivenessEnableThreshold[2];                                 //0x5c
    UCHAR ResponsivenessDisableTime[2];                                     //0x64
    UCHAR ResponsivenessEnableTime[2];                                      //0x66
    ULONG ResponsivenessEppCeiling[2];                                      //0x68
    ULONG ResponsivenessPerfFloor[2];                                       //0x70
    UCHAR DutyCycling;                                                      //0x78
    UCHAR ParkingPerfState[2];                                              //0x79
    UCHAR DistributeUtility;                                                //0x7b
    UCHAR CoreParkingOverUtilizationThreshold;                              //0x7c
    UCHAR CoreParkingConcurrencyThreshold;                                  //0x7d
    UCHAR CoreParkingHeadroomThreshold;                                     //0x7e
    UCHAR CoreParkingDistributionThreshold;                                 //0x7f
    UCHAR CoreParkingDecreasePolicy;                                        //0x80
    UCHAR CoreParkingIncreasePolicy;                                        //0x81
    ULONG CoreParkingDecreaseTime;                                          //0x84
    ULONG CoreParkingIncreaseTime;                                          //0x88
    UCHAR CoreParkingMinCores[2];                                           //0x8c
    UCHAR CoreParkingMaxCores[2];                                           //0x8e
    ULONG SoftParkLatency;                                                  //0x90
    UCHAR AllowScaling;                                                     //0x94
    UCHAR IdleDisabled;                                                     //0x95
    ULONG IdleTimeCheck;                                                    //0x98
    UCHAR IdleDemotePercent;                                                //0x9c
    UCHAR IdlePromotePercent;                                               //0x9d
    UCHAR IdleStateMax;                                                     //0x9e
    UCHAR HeteroDecreaseTime;                                               //0x9f
    UCHAR HeteroIncreaseTime;                                               //0xa0
    UCHAR HeteroDecreaseThreshold[1280];                                    //0xa1
    UCHAR HeteroIncreaseThreshold[1280];                                    //0x5a1
    UCHAR Class0FloorPerformance;                                           //0xaa1
    UCHAR Class1InitialPerformance;                                         //0xaa2
    enum _KHETERO_CPU_POLICY ThreadPolicies[2];                             //0xaa4
};
/* Used in */
// _POP_PPM_PROFILE

