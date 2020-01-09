cmake_minimum_required(VERSION 3.15)
project(myslam)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY lib)

find_package(OpenCV 3 QUIET)

include_directories(
        ${PROJECT_SOURCE_DIR}/include
)

add_library(${PROJECT_NAME} SHARED src/Config.cpp)

target_link_libraries(${PROJECT_NAME}
        ${OpenCV_LIBS})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/test/config)

add_executable(test_config test/config/test_config.cpp)
target_link_libraries(test_config ${PROJECT_NAME})