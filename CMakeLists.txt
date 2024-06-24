cmake_minimum_required(VERSION 3.16.3)
project(sorting)

set(CMAKE_BUILD_TYPE "Release")
add_compile_options(-std=c++17)
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

find_package(PkgConfig)
pkg_check_modules(JSONCPP jsoncpp)
include_directories(
  include

  ${JSONCPP_INCLUDE_DIRS}
)

add_executable(merge_arrays_sorted merge_arrays/merge_sorted.cpp)
add_executable(merge_arrays_heap merge_arrays/min_heap.cpp)

add_executable(make_pair make_pair/make_pair.cpp)

add_executable(insert_sort test/insert_sort_node.cpp)

add_executable(bubble_sort test/bubble_sort_node.cpp)

add_executable(select_sort test/select_sort_node.cpp)