#include <Arduino.h>

const int ledPins[] = {9, 8, 7, 6, 5, 4, 3, 2};

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
	for (int i = 0; i < 4; i++) {
		digitalWrite(ledPins[i], HIGH);
		digitalWrite(ledPins[7 - i], HIGH);
		delay(250);
	}

	for (int i = 0; i < 4; i++) {
		digitalWrite(ledPins[i], LOW);
		digitalWrite(ledPins[7 - i], LOW);
		delay(250);
	}

	delay(500);
}

