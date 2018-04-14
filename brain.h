#ifndef _BRAIN_
#define _BRAIN_

#include <iostream>
#include "message.h"
// ´óÄÔ
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
};

#endif //_BRAIN_