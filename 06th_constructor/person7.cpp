
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
		cout << "~Person()"<<endl;
		if (this->name) {
			cout << "name = "<<name<<endl;
			delete this->name;
		}
		if (this->work) {
			cout << "work = "<<work<<endl;
			delete this->work;
		}
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

	Person *per7 = new Person("lisi", 18, "student");
	//delete per7;

}

int main(int argc, char **argv)
{
	test_fun();
	cout << "run test_fun end"<<endl;
	sleep(10);
	return 0;
}

