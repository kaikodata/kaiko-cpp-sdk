cmake_minimum_required(VERSION 3.23)
project(kaikosdk CXX)

FILE(GLOB_RECURSE Sources ${PROJECT_SOURCE_DIR}/*.cc)
add_library(kaikosdk ${Sources})
include_directories(${CMAKE_SOURCE_DIR}/src)

find_package(protobuf REQUIRED)
find_package(gRPC REQUIRED)

include_directories(${protobuf_INCLUDE_DIR})
include_directories(${gRPC_INCLUDE_DIR})
include_directories(${absl_INCLUDE_DIR})

target_link_libraries(${PROJECT_NAME} PUBLIC grpc::grpc protobuf::protobuf)

install(TARGETS kaikosdk)
