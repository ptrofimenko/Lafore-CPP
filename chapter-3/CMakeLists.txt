cmake_minimum_required(VERSION 3.0)

add_executable(task-1 task-1.cpp)
add_executable(task-2 task-2.cpp)
add_executable(task-3 task-3.cpp)
add_executable(task-4 task-4.cpp)

target_compile_options(task-1 PUBLIC -std=c++1z)
target_compile_options(task-2 PUBLIC -std=c++1z)