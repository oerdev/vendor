#include <hidl/HidlTransportSupport.h>
#include "Foobar.h"

using oerdev::hardware::foobar::V1_0::IFoobar;
using oerdev::hardware::foobar::V1_0::implementation::Foobar;
using namespace android::hardware;

int main() {

    android::sp<IFoobar> foobar = Foobar::getInstance();
    if(foobar == nullptr) {
        // log here
        return 1;
    }

    configureRpcThreadpool(1, true);

    android::status_t status = foobar->registerAsService();
    if(status != android::OK) {
        // log here
        return 1;
    }
    joinRpcThreadpool();

    return 0;
}