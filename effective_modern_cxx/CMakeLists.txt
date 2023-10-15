cmake_minimum_required(VERSION 3.11)

project(modern_cxx)
set (CMAKE_CXX_STANDARD 20)

file(GLOB SUBDIRS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *)
foreach(SUBDIR ${SUBDIRS})
        if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${SUBDIR} AND NOT ${SUBDIR} STREQUAL "build")
        add_subdirectory(${SUBDIR})
    endif()
endforeach()