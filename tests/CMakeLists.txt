cmake_minimum_required(VERSION 3.16)
project(redis)

set(CMAKE_CXX_STANDARD 11)
set(SRC sds.c
        sdsalloc.h)
add_executable(test test.c ${SRC})