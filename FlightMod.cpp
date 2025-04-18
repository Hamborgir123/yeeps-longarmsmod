#include <iostream>
#include <cmath>

// Mock VR arm extension function
extern "C" void onUpdatePlayer() {
    // Simulate modifying arm length
    float originalArmLength = 1.0f;  // default
    float extendedArmLength = originalArmLength * 1.6f;  // 60% longer

    std::cout << "[LongArmsMod] Arm length set to: " << extendedArmLength << std::endl;

    // Insert actual memory patching or method hook here if using QPM or BepInEx
}
