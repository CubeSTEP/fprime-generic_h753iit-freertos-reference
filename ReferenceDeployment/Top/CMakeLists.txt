####
# F prime CMakeLists.txt:
#
# SOURCE_FILES: combined list of source and autocoding files
# MOD_DEPS: (optional) module dependencies
####

if (NOT DEFINED PIN_OVERRIDE_SOURCES)
  message(FATAL_ERROR
    "PIN_OVERRIDE_SOURCES is not defined. "
    "Include lib/pin-overrides/CMakeLists.txt before ReferenceDeployment."
  )
endif()

set(SOURCE_FILES
  "${CMAKE_CURRENT_LIST_DIR}/instances.fpp"
  "${CMAKE_CURRENT_LIST_DIR}/ReferenceDeploymentPackets.xml"
  "${CMAKE_CURRENT_LIST_DIR}/topology.fpp"
  ${PIN_OVERRIDE_SOURCES}
  "${CMAKE_CURRENT_LIST_DIR}/ReferenceDeploymentTopology.cpp"
)
set(MOD_DEPS
  Fw/Logger
  Svc/Subtopologies/ComFprime
  Arduino/Drv/StreamDriver
)

register_fprime_module()
