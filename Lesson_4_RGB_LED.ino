//Define pins
int BLUE = 3;
int GREEN = 5;
int RED = 6;
void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}
int redValue;
int greenValue;
int blueValue;


void loop() {
  // put your main code here, to run repeatedly:
  int delayTime = 10;
  redValue = 255;
  greenValue = 0;
  blueValue = 0;

//Fades from red to blue
  for(int i = 1; i <= 255; i++){
    redValue--;
    blueValue++;
    analogWrite(RED, redValue);
    analogWrite(BLUE, blueValue);
    delay(delayTime);
  }
//Fades from blue to red
  redValue = 0;
  greenValue = 0;
  blueValue = 255;
  for(int i = 1; i<= 255; i++){
    redValue++;
    blueValue--;
    analogWrite(BLUE, blueValue);
    analogWrite(RED, redValue);
    delay(delayTime);
  }
}
