#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetFrameRate(10);
    
    // load font
    titleFont.load("verdana.ttf", 40);
    statFont.load("verdana.ttf", 15);
    
    //image for tim duncan
    tim.load("wide.jpg");
    
    //ofSetColor(0, 0, 0);
    //ofFill();
    rect.x = 215;
    rect.y = 0;
    rect.width = 800;
    rect.height = 750;

    
    
    //duncanCard = *new playerCard("tim duncan", 0.776714514, 2.084529506, 0.496012759, 623);
    
    //Path to the comma delimited file
    string filePath = "shot_logs_subset.csv";
    
    //Load file placed in bin/data
    ofFile file(filePath);
    
    if(!file.exists()){
        ofLogError("The file " + filePath + " is missing");
    }
    
    ofBuffer buffer(file);
    
    //Read file line by line
    for (ofBuffer::Line it = buffer.getLines().begin(), end = buffer.getLines().end(); it != end; ++it) {
        
        //Split line into strings
        string line = *it;
        vector<string> shotData = ofSplitString(line, ",");
        
        // if haven't seen player before
        // create a playerCard ojbect for them
        // add shot to their shot vector
        if(std::find(names.begin(), names.end(), shotData[19]) == names.end()){
    
            names.push_back(shotData[19]);
            
            playerCard card = playerCard(shotData[19]);
            card.shots.push_back(playerShot(stoi(shotData[0]), shotData[3][0], stoi(shotData[5]), stoi(shotData[6]), stoi(shotData[9]), stod(shotData[10]), stod(shotData[11]), stoi(shotData[12]), shotData[13], shotData[19], stoi(shotData[20])));
            
            players.push_back(card);
        }
        
        // already have a playerCard built
        // add shot to their shot vector
        else{
            
            std::vector<playerCard>::iterator player_it;
            for (player_it = players.begin() ; player_it != players.end(); ++player_it)
            {
                if(player_it->playerName == shotData[19]){
                    player_it->shots.push_back(playerShot(stoi(shotData[0]), shotData[3][0], stoi(shotData[5]), stoi(shotData[6]), stoi(shotData[9]), stod(shotData[10]), stod(shotData[11]), stoi(shotData[12]), shotData[13], shotData[19], stoi(shotData[20])));
                    break;
                }
            }
        }
    }
    
    // Draw player name dropdown menu
    playerDropdown = new ofxDatGuiDropdown("Select a Player:",names);
    playerDropdown -> onDropdownEvent(this, &ofApp::onDropdownEvent);
    
    // set stats for each player
    for(int i=0; i<players.size(); i++){
     
        players[i].setAverageDribbles();
        players[i].setAverageTouches();
        players[i].setAverageShotDistance();
        players[i].setTotalPoints();
    }
    
    
    selectedPlayer = players[0];

    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    playerDropdown -> update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackgroundGradient(ofColor::black, ofColor::gray);
    
    //ofDrawRectRounded(rect, 10);
    titleFont.drawString(ofToUpper(selectedPlayer.playerName), 390, 50);
    gui.draw();
    tim.draw(275,60, 600, 400);

    // print stats to page
    statFont.drawString("Avg. Dribbles: " + to_string(ceil((selectedPlayer.avgdribbles * pow( 10, 3)) - 0.49) / pow( 10, 3)), 280, 540);
    statFont.drawString("Avg. # of Touches: " + selectedPlayer.getAverageTouches(), 570, 540);
    statFont.drawString("Avg. Shot Distance: " + selectedPlayer.getAverageShotDistance(), 280, 650);
    statFont.drawString("Total Points: " + selectedPlayer.getTotalPoints(), 570, 650);

    // draw the dropdown menu
    playerDropdown -> draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}

// change player based on selection
void ofApp::onDropdownEvent(ofxDatGuiDropdownEvent e){
    
    selectedPlayer = players[e.child];
    
}
