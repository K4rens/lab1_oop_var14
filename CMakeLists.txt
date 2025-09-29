cmake_minimum_required(VERSION 3.14)
project(laba1_oop)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_library(func_lib src/func.cpp)
target_include_directories(func_lib PUBLIC include)


add_executable(main_app src/main.cpp)
target_link_libraries(main_app func_lib)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.17.0
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(func_test tests/func_test.cpp)
target_link_libraries(func_test func_lib gtest_main)

include(GoogleTest)
gtest_discover_tests(func_test)
