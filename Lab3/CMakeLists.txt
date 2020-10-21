cmake_minimum_required(VERSION 3.16)

project(Main)

add_subdirectory(Gege)
add_subdirectory(src)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
find_package(Gege REQUIRED)

set(Gege_INCLUDE_DIR "gege")

include_directories(${Gege_INCLUDE_DIR})

target_include_directories(${PROJECT_NAME} PUBLIC Gege)

target_link_directories(${PROJECT_NAME} PRIVATE Gege)

target_link_libraries(${PROJECT_NAME} ${Gege_INCLUDE_DIR})

