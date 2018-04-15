#ifndef _EAR_
#define _EAR_
#include <iostream>
#include "message.h"
// ����

class Ear : MessageListener {
public:
	char *name();
	virtual int onMessage(int value);

	// ����Ļ�������
	void listener(int value);

	static Ear *getInstance();

private:
	Ear();
	~Ear();
	static Ear *instance;
};

#endif //_EAR_