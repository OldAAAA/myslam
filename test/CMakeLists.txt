project(test_myslam)

include_directories("../include")

set(MySlam_LIBS "/home/ivip/longqiwei/myslam/lib/libmyslam.so")

find_package(OpenCV 3 QUIET)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin)
add_executable(test_config ./util/config/test_config.cpp)
target_link_libraries(test_config ${MySlam_LIBS} ${OpenCV_LIBS})

#add_executable(test_camera test/camera/test_camera.cpp)
#target_link_libraries(test_camera ${PROJECT_NAME})
#
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/test/util/imageProcessor/bin)
#add_executable(test_imageProcessor test/util/imageProcessor/test_imageProcessor.cpp)
#target_link_libraries(test_imageProcessor ${PROJECT_NAME})
#
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY test/feature/OrbExtractor/bin)
#add_executable(test_OrbExtractor test/feature/OrbExtractor/test_OrbExtractor.cpp)
#target_link_libraries(test_OrbExtractor ${PROJECT_NAME})