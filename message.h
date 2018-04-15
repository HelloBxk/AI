#ifndef _MESSAGE_
#define _MESSAGE_

class MessageListener {
public:
	virtual void onMessage(int value) = 0;
};

#endif //_MESSAGE_