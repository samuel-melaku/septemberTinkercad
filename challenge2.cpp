// C++ code
//
int i = 1;
int e;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  e = isThree(i);
  if(e == 0) {
    Serial.println("Fizz");
    i++;
    delay(1000);
  }else{
    Serial.println(i);
    i++;
    delay(1000);
	}
}

int isThree(int i) {
  if (i % 3 == 0) {
    return 0;
  } else {
    return 1;
  }
}