//Define Pins
#define PIN_BUZZER 12

void setup() {
  // put your setup code here, to run once:
  
  //initialize the buzzer pin as an output
  pinMode(PIN_BUZZER, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  unsigned char i;
  while(1)
 {  
    //output an frequency
    for(i=0; i< 80; i++) 
    {
      digitalWrite(PIN_BUZZER, HIGH);
      delay(1); //wait for 1ms
      digitalWrite(PIN_BUZZER, LOW);
      delay(1);
    }
  
    // output another frequency
    for(i=0; i<100; i++) 
    {
      digitalWrite(PIN_BUZZER, HIGH);
      delay(5);
      digitalWrite(PIN_BUZZER, LOW);
      delay(5);
    }
 }
}
