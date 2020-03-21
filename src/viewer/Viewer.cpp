//
// Created by ivip on 2020/3/17.
//

#include "viewer/Viewer.h"
#include "camera/Camera.h"

namespace mySlam{
    Viewer::Viewer(string name) {
        this->name = name;
    }

    void Viewer::show(cv::Mat (*source)(),double pTime) {
        while(true){
            cv::imshow(name , source());
            cv::waitKey(pTime * 1000);
        }
    }


}