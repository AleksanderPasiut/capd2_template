cmake_minimum_required(VERSION 3.10)
project(cape_example)

add_executable(${PROJECT_NAME} src/main.cpp)

add_dependencies(${PROJECT_NAME} cape)
add_subdirectory(src/cape)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR})
target_link_libraries(${PROJECT_NAME} PRIVATE -lstdc++)

link_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/src/cape)
target_link_libraries(${PROJECT_NAME} PRIVATE cape)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/capdAlg/include)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/capdAux/include)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/capdDynSys4/include)
