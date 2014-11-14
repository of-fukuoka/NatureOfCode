//
//  walker.h
//  mySketch20141108
//
//  Created by ryu on 2014/11/14.
//
//

#ifndef __mySketch20141108__walker__
#define __mySketch20141108__walker__

#include "ofMain.h"

#endif /* defined(__mySketch20141108__walker__) */

class walker{
private:
    float x;
    float y;
public:
    walker(): x(0), y(0){};
    walker(float x, float y);
    void display();
    void step();
};