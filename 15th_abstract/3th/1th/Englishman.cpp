#include "Englishman.h"

void Englishman::setName(char *name) 
{
	this->name = name;
}

char *Englishman::getName(void) 
{
	return this->name;
}

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

