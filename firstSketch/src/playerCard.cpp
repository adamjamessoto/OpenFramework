//
//  playerCard.cpp
//  firstSketch
//
//  Created by Kareem Williams on 9/18/16.
//
//

#include "playerCard.h"
//#include "playerShot.h"

playerCard::playerCard(){
    
}

playerCard::playerCard(string playerName, double avgdribbles, double avgtouch, double avgfg, int totalpts)
{
    this->playerName = playerName;
    this->avgdribbles = avgdribbles;
    this->avgtouch = avgtouch;
    this->avgfg = avgfg;
    this->totalpts = totalpts;
}


