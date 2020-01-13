//
// Created by ivip on 2020/1/9.
//

#include <opencv2/core/types.hpp>
#include "feature/Feature.h"

namespace mySlam{
    Feature::Feature(cv::Point2f point,cv::Mat descriptor):point(point),descriptor(descriptor) {}
}

