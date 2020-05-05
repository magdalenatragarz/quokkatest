cmake_minimum_required (VERSION 3.12)
project(testing)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE quokka_src "${CMAKE_CURRENT_SOURCE_DIR}/src/*")
file(GLOB_RECURSE quokka_include "${CMAKE_CURRENT_SOURCE_DIR}/include/*")

add_library(testing STATIC ${quokka_src} ${quokka_include})

set_target_properties(testing PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(testing
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/)

