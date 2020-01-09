//
// Created by ivip on 2020/1/8.
//
#include <iostream>
#include "util/Config.h"

using namespace std;
using namespace mySlam;

int main(int args , char ** arg){
    cout << "This is for test Config class" << endl;
    string filename;
    cin >> filename;
    Config config(filename);
    string para1 = "fx";
    cout << config.getParameters(para1) << endl;
}