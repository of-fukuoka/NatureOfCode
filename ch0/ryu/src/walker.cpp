//
//  walker.cpp
//  mySketch20141108
//
//  Created by ryu on 2014/11/14.
//
//

#include "walker.h"

walker::walker(float x, float y){
    this->x = x;
    this->y = y;
}

void walker::display(){
    ofSetColor(215, 19, 69);
    ofCircle(this->x, this->y, 10);
}

void walker::step(){
    int choice = rand()%4 + 1;
    
    if(choice == 0){
        x += 1;
    }else if(choice == 1){
        x -= 1;
    }else if(choice == 2){
        y += 1;
    }else{
        y -= 1;
    }
    
}