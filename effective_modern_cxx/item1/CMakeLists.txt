cmake_minimum_required(VERSION 3.11)

file(GLOB SOURCE_FILES "*.cpp")

set (CMAKE_CXX_STANDARD 14) # for 2.cpp
set(CMAKE_CXX_FLAGS -fno-elide-constructors) # for 2.cpp

foreach(SOURCE_FILE ${SOURCE_FILES})
    get_filename_component(EXECUTABLE_NAME ${SOURCE_FILE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${SOURCE_FILE})
endforeach()