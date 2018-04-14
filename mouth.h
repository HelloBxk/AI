#ifndef _MOUTH_
#define _MOUTH_

#include <iostream>
#include "message.h"

// ���

class Mouth : MessageListener {

public:
	Mouth();
	~Mouth();
	char *name();
	virtual int onMessage(int value);
	static Mouth *getInstance();

private:
	static Mouth *instance;
};

#endif //_MOUTH_