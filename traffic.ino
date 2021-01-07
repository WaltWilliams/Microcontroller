

int lightDuration = 25000;
int yellowLight = 2000;
int betweenLights = 100;
int betweenRed = 750;

int leftGreen = 10;
int leftYellow = 11;
int leftRed = 12;

int rightGreen = 5;
int rightYellow = 6;
int rightRed = 7;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.

  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, LOW);

  digitalWrite(leftGreen, HIGH);
  delay(betweenLights);
  digitalWrite(rightRed, HIGH);
  delay(lightDuration);
  
  digitalWrite(leftGreen, LOW);
  delay(betweenLights);
  digitalWrite(leftYellow, HIGH);
  delay(yellowLight);
  digitalWrite(leftYellow, LOW);
  delay(betweenLights);
  digitalWrite(leftRed, HIGH);
  
  delay(betweenRed);

  digitalWrite(rightRed, LOW);
  delay(betweenLights);
  digitalWrite(rightGreen, HIGH);
  delay(lightDuration);
  digitalWrite(rightGreen, LOW);
  delay(betweenLights);
  digitalWrite(rightYellow, HIGH);
  delay(yellowLight);
  digitalWrite(rightYellow, LOW);  
  delay(betweenLights);
  digitalWrite(rightRed, HIGH);
  delay(betweenRed);
  digitalWrite(leftRed, LOW);
  delay(betweenLights);

  
}
