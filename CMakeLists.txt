cmake_minimum_required(VERSION 3.20)
project(strutil)
set(version 1.0)

set(CMAKE_CXX_STANDARD 17)

option(BUILD_TESTS "Build test exec" OFF)
message("strutil build tests: ${BUILD_TESTS}")

if(BUILD_TESTS)
    message("BUILDING TESTS")
    add_subdirectory(test)
endif()

if(NOT TARGET strutil)
    set(strutil_DIR ${CMAKE_CURRENT_LIST_DIR})
    find_package(strutil REQUIRED)
endif()
