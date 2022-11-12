int led = 13;
int i = 0;
void setup() {
 Serial.begin(9600);
 pinMode(led, OUTPUT);

  // Count to 10, but replace the number 5 with the word "five"
  for (i > 0; i < 11;) {
    if (i == 5) {
      Serial.println("five");
      i++;
    } else {
      Serial.println(i);
      i++;
    }
  }
}
 
void loop() {
 
  int ms = 200;
 
  // Make the LED flash faster and faster until it appears as
  // a static light. Reset when the delay reaches 0 ms.
  while (ms > 0) {
    digitalWrite(13, LOW);
    delay(ms);
    digitalWrite(13, HIGH);
    delay(ms);
    ms -= 5;
  }
}