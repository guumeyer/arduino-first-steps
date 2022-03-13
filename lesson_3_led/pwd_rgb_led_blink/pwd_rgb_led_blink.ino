
// Define Pins 
#define PIN_BLUE 3 
#define PIN_GREEN 5 
#define PIN_RED 6
#define DELAY_TEN_MILLISECONDS 10 // fading time between colors

// define variables
int redValue;
int greenValue;
int blueValue;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_RED, OUTPUT); 
  pinMode(PIN_GREEN, OUTPUT); 
  pinMode(PIN_BLUE, OUTPUT); 
  digitalWrite(PIN_RED, HIGH); 
  digitalWrite(PIN_GREEN, LOW); 
  digitalWrite(PIN_BLUE, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  redValue = 255; // choose a value between 1 and 255 to change the color.
  greenValue = 0;
  blueValue = 0;

  Serial.println("Step 1");
  for(int i = 0; i < 255; i += 1) // fades out PIN_RED bring PIN_GREEN full when i=255
  {
    redValue -= 1;
    greenValue += 1;
    // The following was reversed, counting in the wrong directions
    // analogWrite(PIN_RED, 255 - redValue);
    // analogWrite(PIN_GREEN, 255 - greenValue);
    analogWrite(PIN_RED, redValue);
    analogWrite(PIN_GREEN, greenValue);
    delay(DELAY_TEN_MILLISECONDS);
  }

  Serial.println("Step 2");
  redValue = 0;
  greenValue = 255;
  blueValue = 0;  
  for(int i = 0; i < 255; i += 1) // fades out PIN_GREEN bring blue full when i=255
  {
    greenValue -= 1;
    blueValue += 1;
    // The following was reversed, counting in the wrong directions
    // analogWrite(PIN_GREEN, 255 - greenValue);
    // analogWrite(PIN_BLUE, 255 - blueValue);
    analogWrite(PIN_GREEN, greenValue);
    analogWrite(PIN_BLUE, blueValue);
    delay(DELAY_TEN_MILLISECONDS);
  }

  Serial.println("Step 3");
  redValue = 0;
  greenValue = 0;
  blueValue = 255;
  
  for(int i = 0; i < 255; i += 1) // fades out blue bring PIN_RED full when i=255
  {
    // The following code has been rearranged to match the other two similar sections
    blueValue -= 1;
    redValue += 1;
    // The following was reversed, counting in the wrong directions
    // analogWrite(PIN_BLUE, 255 - blueValue);
    // analogWrite(PIN_RED, 255 - redValue);
    analogWrite(PIN_BLUE, blueValue);
    analogWrite(PIN_RED, redValue);
    delay(DELAY_TEN_MILLISECONDS);
  }
  
}
