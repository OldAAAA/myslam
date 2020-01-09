//
// Created by ivip on 2020/1/8.
//

#ifndef MYSLAM_CONFIG_H
#define MYSLAM_CONFIG_H

#include "system/System.h"
#include <opencv2/core/persistence.hpp>

using namespace std;

namespace mySlam{
    class Config {
    public:

        explicit Config(string filename);
        ~Config();

        /*
         * @paras key the name of the value you want to get
         */
        float getParameters(string key);

    private:

        //the file handle of the config file
        cv::FileStorage configFileHandle;
    };

}
#endif //MYSLAM_CONFIG_H
