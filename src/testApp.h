#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"

struct Ball {
    int x;
    int y;
    int vx;
    int vy;
};


class testApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    
    Ball whiteBall;
    Ball yellowBall;
    Ball redBall;
    Ball greenBall;
    Ball grayBall;
    Ball purpleBall;
    Ball orangeBall;
    Ball blueBall;
    
 
    float centerX, centerY;
    float amplitude;
    float time;
    float period;
    
    float sine, cose;
    float diameter;
    float targetX;
    float targetY;
    float pointX;
    float pointY;
    float easing;
    

    
};

#endif
