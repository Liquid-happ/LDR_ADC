#include <Arduino.h>

#define LDR_PIN 34

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Bắt đầu đo ánh sáng...");
}

void loop() {
  int value = analogRead(34);
  Serial.printf(">light:%d\n", value);
  delay(2000);
}