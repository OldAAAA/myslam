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

        /*
         * construct of the camera
         * @paras fx fy cx fy the intrinsic parameters of camera
         * @paras k1 k2 k3 p1 p2 the distortion parameters of camera
         * @paras frequency the frequency of the camera
         */
        Camera(string name, float fx, float fy, float cx, float cy, float k1, float k2, float k3, float p1, float p2, int frequency);
        Camera();

        /*
         * read picture form the association file
         * @ filename the picture filename.the format of the file is timestamp append path,for example "1560000083.949196 color/1560000083.9491961231.png"
         * return true while the file is fine ,otherwise return false;
         */
        bool setPictureSource(string filename);

        /*
         * return the current frame
         */
        cv::Mat outputPiture();
    };
}

#endif //MYSLAM_CAMERA_H
