cmake_minimum_required(VERSION 3.23)
project(kaikosdk CXX)

FILE(GLOB_RECURSE Sources ${PROJECT_SOURCE_DIR}/*.cc)
add_library(kaikosdk ${Sources})
include_directories(${CMAKE_SOURCE_DIR}/src)

## split cmake setup (cmake >=3.1.2)
if(DEFINED CONAN_CXX_FLAGS)
  find_package(protobuf REQUIRED)
  find_package(gRPC REQUIRED)

  # this config is for not making transitive dependency part of default linking
  # you have to explicitely link against CONAN_PKG::grpc if this option is chosen
  target_link_libraries(kaikosdk PRIVATE protobuf::protobuf grpc::grpc)

  # https://cmake.org/cmake/help/latest/command/target_link_libraries.html
  # Libraries and targets following PUBLIC are linked to, and are made part of the link interface. Libraries and targets following PRIVATE are linked to, but are not made part of the link interface.
  # Library dependencies are transitive by default
  # Basically, nothing = transitive, PUBLIC/PRIVATE means you have to add it final executable "target_link_libraries"
endif()

set_target_properties(kaikosdk PROPERTIES CXX_STANDARD 17)
set_target_properties(kaikosdk PROPERTIES LINKER_LANGUAGE CXX)

# IDEs should put the headers in a nice place
source_group(
  TREE "${PROJECT_SOURCE_DIR}"
  PREFIX "Header Files"
  FILES ${HSources})