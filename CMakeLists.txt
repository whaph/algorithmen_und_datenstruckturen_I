cmake_minimum_required(VERSION 3.6)
project(algorithmen_und_datenstruckturen_I)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Blatt2/Aufgabe1/exercise_1.cpp)
add_executable(algorithmen_und_datenstruckturen_I ${SOURCE_FILES})