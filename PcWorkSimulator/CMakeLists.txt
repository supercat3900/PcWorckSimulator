cmake_minimum_required(VERSION 3.20)
project(PcWorkSimulator)

set(CMAKE_CXX_STANDARD 17)

add_executable(PcWorkSimulator src/main.cpp include/cpu.h include/disk.h include/gpu.h include/kbd.h src/cpu.cpp src/disk.cpp src/gpu.cpp src/kbd.cpp)
target_include_directories(PcWorkSimulator PUBLIC include)
