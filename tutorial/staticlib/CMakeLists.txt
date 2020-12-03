cmake_minimum_required(VERSION 3.7)
project(StaticLib)

add_library("mylib" "Cat.cpp")

add_executable("pgmwithlib" "main.cpp")
target_link_libraries("pgmwithlib" "mylib")