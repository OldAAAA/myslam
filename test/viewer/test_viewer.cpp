//
// Created by ivip on 2020/3/17.
//

#include "viewer/Viewer.h"
#include "camera/Camera.h"
#include "util/Config.h"

int main(){
    mySlam::Config config("/home/ivip/longqiwei/myslam/test/config.yaml");
    float k1 = config.getParameters("Camera.k1");
    float k2 = config.getParameters("Camera.k2");
    float k3 = config.getParameters("Camera.k3");
    float p1 = config.getParameters("Camera.p1");
    float p2 = config.getParameters("Camera.p2");
    float fx = config.getParameters("Camera.fx");
    float fy = config.getParameters("Camera.fy");
    float cx = config.getParameters("Camera.cx");
    float cy = config.getParameters("Camera.cy");
    int frequency = int(config.getParameters("Camera.frequency"));
    mySlam::Camera camera("rgb",fx , fy , cx , cy , k1 , k2 , k3 , p1 , p2 , frequency);
    camera.setPictureSource("/home/ivip/longqiwei/openLoris/cafe/cafe-1/rgb.txt");
    mySlam::Viewer viewer("cafe");
//    viewer.show(camera.outputPiture());
}

