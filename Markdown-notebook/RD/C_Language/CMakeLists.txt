cmake_minimum_required(VERSION 3.22)
project(C_Language C)

set(CMAKE_C_STANDARD 11)
#set(CMAKE_C_STANDARD 99)
#set(CMAKE_C_FLAGS -m32)
#set(CMAKE_CXX_FLAGS -m32)


#add_executable(C_Language
#        note-1/1.c)


#add_executable(C_Language
#        note-2/1.c note-2/include/function.h)


add_executable(C_Language
        note-3/1.c note-3/1.c note-3/function.h)
#set(CMAKE_BUILD_TYPE Debug)

