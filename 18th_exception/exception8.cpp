
#include <iostream>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

using namespace std;

class MyException {
public:
	virtual void what(void) { cout<<"This is MyException"<<endl; }
};

class MySubException : public MyException{
public:
	void what(void) { cout<<"This is MySubException"<<endl; }
};


void C(int i) throw(int, double)
{
	int a = 1;
	double b= 1.2;
	float c = 1.3;

	if (i == 0)
	{
		cout<<"In C, it is OK"<<endl;
	}
	else if (i == 1)
		throw a;
	else if (i == 2)
		throw b;
	else if (i == 3)
		throw c;
	else if (i == 4)
		throw MyException();
	else if (i == 5)
		throw MySubException();
}

void B(int i)
{
	cout<<"call C ..."<<endl;
	C(i);
	cout<<"After call C"<<endl;
}

void A(int i)
{
	try {
		B(i);
	} catch (int j)
	{
		cout<<"catch int exception "<<j<<endl;
	} catch (MyException &e)
	{
		e.what();
	} 
}

void my_unexpected_func() 
{
	cout<<"my_unexpected_func"<<endl;
}

void my_terminate_func () { cout<<"my_terminate_func"<<endl; }  


int main(int argc, char **argv)
{
	int i;

	set_unexpected (my_unexpected_func);
	set_terminate(my_terminate_func);
	
	if (argc != 2)
	{
		cout<<"Usage: "<<endl;
		cout<<argv[0]<<" <0|1|2|3>"<<endl;
		return -1;
	}

	i = strtoul(argv[1], NULL, 0);

	A(i);
	
	return 0;
}


