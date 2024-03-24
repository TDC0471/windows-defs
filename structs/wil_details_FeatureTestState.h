#pragma once
/* ------------------ */

#include <wil_details_FeatureTestStateKind.h>
#include <wil_FeatureEnabledState.h>
#include <wil_FeatureVariantPayloadKind.h>
#include <wil_details_FeatureTestState.h>

//0x20 bytes (sizeof)
struct wil_details_FeatureTestState
{
    enum wil_details_FeatureTestStateKind kind;                             //0x0
    ULONG featureId;                                                        //0x4
    enum wil_FeatureEnabledState state;                                     //0x8
    UCHAR variant;                                                          //0xc
    ULONG payload;                                                          //0x10
    enum wil_FeatureVariantPayloadKind payloadKind;                         //0x14
    struct wil_details_FeatureTestState* next;                              //0x18
};
/* Used in */
// wil_details_FeatureTestState

