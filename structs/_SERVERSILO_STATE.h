#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _SERVERSILO_STATE
{
    SERVERSILO_INITING = 0,
    SERVERSILO_STARTED = 1,
    SERVERSILO_SHUTTING_DOWN = 2,
    SERVERSILO_TERMINATING = 3,
    SERVERSILO_TERMINATED = 4
};
/* Used in */
// _ESERVERSILO_GLOBALS

