//
// Created by ivip on 2020/1/8.
//

#include "system/System.h"
#include "util/Config.h"

using namespace std;

namespace mySlam{
    Config::Config(string fileName){
        try {
            cout << "try to open:" << fileName << endl;
            configFileHandle.open(fileName,cv::FileStorage::READ);
            if(!configFileHandle.isOpened()){
                cerr << "fail to open the config file" << endl;
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

    float Config::getParameters(string key) {
        if(configFileHandle[key].isNone()){
            cerr << "there is not a key named:" << key  << " in your config file" << endl;
            exit(-1);
        }else{
            return float(configFileHandle[key]);
        }
    }
}

