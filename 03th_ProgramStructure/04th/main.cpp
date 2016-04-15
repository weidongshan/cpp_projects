
#include <stdio.h>
#include "person.h"
#include "dog.h"

/* global namespace */

/* 把A::Person放入global namespace, 以后可以使用Person来表示A::Person */
using A::Person;

/* 把C::Dog放入global namespace, 以后可以使用Dog来表示C::Dog */
using C::Dog;

using A::printVersion;
using C::printVersion;

int main(int argc, char **argv)
{
	/* local namespace */
	//using A::Person;
	//using C::Dog;

	Person per;
	per.setName("zhangsan");
	per.setAge(16);
	per.printInfo();

	Dog dog;
	dog.setName("wangcai");
	dog.setAge(1);
	dog.printInfo();

	A::printVersion();
	C::printVersion();
	return 0;
}

