
#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Person {
private:
	static int cnt;
	char *name;
	int age;

public:

	static int getCount(void); 

	Person() {//cout <<"Pserson()"<<endl;
		name = NULL;
		cnt++;
	}
	Person(char *name) 
	{
		//cout <<"Pserson(char *)"<<endl;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		cnt++;
	}

	Person(char *name, int age) 
	{
		cout <<"Pserson(char*, int), name = "<<name<<", age= "<<age<<endl;
		this->age = age;

		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);

		cnt++;
	}

	Person(Person &per) 
	{
		cout <<"Pserson(Person &)"<<endl;
		this->age = per.age;

		this->name = new char[strlen(per.name) + 1];
		strcpy(this->name, per.name);

		cnt++;
	}

	~Person()
	{
		cout << "~Person()"<<endl;
		if (this->name) {
			cout << "name = "<<name<<endl;
			delete this->name;
		}
	}

	void setName(char *name)
	{
		if (this->name) {
			delete this->name;
		}
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
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
		cout<<"name = "<<name<<", age = "<<age<<endl;
	}
};

int Person::cnt = 0; /* 定义和初始化 */

int Person::getCount(void) 
{ 
	return cnt; 
}

class Student : public Person {
};


int main(int argc, char **argv)
{
	Student s;
	s.setName("zhangsan");
	s.setAge(16);
	s.printInfo();

	return 0;
}

