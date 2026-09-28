#include <Arduino.h>

const int ledPins[] = {9, 8, 7, 6, 5, 4, 3, 2};

void setup() {
	for (int i = 0; i < 8; i++) {
		pinMode(ledPins[i], OUTPUT);
	}
}

void loop() {
	for (int head = 0; head < 11; head++) {
		for (int i = 0; i < 8; i++) {
			bool ledIsLit = i >= head - 2 && i <= head;
			digitalWrite(ledPins[i], ledIsLit ? HIGH : LOW);
		}
		delay(150);
	}

	delay(300);
}

