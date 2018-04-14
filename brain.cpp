#include "brain.h"
#include "lili.h"

#define NAME "brain"

Brain *Brain::instance = NULL;

Brain::Brain() {}

Brain::~Brain() {}

Brain *Brain::getInstance() {
	if (instance == NULL) {
		instance = new Brain();
	}
	return instance;
}

char *Brain::name() {
	return NAME;
}

void Brain::idea(int value) {
	cout << "大脑产生了一个想法 - " << value << endl;
	cout << "嘴巴返回给大脑的值 - " << Ear::getInstance()->onMessage(value) << endl;
}

// 消息接收器
int Brain::onMessage(int value) {
	return value + 1;
}

