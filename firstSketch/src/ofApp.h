#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxDatGui.h"
#include "playerShot.h"
#include "playerCard.h"
#include <algorithm>



class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void onDropdownEvent(ofxDatGuiDropdownEvent e);
    void onColorPickerEvent(ofxDatGuiColorPickerEvent e);
    void gotMessage(ofMessage msg);
    
    int currentIndex;
    ofxPanel gui;
    ofTrueTypeFont titleFont;
    ofTrueTypeFont statFont;
    ofxDatGuiDropdown* playerDropdown;
    ofxDatGuiColorPicker* cardColorPicker;
    ofColor cardColor;
    ofRectangle rect;
    ofRectangle stat1;
    ofRectangle stat2;
    ofRectangle stat3;
    ofRectangle stat4;
    playerCard selectedPlayer;
    vector<string> names;
    vector<playerCard> players;
    
    
};