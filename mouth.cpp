#include "mouth.h"
#include <iostream>
using namespace std;
#define NAME "mouth"

Mouth *Mouth::instance = NULL;

Mouth::Mouth() {}

Mouth::~Mouth() {}

Mouth *Mouth::getInstance() {
	if (instance == NULL) {
		instance = new Mouth();
	}
	return instance;
}

char *Mouth::name() {
	return NAME;
}

int Mouth::onMessage(int value) {
	cout << "嘴巴接收到的值 - " << value << endl;
	return value + 1;
}
