cmake_minimum_required(VERSION 3.20)
project(cAlgorithm C)

set(CMAKE_C_STANDARD 99)

add_executable(cAlgorithm main.c leetcode_datastruct/containsDuplicate.c leetcode_datastruct/maxSubArray.c leetcode_datastruct/twoSum.cpp leetcode_datastruct/merge.cpp PAT_datastruct/Reverse.cpp leetcode_datastruct/mergeTwoLists.cpp leetcode_datastruct/hasCycle.cpp)
