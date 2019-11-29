cmake_required_version(3.15)
project(sam)

add_subdirectory(utils)

if (ASF_BOARD != "none")
    add_subdirectory(sam/boards/${ASF_BOARD})
endif()
