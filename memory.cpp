#include "memory.h"

#define MAX_MEMORY_NODE 10000

Memory *Memory::instance = NULL;

Memory::Memory() {
	tree = new SORT_TREE;
	tree->count = 0;
	tree->root = new MEMORY_NODE;
	tree->root->left = NULL;
	tree->root->right = NULL;
	tree->root->weight = 1;
	tree->root->value = -1;
}

Memory::~Memory() {
}

Memory *Memory::getInstance() {
	if (instance == NULL) {
		instance = new Memory();
	}
	return instance;
}

int Memory::save(int value) {

	MEMORY_NODE *p = tree->root;
	MEMORY_NODE *parent = NULL;//保存双亲结点指针
	while (p != NULL) {
		parent = p;
		if (value > p->value) 
		{   //往右边
			p = p->right;
		}
		else if (value < p->value)
		{  //往左边
			p = p->left;
		}
		else
		{
			p->weight++; //第二次看见加重记忆
			return 1;
		}
	}
	if (value > parent->value) {
		parent->right = create(value);
	}
	else {
		parent->left = create(value);
	}

	tree->count++;
	cout << tree->count << endl;

	return 1;
}

MEMORY_NODE *Memory::create(int value) {
	MEMORY_NODE *node = new MEMORY_NODE;
	node->value = value;
	node->weight = 0;
	node->left = NULL;
	node->right = NULL;
	return node;
}

void Memory::del(MEMORY_NODE *node) {
	tree->count--;
	delete node;
}

MEMORY_NODE *Memory::search(int value)
{
	MEMORY_NODE *p = tree->root;
	while (p != NULL) {
		if (value > p->value)
		{   //往右边
			p = p->right;
		}
		else if (value < p->value)
		{  //往左边
			p = p->left;
		}
		else
		{
			p->weight++; //回忆会加重记忆
			return p;
		}
	}
	return NULL;
}

void Memory::print() {
	printTree(tree->root);
}

void Memory::printTree(MEMORY_NODE *root) {
	if (root == NULL) {
		return;
	}
	// 先序遍历
	cout << root->value << endl;
	printTree(root->left);
	printTree(root->right);
}
