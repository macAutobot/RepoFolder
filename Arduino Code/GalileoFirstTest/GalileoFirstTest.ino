/*
Project: Galileo first test code
  Blink all colors
 with delay and sound buzzer while LED is ON
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int red = 2;
int blue = 3;
int green = 4;
int fullrate = 1000;
int rate = fullrate/16;
int Speaker = 5;
int fade;
void LightUp(int color,int rate);
void SpeakerPWM(int fade);
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  LightUp(red,rate);
  LightUp(blue,rate);
  LightUp(green,rate);


}

void SpeakerPWM(int fade){
  analogWrite(Speaker, fade);
}

void LightUp(int color,int rate){
  digitalWrite(color, HIGH);
  fade = 0;// to make sound increase to 200
  SpeakerPWM(fade);
  delay(rate);
  digitalWrite(color, LOW);
  fade = 0;
  SpeakerPWM(fade);
  delay(rate);
}
