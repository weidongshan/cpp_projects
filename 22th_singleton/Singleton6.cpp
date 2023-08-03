
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
		if (NULL == gInstance)
		{
			pthread_mutex_lock(&g_tMutex);
			if (NULL == gInstance)
				gInstance = new Singleton;
			pthread_mutex_unlock(&g_tMutex);
		}
		
		return gInstance;
	}

	void printInfo(){ cout<<"This is singleton"<<endl; }

private:
	Singleton()
	{
		cout<<"Singleton()"<<endl;
	}

	
};

/* ����ģʽ: �õ�ʱ������ */
Singleton *Singleton::gInstance;
pthread_mutex_t Singleton::g_tMutex  = PTHREAD_MUTEX_INITIALIZER;


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


	/* �����߳�,���߳���Ҳȥ����Singleton::getInstance */
	pthread_t thread1ID;
	pthread_t thread2ID;

	pthread_create(&thread1ID, NULL, start_routine_thread1, NULL);
	pthread_create(&thread2ID, NULL, start_routine_thread2, NULL);

	sleep(3);

	return 0;
}


