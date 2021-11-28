cmake_minimum_required(VERSION 3.20)
project(dway-heap)

add_subdirectory(include)
set(CMAKE_CXX_STANDARD 20)

add_executable(dway-heap main.cpp src/heap.cpp src/heap.h src/DHNode.cpp src/DHNode.h)
target_link_libraries(dway-heap fmt::fmt)
