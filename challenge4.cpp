int my_power;
 
// Needed by the test
int answer;
 
void setup() {
  Serial.begin(9600);
 
  // Should be 9
  answer = power(3, 2);
  Serial.println(answer);
 
  // Should be 5
  answer = power(5, 1);
  Serial.println(answer);
 
  // Should be 1
  answer = power(9, 0);
  Serial.println(answer);
 
  // Should be 16384
  answer = power(2, 14);
  Serial.println(answer);
 
  // Should be 0
  answer = power(0, 4);
  Serial.println(answer);
}
 
void loop() {
  // Do nothing
}
 
int power(int x, int y) {
  my_power = pow(x, y);
  return my_power;
}