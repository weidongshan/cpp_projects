

#ifndef _HUMAN_H
#define _HUMAN_H

#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Human {
private:
	char *name;

public:
	void setName(char *name);
	char *getName(void);
	virtual void eating(void) = 0;
	virtual void wearing(void) = 0;
	virtual void driving(void) = 0;
	
};

#endif

