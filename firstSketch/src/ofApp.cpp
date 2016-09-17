#include "ofApp.h"
#include "playerShot.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    currentIndex = 0;
    vector<playerShot> shots;
    vector<string> shooterNames;
    
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
    for (std::vector<playerShot>::iterator it = shots.begin() ; it != shots.end(); ++it)
    {
        shooterNames.push_back(it->playerName);
    }
    
    std::vector<string>::iterator it;
    it = std::unique (shooterNames.begin(), shooterNames.end());
    shooterNames.resize( std::distance(shooterNames.begin(),it) );
    
    std::cout << shooterNames.size() << endl;
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofDrawBitmapStringHighlight("Everything works!", 20, 20);
    
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
