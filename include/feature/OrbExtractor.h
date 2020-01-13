//
// Created by ivip on 2020/1/9.
//

#ifndef MYSLAM_ORBEXTRACTOR_H
#define MYSLAM_ORBEXTRACTOR_H

#include "Extractor.h"

namespace mySlam{
    class OrbExtractor: public Extractor{
    public:
        OrbExtractor();

        //extractor orb feature
        void extract(cv::Mat image,vector<cv::KeyPoint> & features , cv::Mat & descriptor);

    };
}

#endif //MYSLAM_ORBEXTRACTOR_H
