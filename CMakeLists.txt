cmake_minimum_required (VERSION 2.6)
project (Part1)

set(CMAKE_DEBUG_POSTFIX _d)
set(CMAKE_CXX_FLAGS "-Wall")

if (CMAKE_BUILD_TYPE STREQUAL Debug)
    set(BUILD_POSTFIX "_d")
else (CMAKE_BUILD_TYPE STREQUAL Debug)
    set(BUILD_POSTFIX "")
endif (CMAKE_BUILD_TYPE STREQUAL Debug)

add_subdirectory(src)
