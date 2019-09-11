// FIXME: your file license if you have one

#include "Foobar.h"

namespace oerdev {
namespace hardware {
namespace foobar {
namespace V1_0 {
namespace implementation {

Foobar * Foobar::sInstance = nullptr;

Foobar::Foobar() {}
Foobar::~Foobar() {}

Foobar * Foobar::getInstance() {
    if(sInstance == nullptr) {
        sInstance = new Foobar;
    }
    return sInstance;
}

Return<uint32_t> Foobar::getVersion() {
    // TODO implement
    return uint32_t {112};
}



}  // namespace implementation
}  // namespace V1_0
}  // namespace foobar
}  // namespace hardware
}  // namespace oerdev
