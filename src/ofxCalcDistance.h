//
//  ofxCalcDistance.hpp
//  hullStudy
//
//  Created by okuyama on 2020/02/06.
//
#pragma once
#include "ofMain.h"

using namespace glm;
class ofxCalcDistance{
public:
    float line2point(vec3 pos0,vec3 pos1,vec3 dstPos);//2D
    int grouping_2D(vec3 pos0,vec3 pos1,vec3 targetPos); //true above false below
    float linearFunc(float x,vec3 pos0,vec3 pos1);
    
};


