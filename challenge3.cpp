// C++ code
//
int i = 30;
void setup()
{
  Serial.begin(9600);
  while(i >= 0) {
    Serial.println(i);
    i--;
    delay(1000);
  }
}

void loop()
{
  
}