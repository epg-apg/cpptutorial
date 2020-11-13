cmake_minimum_required(VERSION 3.7)
project(Particlefire)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
add_executable("particlefire" "main.cpp" "Screen.cpp" "Particle.cpp" "Swarm.cpp")
target_link_libraries("particlefire" ${SDL2_LIBRARIES})

if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
    configure_file("../../resources/SDL2.dll" "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/SDL2.dll" COPYONLY)
endif()