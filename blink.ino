int leds[] = {3, 5, 6, 9, 10, 11};
int states[] = {LOW, LOW, LOW, LOW, LOW, LOW};
long delays[] = {50, 500, 1000, 15000, 50000, 200000};
unsigned long prevDelay[] = {0, 0, 0, 0, 0, 0};
unsigned long time;

void setup() {
  for (int led : leds)
  {
    pinMode(led, OUTPUT);
  }
}

void loop() {
  time = micros();
  if (time - prevDelay[0] >= delays[0]) {
      prevDelay[0] = time;
      states[0] = !states[0];
      digitalWrite(leds[0], states[0]);
  }
  if (time - prevDelay[1] >= delays[1]) {
      prevDelay[1] = time;
      states[1] = !states[1];
      digitalWrite(leds[1], states[1]);
  }
  if (time - prevDelay[2] >= delays[2]) {
      prevDelay[2] = time;
      states[2] = !states[2];
      digitalWrite(leds[2], states[2]);
  }
  if (time - prevDelay[3] >= delays[3]) {
      prevDelay[3] = time;
      states[3] = !states[3];
      digitalWrite(leds[3], states[3]);
  }
  if (time - prevDelay[4] >= delays[4]) {
      prevDelay[4] = time;
      states[4] = !states[4];
      digitalWrite(leds[4], states[4]);
  }
  if (time - prevDelay[5] >= delays[5]) {
      prevDelay[5] = time;
      states[5] = !states[5];
      digitalWrite(leds[5], states[5]);
  }
}
