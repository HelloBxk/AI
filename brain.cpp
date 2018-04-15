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
	outdata.open("F:\\ai_log.txt", ios::app);//ios::app��β��׷�ӵ���˼
	if (node == NULL) {
		cout << "�����ҵ�һ��������뷨 - " << value << endl;
		outdata << "�����ҵ�һ��������뷨 - " << value << endl;
	}
	else {
		cout << "����ǰ�й�����뷨 - " << node->value << endl;
		outdata << "����ǰ�й�����뷨 - " << node->value << endl;
	}

	Memory::getInstance()->save(value);
	cout << "���Բ�����һ���뷨 - " << value << endl;
	outdata << "���Բ�����һ���뷨 - " << value << endl;
	Ear::getInstance()->onMessage(value);
	outdata.close();
}

// ��Ϣ������
void Brain::onMessage(int value) {
	MEMORY_NODE *node = Memory::getInstance()->search(value);
	ofstream outdata;
	outdata.open("F:\\ai_log.txt", ios::app);//ios::app��β��׷�ӵ���˼
	if (node == NULL) {
		cout << "�ҵ�һ�ν��յ� - " << value << endl;
		outdata << "�ҵ�һ�ν��յ� - " << value << endl;
	}
	else {
		cout << "����ǰ���չ� - " << node->value << endl;
		outdata << "����ǰ���չ� - " << node->value << endl;
	}
	Memory::getInstance()->save(value);
}

