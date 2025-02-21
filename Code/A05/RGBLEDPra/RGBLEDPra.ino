
/* bluePin - PWM */
const int bluePin = 3;
/* greenPin - PWM */
const int greenPin = 9;
/* redPin - PWM */
const int redPin = 11;
void setup() {
  
}
void loop() {
  int blueVal = 0;
  int redVal = 0;
  int greenVal = 0;
  
  /* Red */
  for( redVal = 1; redVal <= 255; redVal += 1){
    analogWrite( redPin, redVal);
    delay(10);
  }
  for( redVal = 255; redVal >= 0; redVal -= 1){
    analogWrite( redPin, redVal);
    delay(10);
  }

   /* Green */
  for( greenVal = 1; greenVal <= 150; greenVal += 1){
    analogWrite( greenPin, greenVal);
    delay(10);
  }
  for( greenVal = 150; greenVal >= 0; greenVal -= 1){
    analogWrite( greenPin, greenVal);
    delay(10);
  }

  /* Blue */
  for( blueVal = 1; blueVal <= 255; blueVal += 1) {
    analogWrite( bluePin, blueVal);
    delay(10);
  }
  for( blueVal = 255; blueVal >= 0; blueVal -= 1) {
    analogWrite( bluePin, blueVal);
    delay(10);
  }
  
  /* for by 100 */
  for (int i = 1; i <= 100; i += 1) {
    redVal = random( 1, 30);
    greenVal = random( 1, 20);
    blueVal = random( 1, 50);
    analogWrite( redPin, redVal);
    analogWrite( greenPin, greenVal);
    analogWrite( bluePin, blueVal);
    delay(500);
  }
  
  analogWrite( redPin, 0);
  analogWrite( greenPin, 0);
  analogWrite( bluePin, 0);
}
