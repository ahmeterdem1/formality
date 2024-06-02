cmake_minimum_required(VERSION 3.26)
project(formality CXX)

set(CMAKE_C_STANDARD 23)

include_directories(include)
include_directories(src)
include_directories(bin)

add_executable(main main.cpp
                include/formality.h
                include/machine.h
                include/state.h
                include/transition.h
                src/machine.cpp
                src/state.cpp
                src/transition.cpp)
