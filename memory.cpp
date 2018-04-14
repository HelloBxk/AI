#include "memory.h"

Memory *Memory::instance = NULL;

Memory::Memory() {
	root = new MEMORY_NODE;
	root->entity = 0;
	root->next = NULL;
	lastIndex = root;
}

Memory::~Memory() {}

Memory *Memory::getInstance() {
	if (instance == NULL) {
		instance = new Memory();
	}
	return instance;
}

int Memory::save(int value)
{
	MEMORY_NODE *node = new MEMORY_NODE;
	node->entity = value;
	node->next = NULL;
	lastIndex->next = node;
	lastIndex = node;
	return 1;
}

MEMORY_NODE *Memory::search(int value)
{
	MEMORY_NODE *p = root->next;
	while (p != NULL) {
		if (p->entity == value) {
			return p;
		}
		p = p->next;
	}
	return NULL;
}

void Memory::print() {
	MEMORY_NODE *p = root->next;
	while (p != NULL) {
		cout << p->entity << endl;
		p = p->next;
	}
}