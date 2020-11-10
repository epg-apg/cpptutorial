cmake_minimum_required(VERSION 3.7)
project(Cpp_Tutorial)

add_executable("default" "main.cpp")

# Chapter 1
add_executable("syntax" "tutorial/syntax/main.cpp")

# Chapter 2
add_executable("functions" "tutorial/functions/main.cpp")

# Chapter 3
add_executable("classes" "tutorial/classes/main.cpp" "tutorial/classes/Cat.cpp" "tutorial/classes/Person.cpp" "tutorial/classes/Dog.cpp")

# Chapter 4
add_executable("pointer" "tutorial/pointer/main.cpp" "tutorial/pointer/Animal.cpp" "tutorial/pointer/Exercise.cpp")

# Chapter 5
add_executable("inheritance" "tutorial/inheritance/main.cpp" "tutorial/inheritance/Animal.cpp" "tutorial/inheritance/Cat.cpp" "tutorial/inheritance/Tiger.cpp" "tutorial/inheritance/Machine.cpp" "tutorial/inheritance/Vehicle.cpp")

# Chapter 6
add_executable("additional" "tutorial/additional/main.cpp" "tutorial/additional/Test.cpp")

# Chapter 7
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
add_executable("particlefire" "tutorial/particlefire/main.cpp" "tutorial/particlefire/Screen.cpp" "tutorial/particlefire/Particle.cpp" "tutorial/particlefire/Swarm.cpp")
target_link_libraries("particlefire" ${SDL2_LIBRARIES})

configure_file("bin/SDL2.dll" "SDL2.dll" COPYONLY)

# Chapter 8
add_executable("bitshifting" "tutorial/bitshifting/main.cpp")
add_executable("bitwise" "tutorial/bitwise/main.cpp")