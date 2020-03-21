cmake_minimum_required(VERSION 3.15)
project(myslam)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

find_package(OpenCV 3 QUIET)

include_directories(
        ${PROJECT_SOURCE_DIR}/include
)

add_library(${PROJECT_NAME} SHARED
        src/util/Config.cpp
        src/camera/Camera.cpp
        src/frame/Frame.cpp
        src/feature/Feature.cpp
        src/feature/Extractor.cpp
        src/feature/Matcher.cpp
        src/feature/OrbExtractor.cpp
        src/util/ImageProcessor.cpp
        src/viewer/Viewer.cpp)

target_link_libraries(${PROJECT_NAME}
        ${OpenCV_LIBS})

#add_subdirectory("./test" "./test/bin")


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/test/util/config/bin)
add_executable(test_config test/util/config/test_config.cpp)
target_link_libraries(test_config ${PROJECT_NAME})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/test/camera/bin)
add_executable(test_camera test/camera/test_camera.cpp)
target_link_libraries(test_camera ${PROJECT_NAME})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/test/util/imageProcessor/bin)
add_executable(test_imageProcessor test/util/imageProcessor/test_imageProcessor.cpp)
target_link_libraries(test_imageProcessor ${PROJECT_NAME})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY test/feature/OrbExtractor/bin)
add_executable(test_OrbExtractor test/feature/OrbExtractor/test_OrbExtractor.cpp)
target_link_libraries(test_OrbExtractor ${PROJECT_NAME})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY test/viewer/bin)
add_executable(test_Viewer test/viewer/test_viewer.cpp)
target_link_libraries(test_Viewer ${PROJECT_NAME})