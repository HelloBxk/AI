#ifndef _MEMORY_
#define _MEMORY_
#include <iostream>

using namespace std;

// ��������һ�����ݽṹ
// ����
typedef struct MEMORY_NODE{
	// ����ڵ�
	int entity;
	MEMORY_NODE *next;
} MEMORY_NODE;

class Memory {
public:
	static Memory *getInstance();
	int save(int value);
	MEMORY_NODE *search(int value);
	void print();
private:
	Memory();
	~Memory();
	static Memory *instance;
	MEMORY_NODE *root;
	MEMORY_NODE *lastIndex;
};

#endif //_MEMORY_