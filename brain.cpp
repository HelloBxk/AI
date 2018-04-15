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
	MEMORY_NODE *node = Memory::getInstance()->search(value);
	if (node == NULL) {
		cout << "这是我第一次有这个想法 - " << value << endl;
	}
	else {
		cout << "我以前有过这个想法 - " << node->entity << endl;
	}

	Memory::getInstance()->save(value);
	cout << "大脑产生了一个想法 - " << value << endl;
	cout << "嘴巴返回给大脑的值 - " << Ear::getInstance()->onMessage(value) << endl;
}

// 消息接收器
int Brain::onMessage(int value) {
	MEMORY_NODE *node = Memory::getInstance()->search(value);
	if (node == NULL) {
		cout << "我第一次接收到 - " << value << endl;
	}
	else {
		cout << "我以前接收过 - " << node->entity << endl;
	}
	Memory::getInstance()->save(value);
	return value + 1;
}

