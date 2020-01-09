//
// Created by ivip on 2020/1/9.
//

#ifndef MYSLAM_DETECTOR_H
#define MYSLAM_DETECTOR_H

#include "system/System.h"
#include "feature/Feature.h"

using namespace std;

namespace mySlam{
    class Detector{
        Detector();

        /*
         * detect the feature in the image
         */
        virtual vector<Feature> detector(cv::Mat){}
    };
}


#endif //MYSLAM_DETECTOR_H
