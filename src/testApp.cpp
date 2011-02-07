#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetFrameRate(30);
	context.setupUsingXMLFile();
	depth.setup(&context);
	user.setup(&context, &depth);
	//kinectimage.setup(&context);
}

//--------------------------------------------------------------
void testApp::update(){
	context.update();
	user.update();
}

//--------------------------------------------------------------
void testApp::draw(){
	depth.draw(0,0,640,480);
	//kinectimage.draw(0, 0, 640, 480);
	//user.draw();
	ofxTrackedUser* tracked = user.getTrackedUser(0);
	if(tracked != NULL) {
		tracked->debugDraw();
	}
}
//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}