#pragma once

// constants to convey information about device errors
typedef enum
{
    STATUS_OK = 0,
    INITIAL_CONNECTION_FAILURE_ERROR,
    PORT_ALREADY_OPEN_ERROR,
    UNABLE_TO_OPEN_PORT_ERROR,
    SET_PORT_ERROR,
    INCOMMING_MSG_ERROR,
    INITIAL_MSG_ERROR,
    STREAM_ALREADY_RUN_ERROR,
    INVALID_BUFFER_SIZE_ERROR,
    STREAM_THREAD_ERROR,
    STREAM_THREAD_IS_NOT_RUNNING,
    EMPTY_BUFFER_ERROR,
    INVALID_ARGUMENTS_ERROR,
    GENERAL_ERROR,
    SYNC_TIMEOUT_ERROR
} ExploreCustomExitCodes;
