//
// Created by ivip on 2020/1/10.
//

#include "util/ImageProcessor.h"

namespace mySlam{

    ImageProcessor::ImageProcessor() = default;

    vector<cv::Mat> ImageProcessor::getImagePyramid(cv::Mat imageGray , float scale, int layers) {
        scale = 1 / scale;
        if(imageGray.type() != CV_8UC1){
            cerr << "ImageProcessor:" <<"Please input the Gray image!" << endl;
        }

        imagePyramid.resize(layers);
        imagePyramid[0] = imageGray;
        for(int layer = 1 ; layer < layers ; layer++){
            cv::Size scaleImage (round(scale * imagePyramid[layer - 1].cols), round(scale * imagePyramid[layer - 1].rows));
            cv::resize(imagePyramid[layer - 1] ,imagePyramid[layer] , scaleImage , scale , scale );
        }
        return imagePyramid;
    }

}