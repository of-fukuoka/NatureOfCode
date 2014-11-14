#include "ofApp.h"

int w = 320;
int h = 240;
//ofImage img;

//--------------------------------------------------------------
void ofApp::setup(){
   /*
    img.allocate(w,h,OF_IMAGE_GRAYSCALE);
    */
    
    ofSetWindowShape(w,h);
    ofBackground(255, 255, 255);
    wk = walker(w/2,h/2);
}

//--------------------------------------------------------------
void ofApp::update(){

    wk.step();
    
    /*
    float t = 0;
    
    unsigned char * pixels = img.getPixels();
    
    for(int y=0; y < h; y++){
        
        for(int x=0; x < w; x++){
            
            t = t + 100;
            
            //unsigned char v = ofNoise(t);
            
            float a = x * .01;
            float b = y * .01;
            float c = ofGetFrameNum() / 50.0;
            
            float noise = ofNoise(a,b,c) * 255;
            float v = noise>200 ? ofMap(noise,200,255,0,255) : 0;
            
            //float v = (x + y) / 1;
            
            //unsigned char v = ofRandom(10, 100);
            //pixels[y*w+x] = v;
            *pixels = v;
            pixels++;
            
            //img.getPixels()[y*w+x] = v;
            //index_max = y*w+x;
        }
    }
    
    img.update();
     */
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    wk.display();
    
    //ofSetColor(0.5, 0.5, 0);
    //ofCircle(10, 10, 10);
    
    //img.draw(0,0);
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
