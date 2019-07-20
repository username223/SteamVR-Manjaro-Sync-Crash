#include <openvr.h>
#include <chrono>
#include <thread>

int main() {
    auto initError = vr::VRInitError_None;
    vr::VR_Init( &initError,  vr::EVRApplicationType::VRApplication_Overlay);
        
    while (true) {
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(1s); 
        vr::VRSettings()->Sync();
    }


    return 0;
}

