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
        src/easy/BranchSums.cpp
        src/easy/NodeDepths.cpp
        src/easy/EvaluateExpressionTree.cpp
        src/easy/DepthFirstSearch.cpp
        src/easy/MinimumWaitingTime.cpp
        src/easy/ClassPhotos.cpp
        src/easy/TandemBicycle.cpp
        src/easy/OptimalFreelancing.cpp
        src/easy/RemoveDuplicatesFromLinkedList.cpp
        src/easy/MiddleNode.cpp
        src/easy/NthFibonacci.cpp
        src/easy/ProductSum.cpp
        src/easy/BinarySearch.cpp
        src/easy/FindThreeLargestNumbers.cpp
        src/easy/BubbleSort.cpp
        src/easy/InsertionSort.cpp
        src/easy/SelectionSort.cpp
        src/easy/PalindromeCheck.cpp
        src/easy/CaesarCipherEncryptor.cpp
        src/easy/RunLengthEncoding.cpp
        src/easy/CommonCharacters.cpp
        src/easy/GenerateDocument.cpp
        src/easy/FirstNonRepeatingCharacter.cpp
        src/easy/Semordnilap.cpp
        )

set(MEDIUM_SOURCES
        src/medium/ThreeNumberSum.cpp
        src/medium/SmallestDifference.cpp
        src/medium/MoveElementToEnd.cpp
        src/medium/MonotonicArray.cpp
        src/medium/LongestPeak.cpp
        src/medium/ArrayOfProducts.cpp
        src/medium/FirstDuplicateValue.cpp
        src/medium/MergeOverlappingIntervals.cpp
        src/medium/BestSeat.cpp
        src/medium/ZeroSumSubarray.cpp
        src/medium/MissingNumbers.cpp
        src/medium/MajorityElement.cpp
        src/medium/SweetAndSavory.cpp
        )
add_library(algoexpert-cpp ${EASY_SOURCES})
