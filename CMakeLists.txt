cmake_minimum_required(VERSION 3.10)

project("Lab 6"
  VERSION 0.0.0
  DESCRIPTION "CS 1521 Lab 6"
  LANGUAGES CXX)

add_compile_options(-Wall -Wextra -Wpedantic)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONs OFF)

add_executable(main
  lab6.cpp
  LinkedList.h
  ListInterface.h
  Rational.cpp
  ListNode.h
  PrecondViolatedExcep.cpp)
