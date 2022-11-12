void setup() {
  Serial.begin(9600);
 Serial.println(sumDigits(0));     // Should be 0
 Serial.println(sumDigits(2));     // Should be 2
 Serial.println(sumDigits(28));    // Should be 10
 Serial.println(sumDigits(504));   // Should be 9
 Serial.println(sumDigits(2048));  // Should be 14
 Serial.println(sumDigits(32767)); // Should be 25
}

void loop() {
  // Do nothing
}
 
int sumDigits(int x) {
  int a;
  int b;
  int c;
  int d;
  int e;
  int f;
  int g;
  int h;
  int i;
  int j;
  int k;
  int l;
  int m;
  int n;
  int o;
  int p;
  int q;
  int r;
  int s;
  int t;
  int u;
  int v;
  int w;
  int y;
  int z;
    
  
  if (x < 10) {
    int a = x / 1;
    return a;
  }else if(x < 99){
    b = x / 10;
    c = x - (b * 10);
    x = c + b;
    return x;
  }else if (x < 1000) {
      e = x / 100; // 5
      g = e * 100; // 500
      h = x - g; // 4
      i = g + h; // 504
      j = x - g; // 4
      x = e + h;
      return x;
  }else if (x < 10000){
    a = x / 1000; // 2
    b = a * 1000; // 2000
    c = x - b; // 48
    d = c / 10; // 4
    e = c - (d * 10); // 8
    x = e + d + a;
    return x;
  }else if (x < 100000) {
    a = x / 10000; // 3   32,767
    b = a * 10000; // 30,000
    c = x - b; // 2,767
    d = c / 1000; // 2
    e = d * 1000; // 2,000
    f = c - e; // 767
    g = f / 100; // 7
    h = g * 100; // 700
    i = f - h; // 67
    j = i / 10; // 6
    k = j * 10; // 60
    l = i - k; // 7
    x = l + j + g + d + a;
  }
}


