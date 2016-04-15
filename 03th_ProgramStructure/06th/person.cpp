
#include <iostream>
#include "person.h"

namespace A {

void Person::setName(char *name)
{
	this->name = name;
}

int Person::setAge(int age)
{
	if (age < 0 || age > 150)
	{
		this->age = 0;
		return -1;
	}
	this->age = age;
	return 0;
}

void Person::printInfo(void)
{
	std::cout<<"name = "<<name<<" age = "<<age<<" work = "<<work<<std::endl; 
}

void printVersion(void)
{
	std::cout<<"Person v1, by weidongshan"<<std::endl;
}

}
