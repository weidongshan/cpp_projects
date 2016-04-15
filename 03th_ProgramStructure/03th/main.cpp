
#include <stdio.h>
#include "person.h"
#include "dog.h"

int main(int argc, char **argv)
{
	A::Person per;
	per.setName("zhangsan");
	per.setAge(16);
	per.printInfo();

	C::Dog dog;
	dog.setName("wangcai");
	dog.setAge(1);
	dog.printInfo();

	A::printVersion();
	C::printVersion();
	return 0;
}

