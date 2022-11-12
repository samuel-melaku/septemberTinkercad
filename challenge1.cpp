// C++ code
//
int i = 0;
void setup()
{
	Serial.begin(9600);
  }

void loop() {
  i++;
  Serial.println(i);
  delay(1000);
}