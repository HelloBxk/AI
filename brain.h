#ifndef _BRAIN_
#define _BRAIN_

#include <iostream>
#include "message.h"

// 神经元
typedef struct BEURON {
	int **input; //多个输入
	int output; //一个输出
} BEURON;

// 大脑
class Brain : MessageListener {
public:
	Brain();
	~Brain();
	char *name();
	virtual int onMessage(int value);

	static Brain *getInstance();

	// 大脑会因为一个外部的刺激而产生一个想法
	void idea(int value);

private:
	static Brain *instance;

	// 大脑拥有记忆(使用一种数据结构保存记忆)

	// 大脑可以思考
};

#endif //_BRAIN_