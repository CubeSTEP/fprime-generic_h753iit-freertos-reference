# This CMake file is intended to register project-wide objects.
# This allows for reuse between deployments, or other projects.

add_fprime_subdirectory("${CMAKE_CURRENT_LIST_DIR}/config")
add_fprime_subdirectory("${CMAKE_CURRENT_LIST_DIR}/Components")
include("${CMAKE_CURRENT_LIST_DIR}/lib/pin-overrides/CMakeLists.txt")
add_fprime_subdirectory("${CMAKE_CURRENT_LIST_DIR}/ReferenceDeployment/")
