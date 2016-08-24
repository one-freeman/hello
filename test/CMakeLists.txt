project(test_hello CXX)

set(${PROJECT_NAME}_SOURCES
    test_hello.cpp
)

set(${PROJECT_NAME}_HEADERS
    ../include/hello.h
)

add_executable(${PROJECT_NAME}
    ${hello_SOURCES}
    ${hello_HEADERS}
    ${${PROJECT_NAME}_SOURCES}
)

target_link_libraries(${PROJECT_NAME}
    ${CONAN_LIBS}
)

add_test(NAME ${PROJECT_NAME}
    COMMAND ${PROJECT_NAME}
)