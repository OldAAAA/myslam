//
// Created by ivip on 2020/1/9.
//

#ifndef MYSLAM_FEATURE_H
#define MYSLAM_FEATURE_H

#include <opencv2/core/mat.hpp>

namespace mySlam{
    class Feature{
    public:
        /*
         * @paras u,v pixel of the feature
         */
        Feature(cv::Point2f point,cv::Mat descriptor);

        //pixel coordinates
        cv::Point2f point;

        //the descriptor of the point
        cv::Mat descriptor;
    };
}




#endif //MYSLAM_FEATURE_H
