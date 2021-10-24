cmake_minimum_required(VERSION 3.20)
project(cAlgorithm C)

set(CMAKE_C_STANDARD 99)

add_executable(cAlgorithm main.c  wangDao/binInsertionSort.c wangDao/MergeSort.c wangDao/change.c leetcode_datastruct/isSymmetric.cpp)
