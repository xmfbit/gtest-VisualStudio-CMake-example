cmake_minimum_required(VERSION 2.8)
enable_testing()
find_package(GTest REQUIRED)
include_directories(../src/)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(unit-test unit-test.cpp)
target_link_libraries(unit-test ${GTEST_BOTH_LIBRARIES})
target_link_libraries(unit-test Add)

add_test(AllTests unit-test)
