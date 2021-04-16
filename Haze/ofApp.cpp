#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundAuto(false);
	ofBackground(0);
	ofSetFrameRate(60);
	ofEnableAlphaBlending();
}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT))
	{
		int maxRadius = 100;
		int radiusStepSize = 10;
		int alpha = 3;
		int maxOffsetDistance = 100;

		for (int radius = maxRadius; radius > 0; radius -= radiusStepSize)
		{
			float angle = ofRandom(ofDegToRad(360.0));
			float distance = ofRandom(maxOffsetDistance);
			float xOffset = distance * cos(angle);
			float yOffset = distance * sin(angle);
			
			ofColor myOrange(255, 132, 0, alpha);
			ofColor myRed(255, 3, 0, alpha);
			ofColor inBetween = myOrange.getLerped(myRed, ofRandom(1.0));
			ofSetColor(inBetween);
			
			ofDrawCircle(ofGetMouseX() + xOffset, ofGetMouseY() + yOffset, radius);
		}
	}
	else if (ofGetMousePressed(OF_MOUSE_BUTTON_RIGHT))
	{
		ofBackground(0);
	}
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
