#ifndef _BRAIN_
#define _BRAIN_

#include <iostream>
#include "message.h"
// 大脑
class Brain : MessageListener {
public:
	Brain();
	~Brain();
	char *name();
	virtual int onMessage(int value);

	static Brain *getInstance();

	void idea(int value);

private:
	static Brain *instance;

	// 大脑拥有记忆(使用一种数据结构保存记忆)

	// 大脑可以思考
};

#endif //_BRAIN_