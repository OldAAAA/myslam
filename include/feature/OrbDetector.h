//
// Created by ivip on 2020/1/9.
//

#ifndef MYSLAM_ORBDETECTOR_H
#define MYSLAM_ORBDETECTOR_H

#include "Detector.h"

namespace mySlam{
    class OrbDetector:public Detector{
    public:
        vector<Feature> detector(cv::Mat);

    };
}

#endif //MYSLAM_ORBDETECTOR_H
