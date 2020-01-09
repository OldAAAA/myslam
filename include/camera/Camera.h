//
// Created by ivip on 2020/1/9.
//

#ifndef MYSLAM_CAMERA_H
#define MYSLAM_CAMERA_H

#include "system/System.h"

using namespace std;

namespace mySlam{
    class Camera{
    public:
        //camera name
        string name;

        //camera intrinsic
        float fx;
        float fy;
        float cx;
        float cy;
        //camera distortion
        float k1;
        float k2;
        float k3;
        float p1;
        float p2;

        //camera frequency
        int frequency;
        //current frame index;
        int currentIndex;

        //associations file
        vector<string> image_path;
        vector<double> timestamp;

        Camera(string name, float, float, float, float, float, float, float, float, float, int);

        //read picture form the association file
        bool setPictureSource(string);

        //out put the current frame
        cv::Mat outputPiture();
    };
}

#endif //MYSLAM_CAMERA_H
