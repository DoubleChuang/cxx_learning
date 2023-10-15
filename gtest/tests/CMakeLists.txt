cmake_minimum_required(VERSION 3.11)

project(gtest_test)

include(FetchContent)
    FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        v1.14.0
)

FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
    FetchContent_Populate(googletest)
    add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()
# add_subdirectory(googletest)
# include_directories(${CMAKE_CURRENT_SOURCE_DIR}/googletest/include)
# link_directories(${CMAKE_CURRENT_SOURCE_DIR}/googletest/build/lib)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)

add_executable(stack_test StackTest.cpp)

target_link_libraries(stack_test 
    PRIVATE 
    stack
    gtest
    gtest_main
    pthread
)
add_dependencies(stack_test
    gtest
    gtest_main
    gmock
    gmock_main
)

add_executable(checkout_test CheckoutTest.cpp)

target_link_libraries(checkout_test 
    PRIVATE 
    checkout
    gtest
    gtest_main
    pthread
)
add_dependencies(checkout_test
    gtest
    gtest_main
    gmock
    gmock_main
)
