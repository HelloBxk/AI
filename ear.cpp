#include "ear.h"
#include "lili.h"
#include "brain.h"

Ear *Ear::instance = NULL;

#define NAME "ear"

Ear::Ear() {

}

Ear::~Ear() {

}

Ear *Ear::getInstance() {
	if (instance == NULL)
	{
		instance = new Ear();
	}
	return instance;
}

char *Ear::name() {
	return NAME;
}

void Ear::onMessage(int value) {
	cout << "������յ���ֵ - " << value << endl;
}

void Ear::listener(int value) {
	// ���ݵ�����
	cout << "������յ���ֵ - " << value << endl;
	Brain::getInstance()->onMessage(value);
}