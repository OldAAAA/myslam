//
// Created by ivip on 2020/1/9.
//

#ifndef MYSLAM_MATCHER_H
#define MYSLAM_MATCHER_H

#include "system/System.h"

namespace mySlam{
    class Matcher{
    public:
        Matcher();

        /*
         * match the two descriptor
         */
        virtual std::vector<cv::DMatch> match(cv::Mat & descriptor1, cv::Mat & descriptor2 );
    };
}

#endif //MYSLAM_MATCHER_H
