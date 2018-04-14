#ifndef _MESSAGE_
#define _MESSAGE_

class MessageListener {
public:
	virtual int onMessage(int value) = 0;
};

#endif //_MESSAGE_