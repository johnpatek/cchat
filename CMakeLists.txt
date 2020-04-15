cmake_minimum_required(VERSION 2.8)

project(cchat)

cmake_policy(SET CMP0015 NEW)

if(WIN32)
    # TODO: figure it out
else()
    set(CMAKE_CXX_FLAGS "-Wall -Werrow -Wextra -Wpedantic -O3" )
endif()

set(IOCOLORS_DIR ../iocolors/build/install)
set(IOCOLORS_INCLUDE_DIR ${IOCOLORS_DIR}/include)
set(IOCOLORS_LIB_DIR ${IOCOLORS_DIR}/lib)
include_directories(${IOCOLORS_INCLUDE_DIR})
link_directories(${IOCOLORS_LIB_DIR})

add_subdirectory(src)