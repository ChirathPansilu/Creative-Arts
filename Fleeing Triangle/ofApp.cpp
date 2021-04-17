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
		int numTriangles = 10;
		int minOffset = 5;
		int maxOffset = 70;
		int alpha = 150;

		for (int t = 0; t < numTriangles; ++t)
		{
			float offsetDistance = ofRandom(minOffset, maxOffset);
			
			ofVec2f mousePos(ofGetMouseX(), ofGetMouseY());

			//define a triangle
			ofVec2f p1(0, 6.25);
			ofVec2f p2(25, 0);
			ofVec2f p3(0, -6.25);

			float rotation = ofRandom(360.0);
			p1.rotate(rotation);
			p2.rotate(rotation);
			p3.rotate(rotation);

			ofVec2f triangleOffset(offsetDistance, 0.0);
			triangleOffset.rotate(rotation);

			p1 += mousePos + triangleOffset;
			p2 += mousePos + triangleOffset;
			p3 += mousePos + triangleOffset;

			ofColor aqua(0, 252, 255, alpha);
			ofColor purple(198, 0, 205, alpha);
			ofColor inBetween = aqua.getLerped(purple, ofRandom(1.0));
			ofSetColor(inBetween);

			ofDrawTriangle(p1, p2, p3);
		}
	}
	else if (ofGetMousePressed(OF_MOUSE_BUTTON_RIGHT))
	{
		ofBackground(0);
	}
}

/*
void ofApp::draw() {
	if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT))
	{
		int maxRadius = 100;
		int distanceStep = 15;
		for (int radius = 20; radius < maxRadius; radius += distanceStep)
		{
			float scale = ofMap(radius, 20, maxRadius, 0.2, 0.01);
			for (int angle = 0; angle < 360; angle += 20)
			{
				ofVec2f shiftPoint(cos(ofDegToRad(angle)), sin(ofDegToRad(angle)));

				ofVec2f mousePos(ofGetMouseX(), ofGetMouseY());

				ofVec2f p1(0, 25.0);
				ofVec2f p2(100, 0);
				ofVec2f p3(0, -25.0);

				//scale vectors
				p1 *= scale;
				p2 *= scale;
				p3 *= scale;

				//rotate the vectors
				p1.rotate(angle);
				p2.rotate(angle);
				p3.rotate(angle);

				//shift the vectors
				p1 += mousePos + radius * shiftPoint;
				p2 += mousePos + radius * shiftPoint;
				p3 += mousePos + radius * shiftPoint;

				ofSetColor(ofColor::aqua, 6);
				ofDrawTriangle(p1, p2, p3);				
			}
		}
		
	}
	else if (ofGetMousePressed(OF_MOUSE_BUTTON_RIGHT))
	{
		ofBackground(0);
	}
}
*/

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
