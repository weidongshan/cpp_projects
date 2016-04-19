
#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Person {
private:
	char *name;
	int age;
	char *work;

public:

	Person() {//cout <<"Pserson()"<<endl;
		name = NULL;
		work = NULL;
	}
	Person(char *name) 
	{
		//cout <<"Pserson(char *)"<<endl;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->work = NULL;
	}

	Person(char *name, int age, char *work = "none") 
	{
		//cout <<"Pserson(char*, int)"<<endl;
		this->age = age;

		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);

		this->work = new char[strlen(work) + 1];
		strcpy(this->work, work);
	}

	~Person()
	{
		if (this->name)
			delete this->name;
		if (this->work)
			delete this->work;
	}

	void setName(char *n)
	{
		name = n;
	}
	int setAge(int a)
	{
		if (a < 0 || a > 150)
		{
			age = 0;
			return -1;
		}
		age = a;
		return 0;
	}
	void printInfo(void)
	{
		//printf("name = %s, age = %d, work = %s\n", name, age, work); 
		//cout<<"name = "<<name<<", age = "<<age<<", work = "<<work<<endl;
	}
};

void test_fun()
{
	Person per("zhangsan", 16);
	Person per2;   /* 调用无参构造函数 */
	Person per3(); /* int fun(); */

	Person *per4 = new Person;
	Person *per5 = new Person();

	Person *per6 = new Person[2];

	Person *per7 = new Person("lisi", 18, "student");
	Person *per8 = new Person("wangwu", 18);

	per.printInfo();
	per7->printInfo();
	per8->printInfo();

	delete per4;
	delete per5;
	delete []per6;
	delete per7;
	delete per8;

}

int main(int argc, char **argv)
{
	for (int i = 0; i < 1000000; i++)
		test_fun();
	cout << "run test_fun end"<<endl;
	sleep(10);
	return 0;
}

