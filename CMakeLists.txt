cmake_minimum_required(VERSION 3.16)
project(demos LANGUAGES CXX)

find_package(ROOT)

add_subdirectory(modern)
add_subdirectory(sanitizers)

enable_testing()
add_subdirectory(tests)
