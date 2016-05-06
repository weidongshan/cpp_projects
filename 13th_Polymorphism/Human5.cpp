#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Human {
private:
	int a;
public:
	virtual void eating(void) { cout<<"use hand to eat"<<endl; }
	virtual ~Human() { cout<<"~Human()"<<endl; }
	virtual void test(void) {cout<<"Human's test"<<endl; }
};

class Englishman : public Human {
public:
	void eating(void) { cout<<"use knife to eat"<<endl; }
	virtual ~Englishman() { cout<<"~Englishman()"<<endl; }
	virtual int test(void) {cout<<"Englishman's test"<<endl; return 1; }
};


class Chinese : public Human {
public:
	void eating(void) { cout<<"use chopsticks to eat"<<endl; }
	virtual ~Chinese() { cout<<"~Chinese()"<<endl; }
	virtual int test(void) {cout<<"Chinese's test"<<endl; return 1; }
};

void test_eating(Human& h)
{
	h.eating();
}

void test_return(Human& h)
{
	h.test();
}



int main(int argc, char **argv)
{
	Human h;
	Englishman e;
	Chinese c;

	test_return(h);
	test_return(e);
	test_return(c);


	return 0;
}


