// FIXME: your file license if you have one

#pragma once

#include <oerdev/hardware/foobar/1.0/IFoobar.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace oerdev {
namespace hardware {
namespace foobar {
namespace V1_0 {
namespace implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct Foobar : public IFoobar {
public:
    Foobar();
    ~Foobar();
    static Foobar * getInstance();
    Return<uint32_t> getVersion() override;

private:
    static Foobar * sInstance;
};

// FIXME: most likely delete, this is only for passthrough implementations
// extern "C" IFoobar* HIDL_FETCH_IFoobar(const char* name);

}  // namespace implementation
}  // namespace V1_0
}  // namespace foobar
}  // namespace hardware
}  // namespace oerdev
