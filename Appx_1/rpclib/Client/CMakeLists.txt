cmake_minimum_required(VERSION 3.0.0)
project(client)

set(CMAKE_MODULE_PATH "D:/rpclib/cmake")
set(RPCLIB_ROOT "D:/rpclib/build")

find_package(rpclib REQUIRED)

include_directories(${RPCLIB_INCLUDE_DIR})

add_executable(client main.cpp)
target_link_libraries(client ${RPCLIB_LIBS} wsock32 ws2_32 )
