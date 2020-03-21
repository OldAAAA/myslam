//
// Created by ivip on 2020/1/9.
//

#include "util/Config.h"
#include "camera/Camera.h"

int main(){
    cout << "start test the camera class" << endl;

    //config file
    string filename  = "/home/ivip/longqiwei/myslam/test/config.yaml";
    mySlam::Config config(filename);

    //camera config
    string cameraName = "camera1";
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
    mySlam::Camera camera("camera" , fx , fy , cx , cy , k1 , k2 , k3 , p1 , p2 , frequency);

    camera.setPictureSource("/home/ivip/longqiwei/openLoris/office/office-1-1/rgb1.txt");

    while(true){
        cv::Mat image = camera.outputPiture();
        cv::imshow("tum1" , image);
        cv::waitKey(200);
    }

}