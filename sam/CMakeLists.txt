cmake_minimum_required(VERSION 3.15)
project(sam)

add_subdirectory(utils)

if (NOT ASF_BOARD STREQUAL "none")
    add_subdirectory(sam/boards/${ASF_BOARD})
endif()
