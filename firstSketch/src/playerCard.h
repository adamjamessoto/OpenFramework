//
//  playerCard.h
//  firstSketch
//
//  Created by Kareem Williams on 9/18/16.
//
//

#include <stdio.h>
#include "ofMain.h"

class playerCard {
public:
    double avgdribbles;
    double avgtouch;
    double avgfg;
    int totalpts;
    int posX;
    int posY;
    int height;
    int width;
    
    playerCard();
    playerCard(double avgdribbles, double avgtouch, double avgfg, int totalpts);
    playerCard(vector<playerShot>);
    
    void setup();
    void update();
};



