// ======================================================================
// \title  ComSerial.cpp
// \brief STM32H753I-EVAL communication serial stream
// ======================================================================

#include <ComSerial.hpp>

namespace ReferenceDeployment {

// STM32H753I-EVAL CN2 RS232 interface: USART1 RX/TX on PB15/PB14.
HardwareSerial ComSerial(PB15, PB14);

}  // namespace ReferenceDeployment
