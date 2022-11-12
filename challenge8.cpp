// C++ code
// string new input (input.replace) position length what replace
//#include <iostream>
//#include <cmath>
#include <SoftwareSerial.h>
#include <String.h>
using namespace std;

String input = "Eating trees is great!"; 
input.replace("Eating", "Test");


 
Serial.println(input);

void setup()
{
  Serial.begin(9600);
  Serial.begin(1109);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}