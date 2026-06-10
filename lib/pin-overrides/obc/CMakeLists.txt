####
# OBC pin overrides.
#
# Add an OBC ComSerial.cpp here and define
# PIN_OVERRIDE_SOURCES when the board pinout is known.
####

message(FATAL_ERROR
    "PIN_OVERRIDE_BOARD=obc was selected, but OBC pin overrides "
    "have not been added yet."
)
