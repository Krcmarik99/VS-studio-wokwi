#include <Arduino.h>

const int ledPins[] = {9, 8, 7, 6, 5, 4, 3, 2};
bool sequencePlayed = false;

void setup() {
	pinMode(ledPins[0], OUTPUT);
	pinMode(ledPins[1], OUTPUT);
	pinMode(ledPins[2], OUTPUT);
	pinMode(ledPins[3], OUTPUT);
	pinMode(ledPins[4], OUTPUT);
	pinMode(ledPins[5], OUTPUT);
	pinMode(ledPins[6], OUTPUT);
	pinMode(ledPins[7], OUTPUT);
}

void loop() {
	if (sequencePlayed) {
		return;
	}

	for (int i = 0; i < 8; i++) {
		digitalWrite(ledPins[i], HIGH);
		delay(500);
	}

	for (int i = 0; i < 8; i++) {
		digitalWrite(ledPins[i], LOW);
	}

	sequencePlayed = true;
}