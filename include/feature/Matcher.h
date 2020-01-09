//
// Created by ivip on 2020/1/9.
//

#ifndef MYSLAM_MATCHER_H
#define MYSLAM_MATCHER_H



namespace mySlam{
    class Matcher{
        Matcher();

        /*
         * match the two descriptor
         */
        virtual double match(cv::Mat & descriptor1, cv::Mat & descriptor2 )
    };
}

#endif //MYSLAM_MATCHER_H
