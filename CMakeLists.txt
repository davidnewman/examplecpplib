cmake_minimum_required(VERSION 3.5)

project(mylib)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Allows us to find the Catch2 CMake modules
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/lib/Catch2/contrib")
include(FindPkgConfig)

add_subdirectory(mylib)
add_subdirectory(lib/Catch2)
add_subdirectory(tests)
add_subdirectory(examples/factorial)
