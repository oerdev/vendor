#include <stdio.h>
#include <hidl/Status.h>
#include <hidl/LegacySupport.h>
#include <utils/misc.h>
#include <utils/Log.h>
//#include <hardware/hardware.h>
#include <hidl/HidlSupport.h>
#include <oerdev/hardware/foobar/1.0/IFoobar.h>

using oerdev::hardware::foobar::V1_0::IFoobar;

int main() {

    android::sp<IFoobar> fooService = IFoobar::getService();

    if(fooService == nullptr) {
        printf("Failed to get foobar-hal-service !!! \n");
        return 1;
    }

    uint32_t ver = fooService->getVersion();
    printf("fooService->getVersion() returns = %d \n", ver);

    return 0;
}