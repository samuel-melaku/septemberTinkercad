const int len = 10;
int a[len] = {0, 2, -4, 12, -52, 42, -96, 7, -23, 99};
float f;
float b;
float c;
float d;
float e;
float g;
void setup()
{
  Serial.begin(9600);
  e = a[0] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6] + a[7] + a[8] + a[9];
  c = e / len;
  Serial.println(c);
}

void loop()
{
  
}