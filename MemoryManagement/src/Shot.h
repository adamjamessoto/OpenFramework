//
//  Shot.h
//  MemoryManagement
//
//  Created by Adam Soto on 10/2/16.
//
//
#pragma once

#ifndef Shot_h
#define Shot_h
#include "ofMain.h"

class Shot {

private:
    int madeFlag;
    ofVec3f* shotLoc;
    ofColor shotColor;
    
    
public:
    // Constructor Methods
    Shot();
    Shot(float xLoc, float yLoc, int madeFlag);
    
    // Rule of 3 Methods
    ~Shot();
    Shot(const Shot& other);
    Shot& operator=(const Shot& other);
    
    // Helper Methods
    float alterCoordinateX(float xLoc);
    float alterCoordinateY(float yLoc);
    ofColor checkMadeFlag(int madeFlag);
    
    void draw();
    
};

#endif /* Shot_h */
