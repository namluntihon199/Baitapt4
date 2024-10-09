#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  pinMode(LDR_PIN, INPUT);
}

void loop() {
  int LDRvalue = analogRead(LDR_PIN);
  Serial.print(">LDRvalue:");
  Serial.println(LDRvalue);
}