cmake_minimum_required (VERSION 3.12)
project(quokkatest VERSION 1.0.0 DESCRIPTION "quokkatest description")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS 1)

file(GLOB_RECURSE quokka_src "${CMAKE_CURRENT_SOURCE_DIR}/src/*")
file(GLOB_RECURSE quokka_include "${CMAKE_CURRENT_SOURCE_DIR}/include/*")

add_library(quokkatest SHARED ${quokka_src} ${quokka_include})

set_target_properties(quokkatest PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(quokkatest PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(quokkatest PUBLIC include)

install(TARGETS quokkatest DESTINATION bin/)