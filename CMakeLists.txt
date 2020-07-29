cmake_minimum_required(VERSION 3.7)
project(Cpp_Tutorial)

add_executable("default" "main.cpp")

# Chapter 1
add_executable("syntax" "syntax/main.cpp")

# Chapter 2
add_executable("functions" "functions/main.cpp")

# Chapter 3
add_executable("classes" "classes/main.cpp" "classes/Cat.cpp" "classes/Person.cpp" "classes/Dog.cpp")

# Chapter 4
add_executable("pointer" "pointer/main.cpp" "pointer/Animal.cpp" "pointer/Exercise.cpp")

# Chapter 5
add_executable("inheritance" "inheritance/main.cpp" "inheritance/Animal.cpp" "inheritance/Cat.cpp" "inheritance/Tiger.cpp" "inheritance/Machine.cpp" "inheritance/Vehicle.cpp")

# Chapter 6
add_executable("additional" "additional/main.cpp" "additional/Test.cpp")