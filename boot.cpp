#include <iostream>
#include "lili.h"

using namespace std;

// ����

int main(void) {

	Lili li;

	cout << li.name() << endl;
	cout << li.sex() << endl;

	//���Բ�����һ��idea
	Brain::getInstance()->idea(12);

	Ear::getInstance()->listener(1);

	return 0;
}