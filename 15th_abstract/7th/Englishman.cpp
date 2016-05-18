#include "Englishman.h"


void Englishman::eating(void) 
{ 
	cout<<"use knife to eat"<<endl; 
}

void Englishman::wearing(void) 
{
	cout<<"wear english style"<<endl; 
}

void Englishman::driving(void) 
{
	cout<<"drive english car"<<endl; 
}

Englishman::~Englishman() 
{ 
	cout<<"~Englishman()"<<endl; 
}

Englishman::Englishman() {}
Englishman::Englishman(char *name, int age, char *address)
{
	setName(name);
	this->age = age;
	memset(this->address, 0, 100);
	strcpy(this->address, address);
}


