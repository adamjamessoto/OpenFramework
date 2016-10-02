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
    
    // Public Variables
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
    
    // Constructors
    playerCard();
    playerCard(string playerName);
    playerCard(string playerName, double avgdribbles, double avgtouch, double avgfg, int totalpts);
    
    // Setters
    void setAverageDribbles();
    void setAverageTouches();
    void setAverageShotDistance();
    void setTotalPoints();
    
    // Getters
    string getAverageDribbles();
    string getAverageTouches();
    string getAverageShotDistance();
    string getTotalPoints();
    ofImage playerpicture;
    
    // Rule of 3 Methods
    ~playerCard();
    playerCard(const playerCard& other);
    playerCard& operator=(const playerCard& other);
};



