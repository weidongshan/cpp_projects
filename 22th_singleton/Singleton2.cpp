
#include <iostream>
#include <pthread.h>
#include <unistd.h>

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

void *start_routine_thread1(void *arg)
{
	cout<<"this is thread 1 ..."<<endl;

	Singleton *s = Singleton::getInstance();
	s->printInfo();	
	
	return NULL;
}

void *start_routine_thread2(void *arg)
{
	cout<<"this is thread 2 ..."<<endl;

	Singleton *s = Singleton::getInstance();
	s->printInfo();	
	
	return NULL;
}


int main()
{
	Singleton *s = Singleton::getInstance();
	s->printInfo();	

	Singleton *s2 = Singleton::getInstance();
	s2->printInfo();	

	Singleton *s3 = Singleton::getInstance();
	s3->printInfo();	


	/* 创建线程,在线程里也去调用Singleton::getInstance */
	pthread_t thread1ID;
	pthread_t thread2ID;

	pthread_create(&thread1ID, NULL, start_routine_thread1, NULL);
	pthread_create(&thread2ID, NULL, start_routine_thread2, NULL);

	sleep(3);

	return 0;
}


