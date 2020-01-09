cmake_minimum_required(VERSION 3.0)
project(oop_exercise_07)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pthread")
add_executable(oop_exercise_07 src/main.cpp src/figure.h src/point.h src/point.cpp src/figure.cpp src/triangle.cpp src/triangle.h src/quadrate.cpp src/quadrate.h src/octagon.cpp src/octagon.h src/factory.cpp src/factory.h src/editor.cpp src/editor.h src/document.cpp src/document.h src/command.cpp src/command.h)


