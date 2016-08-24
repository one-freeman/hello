cmake_minimum_required(VERSION 2.8.12)

project(hello CXX)

include(${CMAKE_SOURCE_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set(${PROJECT_NAME}_SOURCES
    ${CMAKE_SOURCE_DIR}/src/hello.cpp
)

set(${PROJECT_NAME}_HEADERS
    ${CMAKE_SOURCE_DIR}/include/hello.h
)

include_directories(include)

add_executable(${PROJECT_NAME}
    ${CMAKE_SOURCE_DIR}/src/main.cpp
    ${${PROJECT_NAME}_SOURCES}
    ${${PROJECT_NAME}_HEADERS}
)


enable_testing()
add_subdirectory(test)
