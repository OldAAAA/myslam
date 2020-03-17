//
// Created by ivip on 2020/1/10.
//

#include "util/ImageProcessor.h"

int main(){
    mySlam::ImageProcessor processor;
    cv::Mat image = cv::imread("/home/ivip/longqiwei/openLoris/1560000083.949196.png");
    cv::Mat greyImage;
    cv::cvtColor(image,greyImage,CV_BGR2GRAY);
    vector<cv::Mat> images = processor.getImagePyramid(greyImage , 1.2 , 5);

    for( int i = 0 ; i < images.size() ; i++){
        cv::imshow("Pyramid" , images[i]);
        cv::waitKey(0);
    }

}