cmake_minimum_required(VERSION 3.12)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)

add_executable(main main.cpp mathutils/divisors.cpp mathutils/roots.cpp mathutils/ruffini.cpp)
