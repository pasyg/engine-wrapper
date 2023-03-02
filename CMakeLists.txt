cmake_minimum_required(VERSION 3.0.0)
project(engine VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)


INCLUDE_DIRECTORIES(
    ${PROJECT_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/include/src
    
    ${PROJECT_SOURCE_DIR}/include/src/gen1
    ${PROJECT_SOURCE_DIR}/include/src/gen1/samples
)

add_library(engine-wrapper INTERFACE)
target_include_directories(engine-wrapper INTERFACE include)

set(ENGINE_SOURCES
    main.cpp
)

add_executable(engine ${ENGINE_SOURCES})

target_link_libraries(engine INTERFACE engine-wrapper PUBLIC ${PROJECT_SOURCE_DIR}/dependencies/libpkmn-showdown.a)