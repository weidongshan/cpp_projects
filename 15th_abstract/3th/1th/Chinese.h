
#ifndef _CHINESE_H
#define _CHINESE_H

#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Chinese{
private:
	char *name;
public:
	void setName(char *name);
	char *getName(void);
	void eating(void);
	void wearing(void);
	void driving(void);
	~Chinese();
};

#endif

