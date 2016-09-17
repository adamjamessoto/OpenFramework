#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    currentIndex = 0;
    
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
        string line = *it;
        //Split line into strings
        vector<string> shotData = ofSplitString(line, ",");
        
        shots.push_back(*new playerShot(stoi(shotData[0]), shotData[3][0], stoi(shotData[5]), stoi(shotData[6]), stoi(shotData[9]), stod(shotData[10]), stod(shotData[11]), stoi(shotData[12]), shotData[13], shotData[19], stoi(shotData[20])));
        
    }
    
    // Get unique list of shooter's names
    std::vector<playerShot>::iterator player_it;
    for (player_it = shots.begin() ; player_it != shots.end(); ++player_it)
    {
        shooterNames.push_back(player_it->playerName);
    }
    
    std::vector<string>::iterator unique_it;
    unique_it = std::unique (shooterNames.begin(), shooterNames.end());
    shooterNames.resize( std::distance(shooterNames.begin(),unique_it) );
    
    
    // Create panel for the players
    gui.setup("Select A Player:");
    int shooterNamesCount = 0;
    
    for (int i=0; i<=shooterNames.size(); i++)
    {
        playerSelected.push_back(false);
    }
    
    std::vector<string>::iterator shooter_it;
    std::vector<ofParameter<bool>>::iterator selected_it;
    
    for (shooter_it = shooterNames.begin(), selected_it = playerSelected.begin(); shooter_it != shooterNames.end() && selected_it != playerSelected.end(); ++shooter_it, ++selected_it)
    {
        if (shooterNamesCount == 0)
        {
            gui.add(selected_it[0].set(shooter_it[0], true));
            shooterNamesCount++;
        }
        
        else
        {
            gui.add(selected_it[0].set(shooter_it[0], false));
            shooterNamesCount++;
        }
    }
    
    std::cout << shooterNames.size() << endl;
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackgroundGradient(ofColor::white, ofColor::gray);
    ofDrawBitmapStringHighlight("Everything works!", 20, 20);

    
    gui.draw();
    
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
