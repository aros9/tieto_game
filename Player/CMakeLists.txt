cmake_minimum_required(VERSION 3.20.1)

project(player VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
    src/main.cpp
    src/MapData.cpp
    src/Matrix.cpp
    src/Status.cpp
    src/Action.cpp
    src/Player.cpp
   )

add_executable(player ${SOURCES})