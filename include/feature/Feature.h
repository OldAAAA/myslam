//
// Created by ivip on 2020/1/9.
//

#ifndef MYSLAM_FEATURE_H
#define MYSLAM_FEATURE_H

namespace mySlam{
    class Feature{
    public:
        /*
         * @paras u,v pixel of the feature
         */
        Feature(int u , int v);

        //pixel coordinates
        int u,v;

        //the descriptor of the point
        cv::Mat descriptor;
    };
}




#endif //MYSLAM_FEATURE_H
