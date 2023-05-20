cmake_minimum_required(VERSION 3.0.0)
project(server)

set(CMAKE_MODULE_PATH "D:/rpclib/cmake")
set(RPCLIB_ROOT "D:/rpclib/build2")

find_package(rpclib REQUIRED)

include_directories(${RPCLIB_INCLUDE_DIR})

add_executable(server main.cpp)
target_link_libraries(server ${RPCLIB_LIBS} wsock32 ws2_32)
