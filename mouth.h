#ifndef _MOUTH_
#define _MOUTH_
#include <iostream>
#include "message.h"

// ×ì°Í(ÑïÉùÆ÷)
class Mouth : MessageListener {
public:
	char *name();
	virtual void onMessage(int value);
	static Mouth *getInstance();
private:
	Mouth();
	~Mouth();
	static Mouth *instance;
};

#endif //_MOUTH_