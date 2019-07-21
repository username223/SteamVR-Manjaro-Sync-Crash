#include <openvr.h>
#include <chrono>
#include <thread>

int main() {
    auto initError = vr::VRInitError_None;
    vr::VR_Init( &initError,  vr::EVRApplicationType::VRApplication_Overlay);
        
    while (true) {
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(1s); 

        const auto randomValue = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);

        vr::VRSettings()->SetFloat(
            vr::k_pch_CollisionBounds_Section,
            vr::k_pch_CollisionBounds_FadeDistance_Float,
            randomValue );

        vr::VRSettings()->Sync();
    }


    return 0;
}

