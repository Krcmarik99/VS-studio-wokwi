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
	static int parity = 0;

	for (int i = 0; i < 8; i++) {
		digitalWrite(ledPins[i], ((i + 1) % 2 == parity) ? HIGH : LOW);
	}

	delay(500);
	parity = (parity + 1) % 2;
}

