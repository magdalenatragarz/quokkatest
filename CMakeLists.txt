cmake_minimum_required(VERSION 3.12)
project(quokkatest)

set(CMAKE_CXX_STANDARD 17)

add_executable(quokkatest ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

install(TARGETS quokkatest DESTINATION build/)