#ifndef _MOUTH_
#define _MOUTH_

#include <iostream>
#include "message.h"

// ×ì°Í

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