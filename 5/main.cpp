#if __has_include(<Arduino.h>)
#include <Arduino.h>
#else
// Fallback declarations keep this file parsable when the Arduino framework
// is not available to the editor's include path.
extern void pinMode(int pin, int mode);
extern void digitalWrite(int pin, int value);
extern void delay(unsigned long milliseconds);

constexpr int OUTPUT = 0x1;
constexpr int HIGH = 0x1;
constexpr int LOW = 0x0;
#endif

void setup() {
  for (int pin = 2; pin <= 9; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  for (int blinkPause = 500; blinkPause >= 50; blinkPause -= 50) {
    for (int pin = 2; pin <= 9; pin++) {
      digitalWrite(pin, HIGH);
      delay(100);
      digitalWrite(pin, LOW);
      delay(blinkPause);
    }

    for (int pin = 9; pin >= 2; pin--) {
      digitalWrite(pin, HIGH);
      delay(100);
      digitalWrite(pin, LOW);
      delay(blinkPause);
    }
  }
}

