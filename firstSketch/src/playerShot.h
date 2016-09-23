//
//  playerShot.h
//  firstSketch
//
//  Created by Adam Soto on 9/17/16.
//
//
#pragma once

#include <stdio.h>
#include "ofMain.h"

class playerShot {
    
public:
    int gameID;
    // string matchup;
    // char location; // h or a
    char win;
    // int finalMargin;
    int shotNumber;
    int period; // 1, 2, 3, 4
    // string gameClock;
    // string shotClock;
    int dribbles;
    double touchTime;
    double shotDistance;
    int ptsType; // 2 or 3
    string shotResult; // made or missed
    // string clostestDefender;
    // int clostestDefenderPlayerID;
    // double closeDefDist;
    // int fgm;
    // int pts;
    string playerName;
    int playerID;
    
    playerShot();
    playerShot(int gameID, char win, int shotNumber, int period, int dribbles, double touchTime, double shotDistance, int ptsType, string shotResult, string playerName, int playerID);

    
    void setup();
    void update();
    
};