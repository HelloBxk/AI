#include <iostream>
#include "lili.h"

using namespace std;

// 启动

int main(void) {

	Lili li;

	cout << li.name() << endl;
	cout << li.sex() << endl;

	//大脑产生了一个idea
	Brain::getInstance()->idea(12);

	Ear::getInstance()->listener(1);

	return 0;
}