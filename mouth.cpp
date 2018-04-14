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
	cout << "��ͽ��յ���ֵ - " << value << endl;
	return value + 1;
}
