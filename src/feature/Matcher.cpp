//
// Created by ivip on 2020/1/9.
//

#include "feature/Matcher.h"
#include "system/System.h"


namespace mySlam{
    Matcher::Matcher(){

    }

    std::vector<cv::DMatch> Matcher::match(cv::Mat &querydescriptor, cv::Mat &fitdescriptor) {
        std::cout << "now in the interface" << std::endl;
    }
}

