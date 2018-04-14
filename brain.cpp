#include "brain.h"
#include "lili.h"
#include "memory.h"

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
	if (Memory::getInstance()->search(value)->entity == value) {
		cout << "我记得我见着他 - " << value << endl;
	}
	Memory::getInstance()->save(value);
	cout << "大脑产生了一个想法 - " << value << endl;
	cout << "嘴巴返回给大脑的值 - " << Ear::getInstance()->onMessage(value) << endl;
}

// 消息接收器
int Brain::onMessage(int value) {
	if (Memory::getInstance()->search(value)->entity == value) {
		cout << "我记得我见着他 - " << value << endl;
	}
	Memory::getInstance()->save(value);
	return value + 1;
}

