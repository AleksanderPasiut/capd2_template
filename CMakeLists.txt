cmake_minimum_required(VERSION 3.10)
project(capd2_template)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS YES)

add_executable(${PROJECT_NAME} src/main.cpp)

target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra)

add_dependencies(${PROJECT_NAME} capd2)

add_subdirectory(src/capd2)
target_compile_options(capd2 PRIVATE -Wall -Wextra)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR})
target_link_libraries(${PROJECT_NAME} PRIVATE -lstdc++)
target_link_libraries(${PROJECT_NAME} PRIVATE -lm)

link_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/src/capd2)
target_link_libraries(${PROJECT_NAME} PRIVATE capd2)
