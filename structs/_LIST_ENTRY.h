#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _LIST_ENTRY
{
    struct _LIST_ENTRY* Flink;                                              //0x0
    struct _LIST_ENTRY* Blink;                                              //0x8
};
/* Used in */
// VACB_LEVEL_ALLOCATION_LIST
// _ACPI_CACHED_TABLE
// _ACTIVATION_CONTEXT_STACK
// _ADAPTER_OBJECT
// _ALPC_COMMUNICATION_INFO
// _ALPC_COMPLETION_LIST
// _ALPC_PORT
// _ALPC_PROCESS_CONTEXT
// _ARBITER_BOOT_ALLOCATION_PARAMETERS
// _ARBITER_LIST_ENTRY
// _ARBITER_QUERY_ARBITRATE_PARAMETERS
// _ARBITER_RETEST_ALLOCATION_PARAMETERS
// _ARBITER_TEST_ALLOCATION_PARAMETERS
// _ARC_DISK_INFORMATION
// _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
// _BITMAP_RANGE
// _BLOB
// _CALL_HASH_ENTRY
// _CALL_PERFORMANCE_DATA
// _CC_EXTERNAL_CACHE_INFO
// _CC_PARTITION
// _CMHIVE
// _CMP_DISCARD_AND_REPLACE_KCB_CONTEXT
// _CMP_VOLUME_CONTEXT
// _CMP_VOLUME_MANAGER
// _CM_KCB_LAYER_INFO
// _CM_KCB_UOW
// _CM_KEY_BODY
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_SECURITY_CACHE
// _CM_NOTIFY_BLOCK
// _CM_RM
// _CM_TRANS
// _CM_WORKITEM
// _CONTROL_AREA
// _DEFERRED_WRITE
// _DELAY_ACK_FO
// _DEVICE_NODE
// _DEVICE_OBJECT
// _DEVICE_OBJECT_POWER_EXTENSION
// _DISPATCHER_HEADER
// _DMA_COMMON_BUFFER_VECTOR
// _DUAL
// _DUMP_STACK_CONTEXT
// _DYNAMIC_FUNCTION_TABLE
// _ECP_LIST
// _EFI_FIRMWARE_INFORMATION
// _EJOB
// _EPARTITION
// _EPROCESS
// _ERESOURCE
// _ETHREAD
// _ETIMER
// _ETW_DEBUGID_TRACKING_ENTRY
// _ETW_GUID_ENTRY
// _ETW_HASH_BUCKET
// _ETW_QUEUE_ENTRY
// _ETW_REALTIME_CONSUMER
// _ETW_REG_ENTRY
// _FAST_ERESOURCE_INTERNAL
// _FAST_OWNER_ENTRY_INTERNAL
// _FILE_OBJECT
// _FSRTL_ADVANCED_FCB_HEADER
// _GENERAL_LOOKASIDE
// _GENERAL_LOOKASIDE_POOL
// _HALP_ALLOC_CONTEXT
// _HALP_DMA_CHANNEL
// _HALP_DMA_CONTROLLER
// _HALP_DMA_DOMAIN_OBJECT
// _HALP_DMA_MASTER_ADAPTER_OBJECT
// _HALP_EMERGENCY_LA_QUEUE_ENTRY
// _HANDLE_REVOCATION_INFO
// _HANDLE_TABLE
// _HEAP
// _HEAP_FREE_ENTRY
// _HEAP_LFH_SUBSEGMENT
// _HEAP_LFH_SUBSEGMENT_OWNER
// _HEAP_LIST_LOOKUP
// _HEAP_PAGE_SEGMENT
// _HEAP_SEGMENT
// _HEAP_SEG_CONTEXT
// _HEAP_UCR_DESCRIPTOR
// _HEAP_VIRTUAL_ALLOC_ENTRY
// _HEAP_VS_CONTEXT
// _HEAP_VS_SUBSEGMENT
// _HIVE_LIST_ENTRY
// _IO_MINI_COMPLETION_PACKET_USER
// _IO_TIMER
// _IRP
// _KALPC_MESSAGE
// _KALPC_REGION
// _KALPC_SECTION
// _KALPC_VIEW
// _KAPC
// _KAPC_STATE
// _KDEVICE_QUEUE
// _KDEVICE_QUEUE_ENTRY
// _KENLISTMENT
// _KINTERRUPT
// _KLDR_DATA_TABLE_ENTRY
// _KMUTANT
// _KPRCB
// _KPRIQUEUE
// _KPROCESS
// _KQUEUE
// _KRESOURCEMANAGER
// _KRESOURCEMANAGER_COMPLETION_BINDING
// _KSCB
// _KSCHEDULING_GROUP
// _KSHARED_READY_QUEUE
// _KTHREAD
// _KTIMER
// _KTIMER2
// _KTIMER_TABLE_ENTRY
// _KTM
// _KTRANSACTION
// _KWAIT_BLOCK
// _KWAIT_CHAIN_ENTRY
// _LDR_DATA_TABLE_ENTRY
// _LDR_DDAG_NODE
// _LIST_ENTRY
// _LOADER_PARAMETER_BLOCK
// _LOADER_PARAMETER_EXTENSION
// _LPCP_MESSAGE
// _LPCP_PORT_OBJECT
// _LPCP_PORT_QUEUE
// _MBCB
// _MCUPDATE_INFO
// _MEMORY_ALLOCATION_DESCRIPTOR
// _MI_ENCLAVE_STATE
// _MI_FREE_LARGE_PAGE_LIST
// _MI_IO_PAGE_STATE
// _MI_PAGEFILE_BITMAPS_CACHE_ENTRY
// _MI_PAGE_COMBINING_SUPPORT
// _MI_PARTITION_SEGMENTS
// _MI_PARTITION_STATE
// _MI_PROCESS_STATE
// _MI_REVERSE_VIEW_MAP
// _MI_SECTION_STATE
// _MI_SUB64K_FREE_RANGES
// _MI_SYSTEM_IMAGE_STATE
// _MI_VISIBLE_STATE
// _MMDEREFERENCE_SEGMENT_HEADER
// _MMINPAGE_SUPPORT
// _MMMOD_WRITER_LISTHEAD
// _MMMOD_WRITER_MDL_ENTRY
// _MMPAGE_FILE_EXPANSION
// _MMPAGING_FILE
// _MMPFN
// _MMSUPPORT_INSTANCE
// _MMVAD
// _MMWORKING_SET_EXPANSION_HEAD
// _MM_SESSION_SPACE
// _MSUBSECTION
// _NONOPAQUE_OPLOCK
// _OBJECT_HEADER_CREATOR_INFO
// _OBJECT_NAMESPACE_LOOKUPTABLE
// _OBJECT_TYPE
// _OB_HANDLE_REVOCATION_BLOCK
// _PEB
// _PEB_LDR_DATA
// _PENDING_RELATIONS_LIST_ENTRY
// _PI_RESOURCE_ARBITER_ENTRY
// _PNP_DEVICE_ACTION_ENTRY
// _PNP_DEVICE_COMPLETION_QUEUE
// _PNP_DEVICE_COMPLETION_REQUEST
// _PNP_DEVICE_EVENT_ENTRY
// _PNP_DEVICE_EVENT_LIST
// _POP_COOLING_EXTENSION
// _POP_DEVICE_SYS_STATE
// _POP_FX_DEVICE
// _POP_FX_DRIPS_WATCHDOG_CONTEXT
// _POP_FX_PLUGIN
// _POP_FX_WORK_ORDER_WATCHDOG_INFO
// _POP_FX_WORK_POOL
// _POP_HIBER_CONTEXT
// _POP_IRP_DATA
// _POP_IRP_WORKER_ENTRY
// _POP_POLICY_DEVICE
// _POP_THERMAL_ZONE
// _POP_TRIGGER_WAIT
// _PO_DEVICE_NOTIFY
// _PO_DIRECTED_DRIPS_STATE
// _PO_NOTIFY_ORDER_LEVEL
// _PPM_VETO_ACCOUNTING
// _PPM_VETO_ENTRY
// _PRIVATE_CACHE_MAP
// _PROC_PERF_DOMAIN
// _PS_IO_CONTROL_ENTRY
// _PS_PROPERTY_SET
// _PTE_TRACKER
// _REGISTERED_INTERRUPT_CONTROLLER
// _RH_OP_CONTEXT
// _RTLP_RANGE_LIST_ENTRY
// _RTL_ATOM_TABLE_REFERENCE
// _RTL_CRITICAL_SECTION_DEBUG
// _RTL_DYNAMIC_HASH_TABLE_CONTEXT
// _RTL_DYNAMIC_HASH_TABLE_ENTRY
// _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR
// _RTL_RANGE_LIST
// _SECONDARY_IC_LIST_ENTRY
// _SEP_LOGON_SESSION_REFERENCES
// _SESSION_LOWBOX_MAP
// _SHARED_CACHE_MAP
// _SHARED_CACHE_MAP_LIST_CURSOR
// _SYSPTES_HEADER
// _TEB
// _TRIAGE_9F_POWER
// _TRIAGE_PNP_DEVICE_COMPLETION_QUEUE
// _TRIAGE_PNP_DEVICE_COMPLETION_REQUEST
// _TRIAGE_POP_FX_DEVICE
// _TRIAGE_POP_IRP_DATA
// _UMS_CONTROL_BLOCK
// _VACB
// _VF_SUSPECT_DRIVER_ENTRY
// _VF_TARGET_VERIFIED_DRIVER_DATA
// _VF_WATCHDOG_IRP
// _VI_DEADLOCK_GLOBALS
// _VI_DEADLOCK_NODE
// _VI_DEADLOCK_RESOURCE
// _VI_DEADLOCK_THREAD
// _VOLUME_CACHE_MAP
// _WAITING_IRP
// _WAIT_CONTEXT_BLOCK
// _WHEAP_ERROR_RECORD_WRAPPER
// _WHEAP_ERROR_SOURCE
// _WHEAP_ERROR_SOURCE_TABLE
// _WHEAP_WORK_QUEUE
// _WMI_BUFFER_HEADER
// _WMI_LOGGER_CONTEXT
// _WNF_NAME_INSTANCE
// _WNF_PROCESS_CONTEXT
// _WNF_SCOPE_INSTANCE
// _WNF_SCOPE_MAP_ENTRY
// _WNF_SUBSCRIPTION
// _WORK_QUEUE_ENTRY
// _WORK_QUEUE_ITEM

