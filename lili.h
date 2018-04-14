#ifndef _LILI_
#define _LILI_

#include "brain.h"
#include "ear.h"
#include "mouth.h"
#include "message.h"
#include "memory.h"

#include <iostream>

using namespace std;

class Lili {

public:
	Lili();
	~Lili();
	char* name();
	char* sex();

private:
	
};

#endif //_LILI_