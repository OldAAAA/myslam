//
// Created by ivip on 2020/1/9.
//

#include "system/System.h"
#include "camera/Camera.h"

using namespace std;

namespace mySlam{
    Camera::Camera(string name ,float fx, float fy, float cx, float cy, float k1, float k2, float k3, float p1, float p2, int frequency):
    fx(fx),fy(fy),cx(cx),cy(cy),k1(k1),k2(k2),k3(k3),p1(p1),p2(p2),name(name),frequency(frequency)
    {
        cout << "Create " << name << "!" << endl;
        cout << "The intrinsic parameters of your camera is as blow: " << endl;
        cout.setf(ios::scientific);
        cout << "fx: " << fx << " fy: " << fy << " cx: " << cx << " cy: " << cy << endl;
        cout.setf(ios::scientific);
        cout << "k1: " << k1 << " k2: " << k2 << " k3: " << k3 << " p1: " << p1 << " p2: " << p2 << endl;
        cout << "frequency:" << frequency << endl;
    }

    cv::Mat Camera::outputPiture() {
        cv::Mat image;
        try {
            image = cv::imread(image_path[currentIndex]);
            if(image.empty()){
                cerr << "the current image path is:" << image_path[currentIndex] << endl;
                cerr << "the path of the image is not right" << endl;
                exit(1);
            }
            currentIndex += 1;
            if(currentIndex == image_path.size()){
                cout << "all the image have been read";
                exit(0);
            }
        }catch (cv::Exception & e){
            cerr << "Error while read picture:" << e.err << endl;
            exit(-1);
        }
        return image;
    }

    bool Camera::setPictureSource(string filename) {
        string pictureDir = filename.substr(0,filename.find_last_of('/'));
        ifstream associations(filename);
        if(!associations.is_open()){
            cout << "the associations file does not exist" << endl;
            return false;
        }

        //read the unused lines
        string tempString;
        getline(associations , tempString);
        getline(associations , tempString);
        getline(associations , tempString);

        //read the timestamp and the image path
        while(!associations.eof()){
            getline(associations , tempString);
            if(!tempString.empty()){
                stringstream ss;
                ss << tempString;
                double t;
                ss >> t;
                timestamp.push_back(t);
                ss >> tempString;
                tempString = pictureDir + "/" + tempString;
                image_path.push_back(tempString);
            }
        }
        cout << "there are " << image_path.size() << " image in your association file" << endl;

        //reset the current frame index
        currentIndex = 0;

        return true;
    }

    Camera::Camera() {

    }
}
