void setup() {
  size(600, 600);
  smooth();
  textSize(32);

}

void draw() {
  background(255);
  translate(width/2, height);
  float angle = map(mouseX,0,width,0, PI);
  float prop = map(mouseY,0,height, 0.1,0.9);
  branch(200,prop,angle);
      
}

void branch(float len, float p, float a) {
  line(0, 0, 0, -len);
textSize(32);
text("Hello", 10, 30); 
fill(0, 102, 153);
text("Hola", 10, 60);
fill(0, 102, 153, 51);

fill(0, 102, 153, 51);
  if (len>10) {
    pushMatrix();
    translate(0, -len);
    rotate(-a);
    branch(len*p,p,a);
    popMatrix();
    pushMatrix();
    translate(0, -len);
    rotate(a);
    branch(len*p,p,a);
    popMatrix();
  }
}