void setup() 
{
  String input;
  String i = ", ";
  String input1;
  String result;
  
  
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  while (input == ""){
  Serial.println("First Name: \n");
  input = Serial.readStringUntil('\n');
  }
  while (input1 == ""){
  Serial.println("Last Name: \n");
  input1 = Serial.readStringUntil('\n');
  }
  result = input + " ";
  result += input1;
  Serial.println(result);
}

void loop()
{

}