//
// Created by ivip on 2020/1/10.
//

#include "feature/OrbExtractor.h"
#include "util/ImageProcessor.h"

int main(){
    cv::Mat image = cv::imread("/home/ivip/longqiwei/slambook/ch7/1.png");
    mySlam::ImageProcessor processor;
    vector<cv::Mat> pyramid;
    cv::Mat imgGray;
    cv::cvtColor(image , imgGray , )
    pyramid = processor.getImagePyramid(image,1.2,4);

    mySlam::OrbExtractor extractor;
    vector<vector<cv::KeyPoint>> allKeyPoint;
    allKeyPoint.resize(4);
    auto itp = allKeyPoint.begin();
    for(auto it = pyramid.begin() ; it != pyramid.end() ; it++, itp++){
        cv::Mat descriptor;
        extractor.extract(*it , *itp , descriptor);
        cv::Mat outputImage;
        cv::drawKeypoints(*it , outputImage , *itp);
        cv::imshow("outputImage" , outputImage);
        cv::waitKey(0);
    }
}
