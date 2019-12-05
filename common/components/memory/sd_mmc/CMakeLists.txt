cmake_minimum_required(VERSION 3.15)
project(asf_common_components_memory_sd_mmc)

add_library(asf_common_components_memory_sd_mmc INTERFACE)
add_library(asf::common::components::memory::sd_mmc ALIAS asf_common_components_memory_sd_mmc)
target_include_directories(asf_common_components_memory_sd_mmc INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

add_library(asf_common_components_memory_sd_mmc_mci STATIC
    sd_mmc_mem.c
    sd_mmc_mem.h
    sd_mmc.c
    sd_mmc.h
)
add_library(asf::common::components::memory::sd_mmc::mci ALIAS asf_common_components_memory_sd_mmc_mci)

target_include_directories(asf_common_components_memory_sd_mmc_mci 
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_common_components_memory_sd_mmc_mci
    PUBLIC 
        asf::common::components::memory::sd_mmc
        asf::common::services::storage::ctrl_access
        asf::common::services::ioport
        asf::common::services::delay
        asf::common::boards
        asf::${ASF_FAMILY_DIRECTORY}::utils
        asf::${ASF_FAMILY_DIRECTORY}::boards::${ASF_BOARD}
        asf::${ASF_FAMILY_DIRECTORY}::drivers::hsmci
)

target_compile_definitions(asf_common_components_memory_sd_mmc_mci PRIVATE SD_MMC_0_MEM=1)

# add_library(asf_common_components_memory_sd_mmc_spi STATIC
#     conf_sd_mmc.h
#     sd_mmc_spi.c
#     sd_mmc_spi.h
#     sd_mmc.c
#     sd_mmc.h
# )
# add_library(asf::common::components::memory::sd_mmc::spi ALIAS asf_common_components_memory_sd_mmc_spi)

# target_include_directories(asf_common_components_memory_sd_mmc_spi 
#     PUBLIC 
#         ${CMAKE_CURRENT_SOURCE_DIR}
# )

# target_link_libraries(
#     asf_common_components_memory_sd_mmc_spi
#     PUBLIC 
#         asf::common::components::memory::sd_mmc
#         asf::common::services::storage::ctrl_access
#         asf::common::services::ioport
#         asf::common::services::delay
#         asf::common::boards
#         asf::${ASF_FAMILY_DIRECTORY}::utils
#         asf::${ASF_FAMILY_DIRECTORY}::boards::${ASF_BOARD}
#         asf::${ASF_FAMILY_DIRECTORY}::drivers::hsmci
# )

# target_compile_definitions(asf_common_components_memory_sd_mmc_spi PRIVATE SD_MMC_SPI_MODE SD_MMC_0_MEM=ENABLE)
