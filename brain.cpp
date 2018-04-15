#include "brain.h"
#include "lili.h"
#include "memory.h"

#define NAME "brain"

Brain *Brain::instance = NULL;

Brain::Brain() {
}

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
	ofstream outdata;
	outdata.open("F:\\ai_log.txt", ios::app);//ios::app是尾部追加的意思
	if (node == NULL) {
		cout << "这是我第一次有这个想法 - " << value << endl;
		outdata << "这是我第一次有这个想法 - " << value << endl;
	}
	else {
		cout << "我以前有过这个想法 - " << node->value << endl;
		outdata << "我以前有过这个想法 - " << node->value << endl;
	}

	Memory::getInstance()->save(value);
	cout << "大脑产生了一个想法 - " << value << endl;
	outdata << "大脑产生了一个想法 - " << value << endl;
	Ear::getInstance()->onMessage(value);
	outdata.close();
}

// 消息接收器
void Brain::onMessage(int value) {
	MEMORY_NODE *node = Memory::getInstance()->search(value);
	ofstream outdata;
	outdata.open("F:\\ai_log.txt", ios::app);//ios::app是尾部追加的意思
	if (node == NULL) {
		cout << "我第一次接收到 - " << value << endl;
		outdata << "我第一次接收到 - " << value << endl;
	}
	else {
		cout << "我以前接收过 - " << node->value << endl;
		outdata << "我以前接收过 - " << node->value << endl;
	}
	Memory::getInstance()->save(value);
}

