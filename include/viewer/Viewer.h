//
// Created by ivip on 2020/3/17.
//

#ifndef MYSLAM_VIEWER_H
#define MYSLAM_VIEWER_H

#include "system/System.h"
#include "camera/Camera.h"

namespace mySlam{
    class Viewer{
    public:
        //the viewer name
        string name;

        /* create a viewer
         * @para name the viewer name
         * @para camera the viewer source
         * */
        Viewer(string name);

        /*
         * show the window of the viewer
         * */
        vertual void show();
    };
}

#endif //MYSLAM_VIEWER_H
