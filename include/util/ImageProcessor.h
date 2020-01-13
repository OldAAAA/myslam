//
// Created by ivip on 2020/1/10.
//

#ifndef MYSLAM_IMAGEPROCESSOR_H
#define MYSLAM_IMAGEPROCESSOR_H

#include "system/System.h"
using namespace std;

namespace mySlam{
    class ImageProcessor{
    public:
        ImageProcessor();

        /*
         * @paras imageGray input gray image
         * @paras scale the scaling factor of the origin image
         * @paras layers the pyramid layers
         */
        vector<cv::Mat> getImagePyramid(cv::Mat imageGray , float scale , int layers);

    private:
        vector<cv::Mat> imagePyramid;

    };
}

#endif //MYSLAM_IMAGEPROCESSOR_H
