#include "lili.h"
#include <cstdlib>
#include <ctime>
#include <windows.h>

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

	int c = 0;

	srand((unsigned)time(NULL));
	while (true) {
		Ear::getInstance()->listener(rand());  // 耳朵听到了一个声音
		Brain::getInstance()->idea(rand());  // 因此大脑产生了一个想法
		Sleep(500);
	}

	//打印记忆
	Memory::getInstance()->print();

	return 0;
}