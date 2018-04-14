#include "lili.h"

#define NAME "lili"
#define SEX  "girl"

using namespace std;

/*
	lili的构成 -> 大脑(brain)
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

	//大脑产生了一个idea
	Brain::getInstance()->idea(12);

	//耳朵听到了一个声音
	Ear::getInstance()->listener(1);

	//打印记忆
	Memory::getInstance()->print();

	return 0;
}