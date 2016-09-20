//
//  playerCard.h
//  firstSketch
//
//  Created by Kareem Williams on 9/18/16.
//
//

#include <stdio.h>
#include "ofMain.h"
//#include "playerShot.h"

class playerCard {
public:
    string playerName;
    double avgdribbles;
    double avgtouch;
    double avgfg;
    int totalpts;
    int posX;
    int posY;
    int height;
    int width;
    
    playerCard();
    playerCard(string playerName, double avgdribbles, double avgtouch, double avgfg, int totalpts);
//    playerCard(vector<playerShot>);
    
    void setup();
    void update();
};



