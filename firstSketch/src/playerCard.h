//
//  playerCard.h
//  firstSketch
//
//  Created by Kareem Williams on 9/18/16.
//
//
#pragma once

#include <stdio.h>
#include "ofMain.h"
#include "playerShot.h"

class playerCard {
public:
    string playerName;
    double avgdribbles;
    double avgtouch;
    double avgshotdistance;
    double avgfg;
    int totalpts;
    int posX;
    int posY;
    int height;
    int width;
    vector<playerShot> shots;
    
    playerCard();
    playerCard(string playerName);
    playerCard(string playerName, double avgdribbles, double avgtouch, double avgfg, int totalpts);
    
    void setAverageDribbles();
    void setAverageTouches();
    void setAverageShotDistance();
    void setTotalPoints();
    
    string getAverageDribbles();
    string getAverageTouches();
    string getAverageShotDistance();
    string getTotalPoints();
    ofImage playerpicture;
    
    void setup();
    void update();
};



