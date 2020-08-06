cmake_minimum_required(VERSION 3.16)
project(Clion_Test C)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES  "func_temp.c")
add_executable(Clion_Test ${SOURCE_FILES})
add_executable(Clion_Test func_temp.c)