
#include <stdio.h>

namespace A {

class Person {
private:
	char *name;
	int age;
	char *work;

public:
	void setName(char *name);
	int setAge(int age);
	void printInfo(void);
};

void printVersion(void);
}

