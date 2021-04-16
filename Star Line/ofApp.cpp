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
		int numLines = 100;
		int minRadius = 25;
		int maxRadius = 125;
		for (int i = 0; i < numLines; i++)
		{
			float angle = ofRandom(ofDegToRad(360.0));
			float distance = ofRandom(minRadius, maxRadius);
			float xOffset = distance * cos(angle);
			float yOffset = distance * sin(angle);
			float alpha = ofMap(distance, minRadius, maxRadius, 50, 3);
			ofSetColor(255, alpha);
			ofDrawLine(ofGetMouseX(), ofGetMouseY(), ofGetMouseX() + xOffset, ofGetMouseY() + yOffset);
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
