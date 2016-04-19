
#include <iostream>
using namespace std;

class Person {
private:
	char *name;
	int age;
	char *work;

public:

	Person() {cout <<"Pserson()"<<endl;}
	Person(char *name) 
	{
		cout <<"Pserson(char *)"<<endl;
		this->name = name;
	}

	Person(char *name, int age, char *work = "none") 
	{
		cout <<"Pserson(char*, int)"<<endl;
		this->name = name;
		this->age = age;
		this->work = work;
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
		cout<<"name = "<<name<<", age = "<<age<<", work = "<<work<<endl;
	}
};

int main(int argc, char **argv)
{
	Person per("zhangsan", 16);
	Person per2;   /* 调用无参构造函数 */
	Person per3(); /* int fun(); */

	per.printInfo();
	return 0;
}

