cmake_minimum_required(VERSION 3.10)
project(LongArmsMod)

add_library(LongArmsMod SHARED FlightMod.cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fPIC")

set_target_properties(LongArmsMod PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/
)
