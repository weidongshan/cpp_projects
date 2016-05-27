
#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

void C()
{
	throw 1;
}

void B()
{
	C();
}

void A()
{
	try {
		B();
	} catch (int i)
	{
		cout<<"catch exception "<<i<<endl;
	}
}


int main(int argc, char **argv)
{
	A();
	return 0;
}


