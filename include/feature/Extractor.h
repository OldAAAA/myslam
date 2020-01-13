//
// Created by ivip on 2020/1/9.
//

#ifndef MYSLAM_EXTRACTOR_H
#define MYSLAM_EXTRACTOR_H

#include "system/System.h"
#include "feature/Feature.h"

using namespace std;

namespace mySlam{
    class Extractor{
    public:
        Extractor();

        /*
         * detect the feature in the image
         */
        virtual void detect(cv::Mat image,vector<Feature> & features);
        virtual void  descript(vector<Feature> & features);
    };
}


#endif //MYSLAM_EXTRACTOR_H
