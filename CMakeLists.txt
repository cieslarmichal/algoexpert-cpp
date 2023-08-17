cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME algoexpert-cpp)
project(${PROJECT_NAME} CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

set(EASY_SOURCES
        src/easy/TwoNumberSum.cpp
        src/easy/ValidateSubsequence.cpp
        src/easy/SortedSquaredArray.cpp
        src/easy/TournamentWinner.cpp
        src/easy/NonConstructibleChange.cpp
        src/easy/TransposeMatrix.cpp
        src/easy/FindClosestValueInBst.cpp
        )

add_library(algoexpert-cpp ${EASY_SOURCES})
