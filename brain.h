#ifndef _BRAIN_
#define _BRAIN_

#include <iostream>
#include "message.h"

// ��Ԫ
typedef struct BEURON {
	int **input; //�������
	int output; //һ�����
} BEURON;

// ����
class Brain : MessageListener {
public:
	Brain();
	~Brain();
	char *name();
	virtual int onMessage(int value);

	static Brain *getInstance();

	// ���Ի���Ϊһ���ⲿ�Ĵ̼�������һ���뷨
	void idea(int value);

private:
	static Brain *instance;

	// ����ӵ�м���(ʹ��һ�����ݽṹ�������)

	// ���Կ���˼��
};

#endif //_BRAIN_