####
# Board pin override selection.
#
# Select a board at CMake configure time, for example:
#   -DPIN_OVERRIDE_BOARD=eval
#   -DPIN_OVERRIDE_BOARD=obc
####

set(PIN_OVERRIDE_BOARD "eval" CACHE STRING "Board pin override set")
set(PIN_OVERRIDE_DIR "${CMAKE_CURRENT_LIST_DIR}/${PIN_OVERRIDE_BOARD}")

include("${PIN_OVERRIDE_DIR}/CMakeLists.txt")

include_directories(
    "${CMAKE_CURRENT_LIST_DIR}"
    "${PIN_OVERRIDE_DIR}"
)

message(STATUS "Pin overrides: ${PIN_OVERRIDE_BOARD} (${PIN_OVERRIDE_DIR})")
