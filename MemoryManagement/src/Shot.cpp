//
//  Shot.cpp
//  MemoryManagement
//
//  Created by Adam Soto on 10/2/16.
//
//

#include <stdio.h>
#include "Shot.h"

// Constructors
Shot::Shot(){
    
}

Shot::Shot(float xLoc, float yLoc, int madeFlag){
    this->madeFlag = madeFlag;
    this->shotColor = checkMadeFlag(madeFlag);
    this->shotLoc = new ofVec3f(alterCoordinateX(xLoc), alterCoordinateY(yLoc), 0.0);
    
    //cout << this->shotLoc->x << " : " << this->shotLoc->y << endl;
}

// Rule of 3 Methods
Shot::~Shot(){
    
}

Shot::Shot(const Shot& other){
    this->madeFlag = other.madeFlag;
    this->shotLoc = other.shotLoc;
    this->shotColor = other.shotColor;
}

Shot& Shot:: operator=(const Shot& other){
    this->madeFlag = other.madeFlag;
    this->shotLoc = other.shotLoc;
    this->shotColor = other.shotColor;
}

// Helper Methods
float Shot::alterCoordinateX(float xLoc){
    if (xLoc <= 0)
        return (xLoc + 300);
        
    else
        return (xLoc + 300);
}

float Shot::alterCoordinateY(float yLoc){
    if (yLoc <= 0)
        return (500 + yLoc);

    else
        return (500 - yLoc);
}

ofColor Shot::checkMadeFlag(int madeFlag){
    cout << madeFlag << endl;
    
    if(madeFlag == 1)
        return ofColor(0, 255, 0);
    
    else
        ofColor(255, 0, 0);
}


void Shot::draw() {
    ofSetColor(this->shotColor);
    ofFill();
    ofDrawSphere(this->shotLoc->x, this->shotLoc->y, this->shotLoc->z, 3);
}
