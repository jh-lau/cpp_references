cmake_minimum_required(VERSION 3.16)
project(cherno_tutorial)

set(CMAKE_CXX_STANDARD 11)

add_executable(cherno_tutorial main.cpp src/demo/p20_how_to_write_class.cpp src/include/funcs.h src/demo/p21_static_in_cpp.cpp src/demo/p22_static_for_classes_and_structs.cpp src/demo/p23_local_static.cpp)