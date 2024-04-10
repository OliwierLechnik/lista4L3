cmake_minimum_required(VERSION 3.27)
project(lista4L3)

set(CMAKE_CXX_STANDARD 14)

include_directories(1cpp)

add_executable(lista4L3
        1cpp/main.cpp
        1cpp/Shape.cpp
        1cpp/Shape.h
        1cpp/Circle.cpp
        1cpp/Circle.h
        1cpp/Quadrangle.cpp
        1cpp/Quadrangle.h
        1cpp/Square.cpp
        1cpp/Square.h
        1cpp/Rectangle.cpp
        1cpp/Rectangle.h
        1cpp/Pentagon.cpp
        1cpp/Pentagon.h
        1cpp/Hexagon.cpp
        1cpp/Hexagon.h
        1cpp/Parallelogram.cpp
        1cpp/Parallelogram.h
        1cpp/Diamond.cpp
        1cpp/Diamond.h
)
