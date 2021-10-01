cmake_minimum_required(VERSION 3.15)
project(kaikosdk)

include(${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake)

FILE(GLOB_RECURSE Sources ${PROJECT_SOURCE_DIR}/*.cc)
add_library(kaikosdk ${Sources})
target_include_directories(kaikosdk PUBLIC ${PROJECT_SOURCE_DIR}) #include headers on export

## split cmake setup (cmake >=3.1.2)
conan_basic_setup(TARGETS) # TARGETS forces link.txt to include full path libraries
# target_link_libraries(kaikosdk CONAN_PKG::grpc) # see build/release/CMakeFiles/app.dir/link.txt for output

# this config is for not making transitive dependency part of default linking
# you have to explicitely link against CONAN_PKG::grpc if this option is chosen
target_link_libraries(kaikosdk PRIVATE CONAN_PKG::grpc)

# https://cmake.org/cmake/help/latest/command/target_link_libraries.html
# Libraries and targets following PUBLIC are linked to, and are made part of the link interface. Libraries and targets following PRIVATE are linked to, but are not made part of the link interface.
# Library dependencies are transitive by default
# Basically, nothing = transitive, PUBLIC/PRIVATE means you have to add it final executable "target_link_libraries"

set_target_properties(kaikosdk PROPERTIES CXX_STANDARD 11) # protobuf requirement
set_target_properties(kaikosdk PROPERTIES LINKER_LANGUAGE CXX)

# IDEs should put the headers in a nice place
source_group(
  TREE "${PROJECT_SOURCE_DIR}"
  PREFIX "Header Files"
  FILES ${HSources})

