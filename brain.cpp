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
	cout << "���Բ�����һ���뷨 - " << value << endl;
	cout << "��ͷ��ظ����Ե�ֵ - " << Ear::getInstance()->onMessage(value) << endl;
}

// ��Ϣ������
int Brain::onMessage(int value) {
	return value + 1;
}

