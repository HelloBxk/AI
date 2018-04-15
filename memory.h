#ifndef _MEMORY_
#define _MEMORY_
#include <iostream>

using namespace std;

// ��������һ�����ݽṹ
// ����ڵ�
typedef struct MEMORY_NODE {
	int value; //����ļ���
	int weight;  //����Ȩ��
	MEMORY_NODE *left;
	MEMORY_NODE *right;
} MEMORY_NODE;

// ���������
typedef struct SORT_TREE {
	MEMORY_NODE *root;
	int count;
} SORT_TREE;

class Memory {
public:
	static Memory *getInstance();
	int save(int value);  //����һ������
	MEMORY_NODE *search(int value);
	void print();
	void printTree(MEMORY_NODE *root);
private:
	Memory();
	~Memory();
	MEMORY_NODE *create(int value);
	void del(MEMORY_NODE *node);  //ɾ������ֻ���ɴ����Լ�������

	static Memory *instance;
	SORT_TREE *tree;
};

#endif //_MEMORY_