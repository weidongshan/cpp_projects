
#include <iostream>

using namespace std;

class Singleton;

Singleton *gInstance;


class Singleton {
public:
	static Singleton *getInstance()
	{
		if (NULL == gInstance)
			gInstance = new Singleton;
		return gInstance;
	}

	Singleton()
	{
		cout<<"Singleton()"<<endl;
	}

	void printInfo(){ cout<<"This is singleton"<<endl; }
	
};

int main()
{
	Singleton *s = Singleton::getInstance();
	s->printInfo();	

	Singleton *s2 = Singleton::getInstance();
	s2->printInfo();	

	Singleton *s3 = Singleton::getInstance();
	s3->printInfo();	

	return 0;
}


