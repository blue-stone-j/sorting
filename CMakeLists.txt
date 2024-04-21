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

# target_link_libraries(merge_sorted_arrays
# ${JSONCPP_LIBRARIES}
# )
