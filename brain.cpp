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
		cout << "�Ҽǵ��Ҽ����� - " << value << endl;
	}
	Memory::getInstance()->save(value);
	cout << "���Բ�����һ���뷨 - " << value << endl;
	cout << "��ͷ��ظ����Ե�ֵ - " << Ear::getInstance()->onMessage(value) << endl;
}

// ��Ϣ������
int Brain::onMessage(int value) {
	if (Memory::getInstance()->search(value)->entity == value) {
		cout << "�Ҽǵ��Ҽ����� - " << value << endl;
	}
	Memory::getInstance()->save(value);
	return value + 1;
}

