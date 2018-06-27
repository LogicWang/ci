cmake_minimum_required(VERSION 3.6)
project(luna)

INCLUDE_DIRECTORIES(include)

AUX_SOURCE_DIRECTORY(src DIR_SRCS)


SET(TEST_MATH  ${DIR_SRCS})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp include/search.h src/search.cpp include/myquicksort.h src/myquicksort.cpp src/myquicksort.h include/sieve.h src/sieve.cpp)
add_executable(luna ${SOURCE_FILES})
