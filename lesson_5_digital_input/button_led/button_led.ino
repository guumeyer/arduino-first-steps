
// Define Pins
#define PIN_LED 5
#define PIN_BUTTON_A 9
#define PIN_BUTTON_B 8

// Define viriables
byte leds = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_BUTTON_A, INPUT_PULLUP);
  pinMode(PIN_BUTTON_B, INPUT_PULLUP);

  leds = 0;
}

void loop() {
  if (digitalRead(PIN_BUTTON_A) == LOW) {
    digitalWrite(PIN_LED, HIGH);  
  }

  if (digitalRead(PIN_BUTTON_B) == LOW) {
    digitalWrite(PIN_LED, LOW);
  }
  // put your main code here, to run repeatedly:

}
