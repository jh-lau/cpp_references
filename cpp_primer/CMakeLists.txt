cmake_minimum_required(VERSION 3.17)
project(cpp_primer)

set(CMAKE_CXX_STANDARD 11)

add_executable(cpp_primer main.cpp src/part_1_the_basics/chp2_variables_and_basic_types/demo1.cpp src/include/funcs.h src/part_1_the_basics/chp3_strings_vectors_and_arrays/string_demo.cpp)