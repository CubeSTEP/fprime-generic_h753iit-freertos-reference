module ComFprimeConfig {
    # Base ID for the ComFprime Subtopology, all components are offsets from this base ID
    constant BASE_ID = 0x03000000

    module QueueSizes {
        constant comQueue    = 20
    }

    module StackSizes {
        constant comQueue   = 2 * 1024
    }

    module Priorities {
        constant comQueue   = 29
    }

    # Queue configuration constants
    module QueueDepths {
        constant events      = 16
        constant tlm         = 32
        constant file        = 4
    }

    module QueuePriorities {
        constant events      = 0
        constant tlm         = 2
        constant file        = 1
    }

    # Buffer management constants
    module BuffMgr {
        constant frameAccumulatorSize  = 2048
        constant commsBuffSize         = 2048
        constant commsFileBuffSize     = 1024
        constant commsBuffCount        = 8
        constant commsFileBuffCount    = 2
        constant commsBuffMgrId        = 200
    }
}
