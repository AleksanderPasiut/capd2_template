cmake_minimum_required(VERSION 3.10)
project(cape_template)

set(CMAKE_EXPORT_COMPILE_COMMANDS YES)

add_executable(${PROJECT_NAME} src/main.cpp)

target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra)

add_dependencies(${PROJECT_NAME} cape)
add_subdirectory(src/cape)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR})
target_link_libraries(${PROJECT_NAME} PRIVATE -lstdc++)

link_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/src/cape)
target_link_libraries(${PROJECT_NAME} PRIVATE cape)
