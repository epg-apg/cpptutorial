cmake_minimum_required(VERSION 3.7)
project(Cpp_Tutorial)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")

# for static libraries
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")

add_executable("default" "main.cpp")

# Chapter 1
add_subdirectory("tutorial/syntax")

# Chapter 2
add_subdirectory("tutorial/functions")

# Chapter 3
add_subdirectory("tutorial/classes")

# Chapter 4
add_subdirectory("tutorial/pointer")

# Chapter 5
add_subdirectory("tutorial/inheritance")

# Chapter 6
add_subdirectory("tutorial/additional")

# Chapter 7
add_subdirectory("tutorial/particlefire")

# Chapter 8
add_subdirectory("tutorial/bitwise")
add_subdirectory("tutorial/bitshifting")

# Chapter Bonus
add_subdirectory("tutorial/postfix")
add_subdirectory("tutorial/polymorphism")
add_subdirectory("tutorial/staticlib")