# set(CMAKE_VERBOSE_MAKEFILE ON)
# ref: https://cliutils.gitlab.io/modern-cmake/chapters/testing/googletest.html#reffn_1
cmake_minimum_required(VERSION 3.11)


option(PACKAGE_TESTS "Build the tests" ON)
if(PACKAGE_TESTS)
  enable_testing()
  add_subdirectory(tests)
endif()


project(gtest_example)
set (CMAKE_CXX_STANDARD 20)
SET (MAIN src/main.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_executable(${PROJECT_NAME} ${MAIN})
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src)
target_link_libraries(${PROJECT_NAME} stack)
add_dependencies(${PROJECT_NAME} stack)
