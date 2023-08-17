cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME algoexpert-cpp)
project(${PROJECT_NAME} CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

set(EASY_SOURCES
        src/easy/TwoNumberSum.cpp
        src/easy/ValidateSubsequence.cpp
        )

add_library(algoexpert-cpp ${EASY_SOURCES})
