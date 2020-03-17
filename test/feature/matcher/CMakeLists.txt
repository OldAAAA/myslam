project("testMatcher")
cmake_minimum_required(VERSION 3.15)

set(mySlam_LIBS "/home/ivip/longqiwei/myslam/build/lib/libmyslam.so")
set(mySlam_INCLUDE "/home/ivip/longqiwei/myslam/include")

include_directories(${mySlam_INCLUDE})

add_executable(testMatcher HfMatcher.cpp)
target_link_libraries(testMatcher ${mySlam_LIBS})