#include "lili.h"

#define NAME "lili"
#define SEX  "girl"

using namespace std;

/*
	lili�Ĺ��� -> ����(brain)
*/
Lili::Lili() {}

Lili::~Lili() {}

char* Lili::name() {
	return NAME;
}

char* Lili::sex() {
	return SEX;
}

int main(void) {

	Lili li;

	cout << li.name() << endl;
	cout << li.sex() << endl;

	//���Բ�����һ��idea
	Brain::getInstance()->idea(12);

	//����������һ������
	Ear::getInstance()->listener(1);

	//��ӡ����
	Memory::getInstance()->print();

	return 0;
}