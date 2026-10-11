#define BUTTON_PIN 2        // GPIO pin connected to the button
#define LED_PIN 13          // GPIO pin connected to the LED
#define DEBOUNCE_TIME 50    // Debounce time in milliseconds

int buttonState = HIGH;     // Current stable button state
int lastButtonState = HIGH; // Previous reading
unsigned long lastDebounceTime = 0; // Timestamp of the last state change

void setup() {
    pinMode(BUTTON_PIN, INPUT_PULLUP); // Use internal pull-up resistor
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    int reading = digitalRead(BUTTON_PIN); // Read the current state of the button

    // If the reading changed, reset the debounce timer
    if (reading != lastButtonState) {
        lastDebounceTime = millis();
    }

    // If enough time has passed, consider the reading stable
    if ((millis() - lastDebounceTime) > DEBOUNCE_TIME) {
        if (reading != buttonState) {
            buttonState = reading;

            // Button press confirmed (LOW because of pull-up)
            if (buttonState == LOW) {
                handleButtonPress();
            }
        }
    }

    lastButtonState = reading; // Save the reading for next loop
}

void handleButtonPress() {
    // Toggle the LED
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
}