#ifndef _EAR_
#define _EAR_
#include <iostream>
#include "message.h"
// ����

class Ear : MessageListener {
public:
	Ear();
	~Ear();
	char *name();
	virtual int onMessage(int value);

	// ����Ļ�������
	void listener(int value);

	static Ear *getInstance();

private:
	static Ear *instance;
};

#endif //_EAR_