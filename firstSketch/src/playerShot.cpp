//
//  playerShot.cpp
//  firstSketch
//
//  Created by Adam Soto on 9/17/16.
//
//

#include "playerShot.h"

playerShot::playerShot(){

}

playerShot::playerShot(int gameID, char win, int shotNumber, int period, int dribbles, double touchTime, double shotDistance, int ptsType, string shotResult, string playerName, int playerID){
    
    this->gameID = gameID;
    this->win = win;
    this->shotNumber = shotNumber;
    this->period = period;
    this->dribbles = dribbles;
    this->touchTime = touchTime;
    this->shotDistance = shotDistance;
    this->ptsType = ptsType;
    this->shotResult = shotResult;
    this->playerName = playerName;
    this->playerID = playerID;
}