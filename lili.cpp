#include "lili.h"
#include <cstdlib>
#include <ctime>
#include <windows.h>

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

	int c = 0;

	srand((unsigned)time(NULL));
	while (true) {
		Ear::getInstance()->listener(rand());  // ����������һ������
		Brain::getInstance()->idea(rand());  // ��˴��Բ�����һ���뷨
		Sleep(500);
	}

	//��ӡ����
	Memory::getInstance()->print();

	return 0;
}