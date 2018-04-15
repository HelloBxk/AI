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
		cout << "�����ҵ�һ��������뷨 - " << value << endl;
	}
	else {
		cout << "����ǰ�й�����뷨 - " << node->entity << endl;
	}

	Memory::getInstance()->save(value);
	cout << "���Բ�����һ���뷨 - " << value << endl;
	cout << "��ͷ��ظ����Ե�ֵ - " << Ear::getInstance()->onMessage(value) << endl;
}

// ��Ϣ������
int Brain::onMessage(int value) {
	MEMORY_NODE *node = Memory::getInstance()->search(value);
	if (node == NULL) {
		cout << "�ҵ�һ�ν��յ� - " << value << endl;
	}
	else {
		cout << "����ǰ���չ� - " << node->entity << endl;
	}
	Memory::getInstance()->save(value);
	return value + 1;
}

