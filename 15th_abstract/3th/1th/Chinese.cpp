
#include "Chinese.h"

void Chinese::setName(char *name) 
{
	this->name = name;
}

char *Chinese::getName(void) 
{
	return this->name;
}


void Chinese::eating(void) 
{ 
	cout<<"use chopsticks to eat"<<endl; 
}

void Chinese::wearing(void) 
{
	cout<<"wear chinese style"<<endl; 
}

void Chinese::driving(void) 
{
	cout<<"drive chinese car"<<endl; 
}

Chinese::~Chinese() 
{ 
	cout<<"~Chinese()"<<endl; 
}


