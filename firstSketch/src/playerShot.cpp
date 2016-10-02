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

// Rule of 3
playerShot::~playerShot(){

}

playerShot::playerShot(const playerShot& other){
    this->gameID = other.gameID;
    this->win = other.win;
    this->shotNumber = other.shotNumber;
    this->period = other.period;
    this->dribbles = other.dribbles;
    this->touchTime = other.touchTime;
    this->shotDistance = other.shotDistance;
    this->ptsType = other.ptsType;
    this->shotResult = other.shotResult;
    this->playerName = other.playerName;
    this->playerID = other.playerID;
}

playerShot& playerShot:: operator=(const playerShot& other){
    this->gameID = other.gameID;
    this->win = other.win;
    this->shotNumber = other.shotNumber;
    this->period = other.period;
    this->dribbles = other.dribbles;
    this->touchTime = other.touchTime;
    this->shotDistance = other.shotDistance;
    this->ptsType = other.ptsType;
    this->shotResult = other.shotResult;
    this->playerName = other.playerName;
    this->playerID = other.playerID;
}