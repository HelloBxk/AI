#include "lili.h"

#define NAME "lili"
#define SEX  "girl"

using namespace std;

/*
	lili的构成 -> 大脑(brain)
*/
Lili::Lili() {}

Lili::~Lili() {}

char* Lili::name() {
	return NAME;
}

char* Lili::sex() {
	return SEX;
}

int Lili::passToBrain(MessageListener *listener, int value) {
	return listener->onMessage(value);
}

int Lili::passToEar(MessageListener *listener, int value) {
	return listener->onMessage(value);
}

int Lili::passToMouth(MessageListener *listener, int value) {
	return listener->onMessage(value);
}
