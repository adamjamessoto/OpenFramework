//
//  playerCard.cpp
//  firstSketch
//
//  Created by Kareem Williams on 9/18/16.
//
//

#include "playerCard.h"

playerCard::playerCard(){
    
}

playerCard::playerCard(string playerName){
    this->playerName = playerName;
    this->avgdribbles = 0;
    this->avgtouch = 0;
    this->avgfg = 0;
    this->avgshotdistance = 0;
    this->totalpts = 0;
    this->playerpicture.load(playerName+".jpg");
}

playerCard::playerCard(string playerName, double avgdribbles, double avgtouch, double avgfg, int totalpts)
{
    this->playerName = playerName;
    this->avgdribbles = avgdribbles;
    this->avgtouch = avgtouch;
    this->avgfg = avgfg;
    this->avgshotdistance = 0;
    this->totalpts = totalpts;
    this->playerpicture.load(playerName+".jpg");
}

// Setter Methods

void playerCard::setAverageDribbles(){
    
    double drib = 0.0;
    int size = this->shots.size();
    
    for(int i=0; i<size; i++)
    {
        drib += this->shots[i].dribbles;
    }
    
    this->avgdribbles = drib/size;
}

void playerCard::setAverageTouches(){
    
    double touch = 0.0;
    int size = this->shots.size();
    
    for(int i=0; i<size; i++)
    {
        touch += this->shots[i].touchTime;
    }
    
    this->avgtouch = touch/size;
}

void playerCard::setAverageShotDistance(){
    
    double dist = 0.0;
    int size = this->shots.size();
    
    for(int i=0; i<size; i++)
    {
        dist += this->shots[i].shotDistance;
    }
    
    this->avgshotdistance = dist/size;
}

void playerCard::setTotalPoints(){
    
    int points = 0;
    int size = this->shots.size();
    
    for(int i=0; i<size; i++)
    {
        points += this->shots[i].ptsType;
    }
    
    this->totalpts = points;
}

// Getter Methods

string playerCard::getAverageDribbles(){
    
    return to_string(ceil((this->avgdribbles * pow( 10, 3)) - 0.49) / pow( 10, 3));
    //ceil(this->avgdribbles*pow(10,3))/pow(10,3)
}

string playerCard::getAverageTouches(){
    
    
    return to_string(ceil(this->avgtouch*pow(10,3))/pow(10,3));
}

string playerCard::getAverageShotDistance(){
    
    return to_string(ceil(this->avgshotdistance*pow(10,3))/pow(10,3));
}

string playerCard::getTotalPoints(){
    
    return to_string(ceil(this->totalpts*pow(10,3))/pow(10,3));
}