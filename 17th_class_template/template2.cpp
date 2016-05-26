#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;


template<typename T>
class AAA {
private:
	T t;
public:
	void test_func(const T &t);
	void print(void);
};

template<typename T> void AAA<T>::test_func(const T &t)
{
	this->t = t;
}

template<typename T>
void AAA<T>::print(void)
{
	cout<<t<<endl;
}


template<>
class AAA<int> {
public:
	void test_func_int(const int & t)
	{
		cout<<t<<endl;
	}
	void print_int(void);
};

void AAA<int>::print_int(void)
{
	cout<<"for test"<<endl;
}

int main(int argc, char **argv)
{
	AAA<int> a;

	a.test_func_int(1);
	a.print_int();

	AAA<double> b;

	b.test_func(1.23);
	b.print();

	return 0;
}

