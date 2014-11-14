import processing.core.*; 
import processing.data.*; 
import processing.event.*; 
import processing.opengl.*; 

import java.util.HashMap; 
import java.util.ArrayList; 
import java.io.File; 
import java.io.BufferedReader; 
import java.io.PrintWriter; 
import java.io.InputStream; 
import java.io.OutputStream; 
import java.io.IOException; 

public class randomWalk extends PApplet {

class Walker {
	float x,y;
	float num;

	Walker() {
		x = width/2;
		y = height/2;
	}

	public void display() {
		stroke(0);
		point(x, y);
	}

	public void step() {
		num = random(1);

		if ( num < 0.47f ) {
			x++;
			y++;
		}else if( num < 0.8f) {
			x--;
		}else {
			y--;
		}
	}
}


Walker w;


public void setup() {
	size(512, 512);
	w = new Walker();
	background(255);
}

public void draw() {
	w.step();
	w.display();
}
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "randomWalk" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
