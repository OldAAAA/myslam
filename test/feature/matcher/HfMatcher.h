//
// Created by ivip on 2020/2/3.
//

#ifndef MYSLAM_HFMATCHER_H
#define MYSLAM_HFMATCHER_H

#include "feature/Matcher.h"


class HfMatcher:mySlam::Matcher {
    std::vector<cv::DMatch> match(cv::Mat & descriptor1, cv::Mat & descriptor2);
};


#endif //MYSLAM_HFMATCHER_H
