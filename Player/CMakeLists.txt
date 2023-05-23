cmake_minimum_required(VERSION 3.20.1)

project(player VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
    main.cpp
    MapData.cpp
    Matrix.cpp
    Status.cpp
   )

add_executable(player ${SOURCES})