
#include <iostream>
#include <pthread.h>
#include <unistd.h>

using namespace std;

class Singleton;



class Singleton {

private:
	static Singleton *gInstance;
	static pthread_mutex_t g_tMutex;

public:
	static Singleton *getInstance()
	{
		return gInstance;
	}

	void printInfo(){ cout<<"This is singleton"<<endl; }

private:
	Singleton()
	{
		cout<<"Singleton()"<<endl;
	}

	
};

/* 懒汉模式: 你先给我做好 */
Singleton *Singleton::gInstance = new Singleton;


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

//	Singleton *s4 = new Singleton();

//	Singleton s5;


	/* 创建线程,在线程里也去调用Singleton::getInstance */
	pthread_t thread1ID;
	pthread_t thread2ID;

	pthread_create(&thread1ID, NULL, start_routine_thread1, NULL);
	pthread_create(&thread2ID, NULL, start_routine_thread2, NULL);

	sleep(3);

	return 0;
}


