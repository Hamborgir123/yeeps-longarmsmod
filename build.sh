#!/bin/bash

# Update this path to match your NDK folder name
export NDK_PATH=$HOME/android-ndk-r25c

cmake -B build -S . \
-DCMAKE_TOOLCHAIN_FILE=$NDK_PATH/build/cmake/android.toolchain.cmake \
-DANDROID_ABI=arm64-v8a \
-DANDROID_PLATFORM=android-24

cmake --build build

chmod +x build.sh
