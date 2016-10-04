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
//    delete this->shotLoc*;
}

Shot::Shot(const Shot& other){
    this->madeFlag = other.madeFlag;
    this->shotLoc = other.shotLoc;
    this->shotColor = other.shotColor;
}

Shot& Shot:: operator=(const Shot& other){
    
    if(this != &other){
        this->madeFlag = other.madeFlag;
        this->shotColor = other.shotColor;
        
        // Reset our variable shotLoc
        delete this->shotLoc;
        shotLoc = NULL;
        this->shotLoc = other.shotLoc;
    }
    
    return *this;
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
   if(madeFlag == 1)
       return ofColor(0, 255, 0, 50);
    
   else
       return ofColor(255, 0, 0, 50);
}

void Shot::draw() {
    ofSetColor(this->shotColor);
    ofFill();
    ofDrawSphere(this->shotLoc->x, this->shotLoc->y, this->shotLoc->z, 3);
}

// Getters and Setters
void Shot::setMadeFlag(int madeFlag) {
    this->madeFlag = madeFlag;
}

int Shot::getMadeFlag() const {
    return this->madeFlag;
}

void Shot::setShotColor(ofColor shotColor) {
    this->shotColor = shotColor;
}
ofColor Shot::getShotColor() const {
    return this->shotColor;
}

void Shot::setShotLoc(ofVec3f shotLoc){
    
}

ofVec3f* Shot::getShotLoc() const {
    return this->shotLoc;
}
