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

playerCard::playerCard(double avgdribbles, double avgtouch, double avgfg, int totalpts)
{
    this->avgdribbles = avgdribbles;
    this->avgtouch = avgtouch;
    this->avgfg = avgfg;
    this->totalpts = totalpts;
}


