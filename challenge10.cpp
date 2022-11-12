// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  int input = 0;
  int input1;
  int input2;
  
  while(input == 0) {
    Serial.println("Enter the number of sides on the dice");
    input = Serial.parseInt();
    delay(1250);
  }
 
  Serial.print("You rolled: " );
  Serial.print(random(1, input));
  delay(3000);
}