#ifndef _LILI_
#define _LILI_

#include "brain.h"
#include "ear.h"
#include "mouth.h"
#include "message.h"
#include <iostream>

using namespace std;

class Lili {

public:
	Lili();
	~Lili();
	char* name();
	char* sex();

	/* 器官之间的数据传递 */
	int passToEar(MessageListener *listener, int value);
	int passToBrain(MessageListener *listener, int value);
	int passToMouth(MessageListener *listener, int value);

private:
	
};

#endif //_LILI_