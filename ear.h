#ifndef _EAR_
#define _EAR_
#include <iostream>
#include "message.h"
// 耳朵(麦克风)
class Ear : MessageListener {
public:
	char *name();
	virtual void onMessage(int value);

	// 耳朵的基本功能
	void listener(int value);

	static Ear *getInstance();

private:
	Ear();
	~Ear();
	static Ear *instance;
};

#endif //_EAR_