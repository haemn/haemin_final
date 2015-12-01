#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
    amplitude = 100;
    ofSetBackgroundAuto(false);
    period = 50;
    pointX, pointY = 0;
    targetX = ofGetWidth();
    targetY = ofGetHeight();
    easing = 0.01;

    ofBackground(0, 0, 0);
    ofSetFrameRate(30);
    
    
    
    
    yellowBall.x = ofRandomWidth();
    yellowBall.y = ofRandomHeight();
    yellowBall.vx = ofRandom(-10,10);
    yellowBall.vy = ofRandom(-10,10);
    
    whiteBall.x = ofRandomWidth();
    whiteBall.y = ofRandomHeight();
    whiteBall.vx = ofRandom(-10,10);
    whiteBall.vy = ofRandom(-10,10);
    
    redBall.x = ofRandomWidth();
    redBall.y = ofRandomHeight();
    redBall.vx = ofRandom(-30,10);
    redBall.vy = ofRandom(-30,10);
    
    greenBall.x = ofRandomWidth();
    greenBall.y = ofRandomHeight();
    greenBall.vx = ofRandom(-15,10);
    greenBall.vy = ofRandom(-15,10);
    
    grayBall.x = ofRandomWidth();
    grayBall.y = ofRandomHeight();
    grayBall.vx = ofRandom(-20,10);
    grayBall.vy = ofRandom(-20,10);
    
    purpleBall.x = ofRandomWidth();
    purpleBall.y = ofRandomHeight();
    purpleBall.vx = ofRandom(-75,10);
    purpleBall.vy = ofRandom(-75,10);
    
    orangeBall.x = ofRandomWidth();
    orangeBall.y = ofRandomHeight();
    orangeBall.vx = ofRandom(-20,10);
    orangeBall.vy = ofRandom(-20,10);
    
    blueBall.x = ofRandomWidth();
    blueBall.y = ofRandomHeight();
    blueBall.vx = ofRandom(-15,10);
    blueBall.vy = ofRandom(-15,10);
    


}

//--------------------------------------------------------------
void testApp::update() {
    time = ofGetElapsedTimef();
    cose = cos(time)*amplitude;
    sine = sin(time)*amplitude;
    centerX = ofGetWidth()/2;
    centerY = ofGetHeight()/2;
    
    diameter = ofMap(sine, -amplitude , amplitude , 10,200);
    pointX += (targetX - pointX)*easing;
    pointY += (targetY - pointY)*easing;

    
    yellowBall.x = yellowBall.x + yellowBall.vx;
    yellowBall.y = yellowBall.y + yellowBall.vy;
    
    whiteBall.x = whiteBall.x + whiteBall.vx;
    whiteBall.y = whiteBall.y + whiteBall.vy;

    redBall.x = redBall.x + redBall.vx;
    redBall.y = redBall.y + redBall.vy;
    
    greenBall.x = greenBall.x + greenBall.vx;
    greenBall.y = greenBall.y + greenBall.vy;
    
    grayBall.x = grayBall.x + grayBall.vx;
    grayBall.y = grayBall.y + grayBall.vy;
    
    purpleBall.x = purpleBall.x + purpleBall.vx;
    purpleBall.y = purpleBall.y + purpleBall.vy;
    
    orangeBall.x = orangeBall.x + orangeBall.vx;
    orangeBall.y = orangeBall.y + orangeBall.vy;
    
    blueBall.x = blueBall.x + blueBall.vx;
    blueBall.y = blueBall.y + blueBall.vy;
    
    

    
    if (yellowBall.x<0 || yellowBall.x > ofGetWidth()) {
        yellowBall.vx = -yellowBall.vx/2;
    }
    
    if (yellowBall.y<0 || yellowBall.y > ofGetHeight()) {
        yellowBall.vy = -yellowBall.vy/2;
    }
    
    if (whiteBall.x<0 || whiteBall.x > ofGetWidth()) {
        whiteBall.vx = -whiteBall.vx;
    }
    
    if (whiteBall.y<0 || whiteBall.y > ofGetHeight()) {
        whiteBall.vy = -whiteBall.vy;
    }
    
    if (redBall.x<0 || redBall.x > ofGetWidth()) {
        redBall.vx = -redBall.vx;
    }
    
    if (redBall.y<0 || redBall.y > ofGetHeight()) {
        redBall.vy = -redBall.vy;
    }
    
    
    if (greenBall.x<0 || greenBall.x > ofGetWidth()) {
        greenBall.vx = -greenBall.vx/2;
    }
    
    if (greenBall.y<0 || greenBall.y > ofGetHeight()) {
        greenBall.vy = -greenBall.vy/2;
    }
    
    if (grayBall.x<0 || grayBall.x > ofGetWidth()) {
        grayBall.vx = -grayBall.vx;
    }
    
    if (grayBall.y<0 || grayBall.y > ofGetHeight()) {
        grayBall.vy = -grayBall.vy;
    }
    
    if (purpleBall.x<0 || purpleBall.x > ofGetWidth()) {
        purpleBall.vx = -purpleBall.vx;
    }
    
    if (purpleBall.y<0 || purpleBall.y > ofGetHeight()) {
        purpleBall.vy = -purpleBall.vy;
    }
    
    
    if (orangeBall.x<0 || orangeBall.x > ofGetWidth()) {
        orangeBall.vx = -orangeBall.vx/2;
    }
    
    if (orangeBall.y<0 || orangeBall.y > ofGetHeight()) {
        orangeBall.vy = -orangeBall.vy/2;
    }
    
    if (blueBall.x<0 || blueBall.x > ofGetWidth()) {
        blueBall.vx = -blueBall.vx;
    }
    
    if (blueBall.y<0 || blueBall.y > ofGetHeight()) {
        blueBall.vy = -blueBall.vy;
    }
    
    
   
    

    
}


//--------------------------------------------------------------
void testApp::draw(){
    ofCircle(pointX,pointY, 25);
    
    ofSetColor(255, 255, 0, 200);
    ofSetCircleResolution(100); // smooth line
    ofCircle(yellowBall.x, yellowBall.y, 100);
    
    ofFill();
    ofSetColor(255, 0, 255, 200);
    ofEllipse(yellowBall.x,yellowBall.y,50,50);
    
    
    ofSetColor(255, 255, 255, 200);
    ofCircle(whiteBall.x, whiteBall.y, 100);
    
    ofSetColor(255, 0, 0, 200);
    ofCircle(redBall.x, redBall.y, 60,60);
    
    ofSetColor(51, 255, 125, 200);
    ofCircle(greenBall.x, greenBall.y, 70,70);
    
    
    
    ofSetColor(160, 160, 160, 200);
    ofCircle(grayBall.x, grayBall.y, 30,30);
    
    
    ofSetColor(127, 0, 255, 200);
    ofCircle(purpleBall.x, purpleBall.y, 20,20);
    
    ofSetColor(255, 128, 0, 200);
    ofCircle(orangeBall.x, orangeBall.y, 40,40);
    
    
    ofSetColor(0, 0, 255, 200);
    ofCircle(blueBall.x, blueBall.y, 110,110);

    
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
    
    
    if (key == OF_KEY_LEFT){
        
        ofBackground(255, 255, 255);
    }
    else if (key == OF_KEY_RIGHT) {
        ofBackground(100, 250, 250);}
       
    else if (key == OF_KEY_UP) {
        ofBackground(100, 0, 250);
    }
    else if (key == OF_KEY_DOWN) {
        ofBackground(130, 0, 20);
        
        
    }
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
