cmake_minimum_required (VERSION 3.12)
project(testing)

set(CMAKE_CXX_STANDARD 17)

file(GLOB src "${CMAKE_CURRENT_SOURCE_DIR}/src/*")
file(GLOB include "${CMAKE_CURRENT_SOURCE_DIR}/include/*")

add_library(testing STATIC ${src} ${include})

target_include_directories(testing
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/)

