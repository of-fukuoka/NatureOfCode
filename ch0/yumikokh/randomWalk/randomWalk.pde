GifRecorder recorder = new GifRecorder(this);
class Walker {
  float x, y;
  float num;

  Walker() {
    x = width/2;
    y = height/2;
  }

  void display() {
    stroke(0);
    point(x, y);
  }

  void step() {
    num = random(1);

    if ( num < 0.5 ) {
      x++;
      y++;
    } else if ( num < 0.8) {
      x--;
    } else {
      y--;
    }
  }
}


Walker w;


void setup() {
  size(512, 512);
  w = new Walker();
  background(255);
}

void draw() {
  w.step();
  w.display();

  recorder.onDraw();
}

void mouseClicked() {
  recorder.recordForSeconds("out.gif", 5); 
}
