//
// Created by ivip on 2020/1/9.
//

#ifndef MYSLAM_FRAME_H
#define MYSLAM_FRAME_H

#include "system/System.h"
#include "feature/Feature.h"

using namespace std;

namespace mySlam{
    class Frame{
    public:
        Frame(int frameID);

        int frameID;

        vector<Feature> allFeatures;

    };
}

#endif //MYSLAM_FRAME_H
