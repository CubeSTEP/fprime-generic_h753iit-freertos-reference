// ======================================================================
// \title  config/MemoryAllocation.hpp
// \brief  FreeRTOS heap-backed default allocator for STM32H753 OBCI
// ======================================================================

#ifndef CONFIG_MEMORY_ALLOCATION_HPP
#define CONFIG_MEMORY_ALLOCATION_HPP

#include <Fw/Types/Assert.hpp>
#include <Fw/Types/MemAllocator.hpp>
#include <FreeRTOS.h>

namespace Fw {
namespace MemoryAllocation {

class FreeRtosAllocator final : public Fw::MemAllocator {
  public:
    FreeRtosAllocator() = default;
    ~FreeRtosAllocator() override = default;

    void* allocate(const FwEnumStoreType identifier,
                   FwSizeType& size,
                   bool& recoverable,
                   FwSizeType alignment = alignof(std::max_align_t)) override {
        (void) identifier;
        FW_ASSERT(alignment <= portBYTE_ALIGNMENT, static_cast<FwAssertArgType>(alignment));

        recoverable = false;
        void* const mem = pvPortMalloc(static_cast<size_t>(size));
        if (mem == nullptr) {
            size = 0;
        }
        return mem;
    }

    void deallocate(const FwEnumStoreType identifier, void* ptr) override {
        (void) identifier;
        if (ptr != nullptr) {
            vPortFree(ptr);
        }
    }
};

using DefaultMemoryAllocatorType = Fw::MemoryAllocation::FreeRtosAllocator;

}  // namespace MemoryAllocation
}  // namespace Fw

#endif  // CONFIG_MEMORY_ALLOCATION_HPP
