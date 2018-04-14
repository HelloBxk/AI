#include "ear.h"
#include "lili.h"
#include "brain.h"

Ear *Ear::instance = NULL;

#define NAME "ear"

Ear::Ear() {

}

Ear::~Ear() {

}

Ear *Ear::getInstance() {
	if (instance == NULL)
	{
		instance = new Ear();
	}
	return instance;
}

char *Ear::name() {
	return NAME;
}

int Ear::onMessage(int value) {
	cout << "耳朵接收到的值 - " << value << endl;
	return value + 1;
}

void Ear::listener(int value) {
	// 传递到大脑
	cout << "耳朵接收到的值 - " << value << endl;
	cout << "大脑传递回来耳朵的值 - " << Brain::getInstance()->onMessage(value) << endl;
}