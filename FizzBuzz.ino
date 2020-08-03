
void setup() {
  Serial.begin(9600);
  for (int n = 1; n <= 100; n++) {
    float res3 = (float)n / 3;
    int check3 = round(res3);
    float res5 = (float)n / 5;
    int check5 = round(res5);
    float res15 = (float)n / 15;
    int check15 = round(res15);
    if (res15 == check15) {
      Serial.println("FizzBuzz");
    }
    else if (res3 == check3) {
      Serial.println("Fizz");
    }
    else if (res5 == check5) {
      Serial.println("Buzz");
    }
    else {
      Serial.println(n);
    }
  }
}
void loop() {

}
