//
// Created by ivip on 2020/1/9.
//

#include "feature/OrbExtractor.h"

namespace mySlam{
    void OrbExtractor::extract(cv::Mat image,vector<cv::KeyPoint> & keyPoints , cv::Mat & descriptor) {
        cv::Ptr<cv::FeatureDetector> detector = cv::ORB::create();
        cv::Mat Descriptor;
        detector->compute(image , keyPoints , Descriptor);
    }

    OrbExtractor::OrbExtractor() {

    }
}