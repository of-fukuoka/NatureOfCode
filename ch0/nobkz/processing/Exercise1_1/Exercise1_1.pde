class Walker{
  int x;
  int y;

  Walker(){
    x = 20;
    y = 20;
  }

  void display(){
    stroke(0);
    point(x,y);
  }

  void step(){
    float random_x = random(1);
    float random_y = random(1);
    if( random_x < 0.35){
      x--;
    }else if(random_x < 0.8){
      x++;
    }

    if( random_y < 0.35){
      y--;
    }else if(random_y < 0.8){
      y++;
    }
    
  }
}

Walker w;

void setup(){
  size(640, 360);
  w = new Walker();
  background(255);
}

void draw(){
  w.step();
  w.display();
}
