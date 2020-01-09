//
// Created by ivip on 2020/1/8.
//

#include <iostream>
#include <opencv2/opencv.hpp>
#include "Config.h"

using namespace std;

namespace myslam{

Config::Config(string& fileName){
    try {
        cout << "try to open:" << fileName << endl;
        configFileHandle.open(fileName,cv::FileStorage::READ);
        if(!configFileHandle.isOpened()){
            cerr << "the config file is not right" << endl;
            exit(-1);
        }
    }
    catch(cv::Exception& e) {
        cerr << "For the input config file:" << e.err << endl;
        exit(-1);
    }
}

Config::~Config() {
    configFileHandle.release();
}

float Config::getParameters(string & key) {
    return float(configFileHandle[key]);
}


}

