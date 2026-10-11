const int RED_LED = 8;
const int GREEN_LED = 9;

unsigned long previousRedMillis = 0;
unsigned long previousGreenMillis = 0;

const unsigned long redInterval = 2000;
const unsigned long greenInterval = 500;

bool redState = LOW;
bool greenState = LOW;

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  // Control the red LED
  if (currentMillis - previousRedMillis >= redInterval) {
    previousRedMillis = currentMillis;
    redState = !redState;
    digitalWrite(RED_LED, redState);
  }

  // Control the green LED
  if (currentMillis - previousGreenMillis >= greenInterval) {
    previousGreenMillis = currentMillis;
    greenState = !greenState;
    digitalWrite(GREEN_LED, greenState);
  }
}
