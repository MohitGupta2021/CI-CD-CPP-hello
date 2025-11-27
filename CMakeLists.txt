cmake_minimum_required(VERSION 3.10)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 17)

add_executable(helloworld src/main.cpp)

add_executable(test_main tests/test_main.cpp)
enable_testing()
add_test(NAME TestMain COMMAND test_main)
