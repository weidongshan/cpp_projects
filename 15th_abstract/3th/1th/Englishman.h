
#ifndef _ENGLISHMAN_H
#define _ENGLISHMAN_H

#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Englishman {
private:
	char *name;
public:
	void setName(char *name);
	char *getName(void);
	void eating(void);
	void wearing(void);
	void driving(void);
	~Englishman();
};

#endif

