#enforce cmake version required
cmake_minimum_required(VERSION 2.8.0)

PROJECT(eqWall)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMake/Modules/")
include(MacroOutOfSourceBuild)
MACRO_ENSURE_OUT_OF_SOURCE_BUILD("${PROJECT_NAME} requires an out of source build.")

find_package(Equalizer  REQUIRED)

add_subdirectory(dependencies)
add_subdirectory(hello)


