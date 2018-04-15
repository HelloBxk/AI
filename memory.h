#ifndef _MEMORY_
#define _MEMORY_
#include <iostream>

using namespace std;

// 保存记忆的一种数据结构
// 记忆节点
typedef struct MEMORY_NODE {
	int value; //具体的记忆
	int weight;  //记忆权重
	MEMORY_NODE *left;
	MEMORY_NODE *right;
} MEMORY_NODE;

// 排序二叉树
typedef struct SORT_TREE {
	MEMORY_NODE *root;
	int count;
} SORT_TREE;

class Memory {
public:
	static Memory *getInstance();
	int save(int value);  //保存一条记忆
	MEMORY_NODE *search(int value);
	void print();
	void printTree(MEMORY_NODE *root);
private:
	Memory();
	~Memory();
	MEMORY_NODE *create(int value);
	void del(MEMORY_NODE *node);  //删除记忆只能由大脑自己出触发

	static Memory *instance;
	SORT_TREE *tree;
};

#endif //_MEMORY_