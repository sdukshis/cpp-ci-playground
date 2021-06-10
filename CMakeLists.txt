cmake_minimum_required(VERSION 3.6)

project(ci-test CXX)

set(CMAKE_CXX_CLANG_TIDY clang-tidy --warnings-as-errors=*)

add_executable(ci-test
    virtual_dtor.cpp
)

set_target_properties(ci-test PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON    
)

target_compile_options(ci-test PUBLIC
    -Wall
    -Wextra
    -pedantic
    -Werror
)
