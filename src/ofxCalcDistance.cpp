//
//  ofxCalcDistance.cpp
//  hullStudy
//
//  Created by okuyama on 2020/02/06.
//

#include "ofxCalcDistance.h"





float  ofxCalcDistance::line2point(vec3 pos0,vec3 pos1,vec3 dstPos){
    vec3 subPoints = vec3(pos1)-vec3(pos0);
    vec3 lineF = vec3(subPoints.y,-subPoints.x,0.0);
     lineF.z = -lineF.y*pos0.y-lineF.x*pos0.x;
    
    if(lineF.x == lineF.y) return 0;
    
    float numerator = abs(lineF.x*dstPos.x+lineF.y*dstPos.y+lineF.z);
    float denominator = sqrt(lineF.x*lineF.x+lineF.y*lineF.y);
    return numerator/denominator;
    
}

